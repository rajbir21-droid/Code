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
  	ll a,b,x,y,n,c,d,e,f;
  	cin>>a>>b>>x>>y>>n;
  	c=max(x,a-n);
  	d=max(y,b-n);
  	e=max(a-n+b-d,x);
  	f=max(b-n+a-c,y);
  	cout<<min(c*f,d*e)<<endl;
  }
  return 0;
}

