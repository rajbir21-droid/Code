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
  int n,m;
  cin>>n>>m;
  vi v(n);
  rep(i,0,n){
  	cin>>v[i];
  }
  int res=0,ans=0;
  rep(i,0,n){
  	ans=(res+v[i])/m;
  	cout<<ans<<" ";
  	res=(res+v[i])%m;
  	//cout<<res<<" ";
  }
  return 0;
}

