You are given a matrix of dimension n*n. All the cells are initially, zero. You are given Q queries, which contains 4 integers a b c d where (a,b) is the TOP LEFT cell and (c,d) is the Bottom Right cell of a submatrix. Now, all the cells of this submatrix have to be incremented by one. After all the Q queries have been performed. Your task is to find the final resulting Matrix.
Note : Zero-Based Indexing is used for cells of the matrix. 
 example 1 
 ```
 Input: n = 6, q = 6,
Queries = {
{4,0,5,3},
{0,0,3,4},
{1,2,1,2},
{1,1,2,3},
{0,0,3,1},
{1,0,2,4}}.
Output: 
2 2 1 1 1 0
3 4 4 3 2 0 
3 4 3 3 2 0
2 2 1 1 1 0
1 1 1 1 0 0
1 1 1 1 0 0
Explanation:After incrementing all the
sub-matrices of given queries we will 
get the final output.

```
example 2
```
Input: n = 4, q = 2,
Queries = {
{0,0,3,3},
{0,0,2,2}}.
Output: 
2 2 2 1 
2 2 2 1  
2 2 2 1 
1 1 1 1 
Explanation:After incrementing all the
sub-matrices of given queries we will
get the final output.
```