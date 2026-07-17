#pragma once
#include <coroutine>

struct UnitTask
{
  struct promise_type;
  using handle_type = std::coroutine_handle<promise_type>;

  UnitTask(handle_type h) : handle(h) {}
  ~UnitTask() { if (handle) handle.destroy(); }

  UnitTask(const UnitTask&) = delete;
  UnitTask& operator=(const UnitTask&) = delete;
  UnitTask(UnitTask&& other) noexcept : handle(other.handle) { other.handle = nullptr; }

  struct promise_type
  {
    UnitTask get_return_object() { return UnitTask(handle_type::from_promise(*this)); }
    std::suspend_always initial_suspend() { return {}; }
    std::suspend_always final_suspend() noexcept { return {}; }
    void unhandled_exception() { std::terminate(); }
    void return_void() {}
    std::suspend_always yield_value(int) { return {}; }
  };

  // Resume coroutine. Returns true if coroutine is still alive after resume.
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