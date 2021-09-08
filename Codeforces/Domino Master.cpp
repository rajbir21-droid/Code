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
  	int n;
  	cin>>n;
  	string s;
  	cin>>s;
  	string ans;
  	for(int i=0;i<s.size();i++){
  		  if(s[i]=='U'){
  		  	   ans.push_back('D');
			}
			else if(s[i]=='D'){
				ans.push_back('U');
			}
			else{
				ans.push_back(s[i]);
			}
	  }
	  cout<<ans<<endl;
  }
  return 0;
}

