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
  	  string p;
  	  p=s;
  	  sort(s.begin(),s.end());
  	  if(s[0]==s[s.size()-1]){
  	    cout<<-1<<endl;	
	  }
	  else{
	  	cout<<s<<endl;
	  }
  }
  return 0;
}

