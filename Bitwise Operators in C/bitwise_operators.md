# Task

Given set , find:

the maximum value of which is less than a given integer , where and (where ) are two
integers from set S.
the maximum value of which is less than a given integer , where and (where ) are two
integers from set S.
the maximum value of which is less than a given integer , where and (where ) are
two integers from set S.

# Input Format

The only line contains 2 space-separated integers, n and k , respectively.

# Constraints

. 2≤ n ≤ 10^3

. 2≤ k ≤n

# Output Format

The first line of output contains the maximum possible value of a&b.
The second line of output contains the maximum possible value of a+b.
The second line of output contains the maximum possible value of a⊕b.

# Sample Input 0

5
4

# Sample Output 0

2
3
3

# Explanation 0

n=5. k = 4

S = {1, 2, 3, 4, 5}

All possible values of a and b are:

1. a = 1, b = 2; a&b = 0; a|b = 3; a⊕b = 3;

2. a = 1, b = 3; a&b = 1; a|b = 3; a⊕b = 2;

3. a = 1, b = 4; a&b = 0; a|b = 5; a⊕b = 5;

4. a = 1, b = 5; a&b = 1; a|b = 5; a⊕b = 4;

5. a = 2, b = 3; a&b = 2; a|b = 3; a⊕b = 1

6. n = 2, b = 4; a&b = 0; a|b = 6; a⊕b = 6;

7. a = 2, b = 5; a&b = 0; a|b = 7; a⊕b = 7;

8. a = 3, b = 4; a&b = 0; a|b = 7; a⊕b = 7;

9. a = 3, b = 5; a&b = 1; a|b = 7; a⊕b = 6;

10. a = 4, b = 5; a&b = 4; a|b = 5; a⊕b = 1;

⚫ The maximum possible value of a&b that is also < (k = 4) _ is _ 2 . so we print 2 on first line.

⚫ The maximum possible value of alb that is also < (k = 4) _ ls _ 3 so we print 3 on second line.

⚫ The maximum possible value of ab that is also < (k = 4) _ is _ 3 so we print 3 on third line.
