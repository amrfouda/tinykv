#include <gtest/gtest.h>
#include "tinykv/version.hpp"

TEST(Version, ReturnsCurrentVersion)
{
  EXPECT_EQ(tinykv::version(), "0.1.0");
}