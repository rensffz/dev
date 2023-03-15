#ifndef EQ_H
#define EQ_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "eq.h"
}
TEST(eqTest, D0){
    ASSERT_EQ(des(0), 0);
    ASSERT_EQ(des(0), 0);
    ASSERT_EQ(des(0), 0);

}

TEST(eqTest, greather0){


}

TEST(eqTest, negative){


}

TEST(eqTest, inputFile){


}



#endif //EQ_H
