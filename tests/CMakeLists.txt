add_executable(tinykv_tests test_smoke.cpp)
target_link_libraries(tinykv_tests PRIVATE tinykv_core GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(tinykv_tests)