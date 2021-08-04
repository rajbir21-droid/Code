/*
Problem Introduction
	You are organizing a funny competition for children. As a prize fund you have 𝑛
	candies. You would like to use these candies for top 𝑘 places in a competition
	with a natural restriction that a higher place gets a larger number of candies.
	To make as many children happy as possible, you are going to find the largest
	value of 𝑘 for which it is possible.
Problem Description
	Task. The goal of this problem is to represent a given positive integer 𝑛 as a sum of as many pairwise
	distinct positive integers as possible. That is, to find the maximum 𝑘 such that 𝑛 can be written as
	𝑎1 + 𝑎2 + · · · + 𝑎𝑘 where 𝑎1, . . . , 𝑎𝑘 are positive integers and 𝑎𝑖 ̸= 𝑎𝑗 for all 1 ≤ 𝑖 < 𝑗 ≤ 𝑘.
Input Format. The input consists of a single integer 𝑛.
Constraints. 1 ≤ 𝑛 ≤ 109
.
Output Format. In the first line, output the maximum number 𝑘 such that 𝑛 can be represented as a sum
of 𝑘 pairwise distinct positive integers. In the second line, output 𝑘 pairwise distinct positive integers
that sum up to 𝑛 (if there are many such representations, output any of them).
Sample 1.
Input:
6
Output:
3
1 2 3
Sample 2.
Input:
8
Output:
3
1 2 5
Sample 3.
Input:
2
Output:
1
2
Need Help
*/

#include <iostream>
#include <vector>
using namespace std;
vector<int> optimal_summands(int n) {
  vector<int> sum;
  //write your code here
  int i=1;
  while(n>0){
  	n-=i;
  	if(n>=i+1){
  		sum.push_back(i);
  		i++;
  	}
  	else{
  		sum.push_back(n+i);
  		n=0;
  		break;
	}
  }
  return sum;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> summands = optimal_summands(n);
  cout << summands.size() << '\n';
  for (size_t i = 0; i < summands.size(); ++i) {
    cout << summands[i] << ' ';
  }
}
