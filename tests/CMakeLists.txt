# Fetch Catch2 (header-only test framework)
include(FetchContent)
FetchContent_Declare(
  catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v3.5.0
)
FetchContent_MakeAvailable(catch2)

add_executable(run_tests test_vector.cpp)
target_link_libraries(run_tests PRIVATE segfault_academy Catch2::Catch2WithMain)
add_test(NAME run_tests COMMAND run_tests)

