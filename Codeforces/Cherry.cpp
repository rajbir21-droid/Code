#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long>
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
  	vi v(n);
  	rep(i,0,n){
  		cin>>v[i];
	  }
	stack<ll>sp;
	sp.push(v[0]);
	ll maxi=INT_MIN;
	for(int i=1;i<n;i++){
		ll m=v[i]*sp.top();
		maxi=max(maxi,m);
		sp.pop();
		sp.push(v[i]);
	}
	cout<<maxi<<endl;
  }
  return 0;
}

