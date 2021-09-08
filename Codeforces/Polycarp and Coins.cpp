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
  ll t;
  cin>>t;
  while(t--){
  	ll n;
  	cin>>n;
  	ll d=0;
    d=(n+1)/3;
  	ll e=abs(n-2*d);
  	cout<<e<<" "<<d<<endl;
  }
  return 0;
}

