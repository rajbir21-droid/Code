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
