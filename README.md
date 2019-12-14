# Sort-and-Convert-time

Sort3.cpp has the following function.
The following test shows what this function is supposed to do:

TEST(Sort3Test, test1) {
 int i = 3;
 int j = 2;
 int k = 1;
 Sort3(i, j, k);
 EXPECT_EQ(i, 1);
 EXPECT_EQ(j, 2);
 EXPECT_EQ(k, 3);
}
That is, after execution Sort3(i, j, k) , variable i should have the smallest value, k should have the
largest value, and j should have the median value. In other words, function Sort3 sorts the given three
arguments, i , j and k .

ConvertTime.cpp
This program converts between a 12-hour-format time and a 24-hour-format time. For this purpose, the file
has the following two function:
The first one converts a 24-hour time into a 12-hour time, and the second one performs the opposite.
Time24 and Time12 are defined in the ConvertTime.hpp
