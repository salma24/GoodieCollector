# GoodieCollector
Memory Limit:1024 MB
Time Limit: 2 s

Goodie Collector (300 points)

Introduction

The big day has finally arrived, Bloomberg has come to your university and prepared a fun contest for
you. To satisfy basic student needs, Bloomberg has prepared some tables arranged in a row with some
different goodies including socks, pens, and other useful items. Due to logistic reasons, there is only a
single type of goodie on each table. Two adjacent tables are exactly one metre apart, every table is
considered of negligible width for this problem and the tables are numbered from left to right. Of course,
you want to maximize the number of different goodies you can get. One restriction applies however: as
you do not want to appear greedy to your fellow friends, you want to make sure that between every two
tables you take goodies from there is at least some given distance.
Input Specifications
The first line contains the integers n, k and d that are separated by a space. The integer n is the number
of tables (1 <= n <= 12), k is the number of different goodies (1 <= k <= 12) and d is the minimum
distance in meters between two tables you take goodies from (1 <= d <= n).
The second line contains n space separated integers. The i-th integer is the goodie that can be picked up
on the i-th table. A goodie type is a number between 0 (inclusive) and k (exclusive).
Output Specifications
Print the maximum number of different goodie types you can get.
Sample Input/Output

Input

8 3 3
1 2 2 1 0 0 0 0
Output
2
Explanation

Here, one can only select two different types of goodies.
Either select goodie types 0 and 1 by going to the tables (which are assumed to be
1-indexed):

- 1 4 7
- or 1 4 8
- or 1 5 8
- or 1 5
- or 1 6
- or 1 7
- or 1 8
- or 4 7
- or 4 8

Or select goodie types 0 and 2 by going to the the tables:

- 2 5 8
- or 2 5
- or 2 6
- or 2 7
- or 2 8
- or 3 6
- or 3 7
- or 3

Input
5 4 2
0 0 3 3 2
Output
3

Explanation
It is possible to get 3 different types of goodies from tables 1, 3 and 5. This is
optimal as goodie type 1 is not available anywhere and this is the only goodie type
we do not get.
