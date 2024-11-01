k-diff pairs
Medium
50
Given a sorted array A of size n and a number k, return the number of unique pairs which have a difference of k.

|arr[i] - arr[j]| = k where i < j

Example
A: [1, 3, 5, 7, 10]
k: 2
Answer: 3
A: [1, 3, 5, 7, 10]
k: 3
Answer: 1
A: [1, 3, 5, 7, 10]
k: 1
Answer: 0
Testing
Input Format
The first line contains an integer ‘T’ denoting the number of test cases.

For each test case, the input contains two lines:

Two space-separated integers n and k.
n space-separated integers denoting elements of the array A.
Output format
For each test-cases, the output is an integer denoting the number of k-diff pairs.