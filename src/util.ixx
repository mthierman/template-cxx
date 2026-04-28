module;

// #include <icu.h>

export module util;

import std;

export namespace util {
auto log(std::string_view message) -> void { std::println("{}", message); }
} // namespace util
