#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

int main(){
  int t;
  cin>>t;
  while(t--){
  	int n,a,b;
  	cin>>n>>a>>b;
  	string s;
  	cin>>s;
  	int number1=0,number=0;
  	for(auto c:s){
  		if(c=='1'){
  			number1++;
		  }
	  }
	  number=s.size()-number1;
  	cout<<a*number+b*number1<<endl;
  }
  return 0;
}

