

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "eq.h"
}

TEST(desTest, D0){
    ASSERT_EQ(des(1, -14, 49).count, 2);
    ASSERT_EQ(des(1, -14, 49).x1, 7);
    ASSERT_EQ(des(1, -14, 49).x2, 7);
    ASSERT_EQ(des(1, -14, 49).x1, des(1, -14, 49).x2);

    ASSERT_EQ(des(4, -4, 1).count, 2);
    ASSERT_EQ(des(4, -4, 1).x1, 0.5);
    ASSERT_EQ(des(4, -4, 1).x2, 0.5);
    ASSERT_EQ(des(4, -4, 1).x1, des(4, -4, 1).x2);

    ASSERT_EQ(des(1, 0, 0).count, 2);
    ASSERT_EQ(des(1, 0, 0).x1, 0);
    ASSERT_EQ(des(1, 0, 0).x2, 0);
    ASSERT_EQ(des(1, 0, 0).x1, des(1, 0, 0).x2);

    ASSERT_EQ(des(1000, 0, 0).count, 2);
    ASSERT_EQ(des(1000, 0, 0).x1, 0);
    ASSERT_EQ(des(1000, 0, 0).x2, 0);
    ASSERT_EQ(des(1000, 0, 0).x1, des(1000, 0, 0).x2);

    ASSERT_EQ(des(0, 5, 3).count, 2);
    ASSERT_FLOAT_EQ(des(0, 5, 3).x1, -0.6);
    ASSERT_FLOAT_EQ(des(0, 5, 3).x2, -0.6);
    ASSERT_FLOAT_EQ(des(0, 5, 3).x1, des(0, 5, 3).x2);

    ASSERT_EQ(des(0, -7, 14).count, 2);
    ASSERT_EQ(des(0, -7, 14).x1, 2);
    ASSERT_EQ(des(0, -7, 14).x2, 2);
    ASSERT_EQ(des(0, -7, 14).x1, des(0, -7, 14).x2);

    ASSERT_EQ(des(0, 5, 0).count, 2);
    ASSERT_EQ(des(0, 5, 0).x1, 0);
    ASSERT_EQ(des(0, 5, 0).x2, 0);
    ASSERT_EQ(des(0, 5, 0).x1, des(0, 5, 0).x2);

    ASSERT_EQ(des(0, 100, 0).count, 2);
    ASSERT_EQ(des(0, 100, 0).x1, 0);
    ASSERT_EQ(des(0, 100, 0).x2, 0);
    ASSERT_EQ(des(0, 100, 0).x1, des(0, 5, 0).x2);

}

TEST(desTest, greather0){
    ASSERT_EQ(des(1, 5, -6).count, 2);
    ASSERT_EQ(des(1, 5, -6).x1, 1);
    ASSERT_EQ(des(1, 5, -6).x2, -6);

    ASSERT_EQ(des(5, 2, -7).count, 2);
    ASSERT_EQ(des(5, 2, -7).x1, 1);
    ASSERT_FLOAT_EQ(des(5, 2, -7).x2, -1.4);

    ASSERT_EQ(des(1, 3, 0).count, 2);
    ASSERT_EQ(des(1, 3, 0).x1, 0);
    ASSERT_EQ(des(1, 3, 0).x2, -3);

    ASSERT_EQ(des(1, -7, 0).count, 2);
    ASSERT_EQ(des(1, -7, 0).x1, 7);
    ASSERT_EQ(des(1, -7, 0).x2, 0);

    ASSERT_EQ(des(1, 0, -9).count, 2);
    ASSERT_EQ(des(1, 0, -9).x1, 3);
    ASSERT_EQ(des(1, 0, -9).x2, -3);

    ASSERT_EQ(des(-1, 0, 1.44).count, 2);
    ASSERT_FLOAT_EQ(des(-1, 0, 1.44).x1, 1.2);
    ASSERT_FLOAT_EQ(des(-1, 0, 1.44).x2, -1.2);

}

TEST(desTest, negative){
    ASSERT_EQ(des(1, -4, 5).count, 0);
    ASSERT_EQ(des(1, -4, 5).x1, -1);
    ASSERT_EQ(des(1, -4, 5).x2, -1);

    ASSERT_EQ(des(1, 0, 16).count, 0);
    ASSERT_EQ(des(1, 0, 16).x1, -1);
    ASSERT_EQ(des(1, 0, 16).x2, -1);

    ASSERT_EQ(des(0, 0, 3).count, 0);
    ASSERT_EQ(des(0, 0, 3).x1, -1);
    ASSERT_EQ(des(0, 0, 3).x2, -1);

    ASSERT_EQ(des(0, 0, 1000).count, 0);
    ASSERT_EQ(des(0, 0, 1000).x1, -1);
    ASSERT_EQ(des(0, 0, 1000).x2, -1);

    ASSERT_EQ(des(0, 0, 0).count, 2);
    ASSERT_EQ(des(0, 0, 0).x1, 0);
    ASSERT_EQ(des(0, 0, 0).x2, 0);
}






