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
  int n,a,p,sum=0;
  cin>>n;
  vector<pair<int,int>>b;
  for(int i=0;i<n;i++){
  	  cin>>a>>p;
  	  b.push_back(make_pair(a,p));
  }
  int ans=0,mini=INT_MAX;
  for(int i=0;i<n;i++){
      if(b[i].ss<mini){
      	mini=b[i].ss;
      	ans+=mini*b[i].ff;
	  }
	  else{
	  	ans+=mini*b[i].ff;
	  }
  }
  cout<<ans<<endl;
  return 0;
}

