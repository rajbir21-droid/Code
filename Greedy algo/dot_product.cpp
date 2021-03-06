/*
Problem Introduction
     You have ๐ ads to place on a popular Internet page. For each ad, you know how
      much is the advertiser willing to pay for one click on this ad. You have set up ๐
    slots on your page and estimated the expected number of clicks per day for each
    slot. Now, your goal is to distribute the ads among the slots to maximize the
    total revenue.
Problem Description
      Task. Given two sequences ๐1, ๐2, . . . , ๐๐ (๐๐ is the profit per click of the ๐-th ad) and ๐1, ๐2, . . . , ๐๐ (๐๐ is
              the average number of clicks per day of the ๐-th slot), we need to partition them into ๐ pairs (๐๐, ๐๐ )
          such that the sum of their products is maximized.
Input Format. The first line contains an integer ๐, the second one contains a sequence of integers
        ๐1, ๐2, . . . , ๐๐, the third one contains a sequence of integers ๐1, ๐2, . . . , ๐๐.
Constraints. 1 โค ๐ โค 103 ;โ105 โค ๐๐ , ๐๐ โค 105 for all 1 โค ๐ โค ๐.
Output Format. Output the maximum value of โ๏ธ๐ ๐=1 ๐๐๐๐
, where ๐1, ๐2, . . . , ๐๐ is a permutation of
๐1, ๐2, . . . , ๐๐.
  Sample 1.
  Input:
  1
  23
  39
  Output:
  897
  897 = 23 ยท 39.

  Sample 2.
  Input:
  3
  1 3 -5
  -2 4 1
  Output:
  23
  23 = 3 ยท 4 + 1 ยท 1 + (โ5) ยท (โ2)
*/

//Solution

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

long long max_dot_product(vector<int> a, vector<int> b) {
  // write your code here
  sort(a.begin(),a.end(),greater<int>());
   sort(b.begin(),b.end(),greater<int>());
  long long result = 0;
  for (size_t i = 0; i < a.size(); i++) {
    result += ((long long) a[i]) * b[i];
  }
  return result;
}

int main() {
  size_t n;
  cin >> n;
  vector<int> a(n), b(n);
  for (size_t i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (size_t i = 0; i < n; i++) {
    cin >> b[i];
  }
  cout << max_dot_product(a, b) << std::endl;
}
