

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

    ASSERT_EQ(des(4, -4, 1).count, 2);
    ASSERT_EQ(des(4, -4, 1).x1, 0.5);
    ASSERT_EQ(des(4, -4, 1).x2, 0.5);

}

TEST(desTest, greather0){
    ASSERT_EQ(des(1, 5, -6).count, 2);
    ASSERT_EQ(des(1, 5, -6).x1, 1);
    ASSERT_EQ(des(1, 5, -6).x2, -6);

    ASSERT_EQ(des(1, -1, -6).count, 2);
    ASSERT_EQ(des(1, -1, -6).x1, 3);
    ASSERT_EQ(des(1, -1, -6).x2, -2);

    ASSERT_EQ(des(5, 2, -7).count, 2);
    ASSERT_EQ(des(5, 2, -7).x1, 1);
    ASSERT_FLOAT_EQ(des(5, 2, -7).x2, -1.4);


}

TEST(desTest, a0) {
    ASSERT_EQ(des(0, 3, -4).count, 1);
    ASSERT_EQ(des(0, 3, -4).x1, 4/3);
    ASSERT_EQ(des(0, 4, -4).x2, 4/3);

    ASSERT_EQ(des(0, 2, 8).count, 1);
    ASSERT_EQ(des(0, 2, 8).x1, -4);
    ASSERT_EQ(des(0, 2, 8).x2, -4);
}

TEST(desTest, b0) {
    ASSERT_EQ(des(1, 0, 16).count, 0);
    ASSERT_EQ(des(1, 0, 16).x1, -1);
    ASSERT_EQ(des(1, 0, 16).x2, -1);

    ASSERT_EQ(des(1, 0, -9).count, 2);
    ASSERT_EQ(des(1, 0, -9).x1, 3);
    ASSERT_EQ(des(1, 0, -9).x2, -3);
}

TEST(desTest, c0) {
    ASSERT_EQ(des(1, 3, 0).count, 2);
    ASSERT_EQ(des(1, 3, 0).x1, 0);
    ASSERT_EQ(des(1, 3, 0).x2, -3);

    ASSERT_EQ(des(1, -7, 0).count, 2);
    ASSERT_EQ(des(1, -7, 0).x1, 7);
    ASSERT_EQ(des(1, -7, 0).x2, 0);

}

TEST(desTest, negative){
    ASSERT_EQ(des(1, 0, 16).count, 0);
    ASSERT_EQ(des(1, 0, 16).x1, -1);
    ASSERT_EQ(des(1, 0, 16).x2, -1);

    ASSERT_EQ(des(1, -4, 5).count, 0);
    ASSERT_EQ(des(1, -4, 5).x1, -1);
    ASSERT_EQ(des(1, -4, 5).x2, -1);

}





