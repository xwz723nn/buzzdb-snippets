

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

    auto student1 = buzzdb::utils::UndergradStudent(1, "alice", 3);
    auto student2 = buzzdb::utils::UndergradStudent(2, "rahul", 4);
    auto student3 = buzzdb::utils::GraduateStudent(10, "mark", 55);

    student1.add_course(course1);

    std::cout << student1;

}

}  // namespace

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

