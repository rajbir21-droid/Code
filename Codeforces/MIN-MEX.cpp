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
  	string s;
  	cin>>s;          
  	int cone=0,czero=0;
  	for(auto c:s){
  		if(c=='0'){
  			czero=1;
		  }
		  else if(c!='0'&&czero==1){
		  	cone++;
		  	czero=0;
		  }
	  }
	if(s[s.size()-1]=='0'){
		cone++;
	}
	 cout<<min(cone,2)<<endl;
  }
  return 0;
}

