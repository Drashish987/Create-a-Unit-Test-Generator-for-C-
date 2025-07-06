#include "gtest/gtest.h"
#include "../src/employee.cpp"

TEST(EmployeeTest, PromoteFunction) {
    Employee e("John", "Junior Developer");
    e.promote("Senior Developer");
    EXPECT_EQ(e.position, "Senior Developer");
}

TEST(EmployeeTest, GetDetailsFunction) {
    Employee e("Alice", "Manager");
    EXPECT_EQ(e.getDetails(), "Alice - Manager");
}
