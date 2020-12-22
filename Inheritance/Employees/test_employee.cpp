#include "employee.h"
#include "manager.h"
#include "trainee.h"
#include "engineer.h"
#include <gtest/gtest.h>


TEST(Manager,Pay)
{
    Manager gm("12345","Akash",400000,5,12,25);
    EXPECT_EQ(60000,gm.appraisal());
    EXPECT_EQ(400000,gm.payroll());
}
TEST(Engineer,Pay)
{
    Engineer em("123","Rajan",33000,12,11);
    EXPECT_EQ(6600,em.appraisal());
    EXPECT_EQ(33000,em.payroll());
}
TEST(Trainee,Pay)
{
    Trainee tn("1234","Dutta",25000,1,"ICP",60);
    EXPECT_EQ(8750,tn.appraisal());
    EXPECT_EQ(25000,tn.payroll());
}
