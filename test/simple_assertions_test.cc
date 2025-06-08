#include <gtest/gtest.h>

// Demonstrate some basic assertions
TEST(SimpleAssertions, HelloWorld) {
    // Expect two strings not to be equal
    EXPECT_STRNE("hello", "world");
}

TEST(SimpleAssertions, Arithmetic) {
    // Expect equality
    EXPECT_EQ(7 * 6, 42);
}
