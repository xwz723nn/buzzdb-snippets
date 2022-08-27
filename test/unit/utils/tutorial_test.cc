

#include <gtest/gtest.h>
#include <algorithm>
#include <cstdint>
#include <cstring>
#include <exception>
#include <random>
#include <utility>
#include <vector>

#include "utils/tutorial.h"

namespace {

TEST(TutorialTests, BasicTest) {

    auto course1 = buzzdb::utils::Course(1, "math");
    auto course2 = buzzdb::utils::Course(2, "science");
    auto course3 = buzzdb::utils::Course(3, "art");
    auto course4 = buzzdb::utils::Course(4, "music");
    auto course5 = buzzdb::utils::Course(5, "literature");

    auto student1 = buzzdb::utils::UndergradStudent(1, "alice", 3);
    auto student2 = buzzdb::utils::GraduateStudent(2, "rahul", 55);

    EXPECT_EQ(student1.add_course(course1), true);
    EXPECT_EQ(student1.add_course(course2), true);
    EXPECT_EQ(student1.add_course(course3), true);

    EXPECT_EQ(student1.add_course(course4), false);

    std::cout << student1;

    EXPECT_EQ(student2.add_course(course1), true);

    std::cout << student2;

}

}  // namespace

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

