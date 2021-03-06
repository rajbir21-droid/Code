/*
Problem Introduction
	You are organizing a funny competition for children. As a prize fund you have π
	candies. You would like to use these candies for top π places in a competition
	with a natural restriction that a higher place gets a larger number of candies.
	To make as many children happy as possible, you are going to find the largest
	value of π for which it is possible.
Problem Description
	Task. The goal of this problem is to represent a given positive integer π as a sum of as many pairwise
	distinct positive integers as possible. That is, to find the maximum π such that π can be written as
	π1 + π2 + Β· Β· Β· + ππ where π1, . . . , ππ are positive integers and ππ ΜΈ= ππ for all 1 β€ π < π β€ π.
Input Format. The input consists of a single integer π.
Constraints. 1 β€ π β€ 109
.
Output Format. In the first line, output the maximum number π such that π can be represented as a sum
of π pairwise distinct positive integers. In the second line, output π pairwise distinct positive integers
that sum up to π (if there are many such representations, output any of them).
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
