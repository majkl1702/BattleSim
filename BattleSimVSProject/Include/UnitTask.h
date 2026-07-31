#pragma once
#include <coroutine>

//! A simple coroutine task that does not return a value and can be resumed.
struct UnitTask
{
  struct promise_type;
  using handle_type = std::coroutine_handle<promise_type>;

  UnitTask(handle_type h) : handle(h) {}
  ~UnitTask()
  {
    if (handle)
      handle.destroy();
  }

  UnitTask(const UnitTask&) = delete;
  UnitTask& operator=(const UnitTask&) = delete;
  UnitTask(UnitTask&& other) noexcept : handle(other.handle) { other.handle = nullptr; }

  //! The promise type for the UnitTask coroutine.
  struct promise_type
  {
    //! The coroutine will return a UnitTask object when it is created.
    UnitTask get_return_object() { return UnitTask(handle_type::from_promise(*this)); }

    //! The coroutine will suspend immediately upon starting, allowing the caller to control when it resumes.
    std::suspend_always initial_suspend() { return {}; }

    //! The coroutine will suspend at the end, allowing the caller to check if it is done and resume it if needed.
    std::suspend_always final_suspend() noexcept { return {}; }

    //! If an exception is thrown within the coroutine, this function will be called to handle it.
    void unhandled_exception() { std::terminate(); }

    //! The coroutine does not return a value, so this function is empty.
    void return_void() {}

    //! The coroutine will suspend whenever it yields a value, allowing the caller to control when it resumes.
    std::suspend_always yield_value(int) { return {}; }
  };

  //! Resume coroutine. Returns true if coroutine is still alive after resume.
  const bool Resume()
  {
    if (!handle || handle.done())
      return false;

    handle.resume();
    return !handle.done();
  }

  const bool IsDone()
  {
    return handle.done();
  }

private:
  handle_type handle;
};