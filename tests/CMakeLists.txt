# Enable FetchContent for pulling GoogleTest
include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.15.0
)

FetchContent_MakeAvailable(googletest)

# Automatically pick up all test source files in this directory
file(GLOB TEST_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

# Create test executable
add_executable(run_tests ${TEST_SOURCES})

# Link with your library and GoogleTest
target_link_libraries(run_tests
  PRIVATE
    segfault_academy
    gtest
    gtest_main
)

# Enable automatic discovery of GoogleTest tests
include(GoogleTest)
gtest_discover_tests(run_tests)

