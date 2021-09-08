#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int maxil=0;
int maxir=INT_MIN;
void solve(ll a ,ll b){
		ll mid=b/2;
		ll d=b%max(a,mid+1);
		maxil=d;
}

int main(){
  ll t;
  cin>>t;
  while(t--){
  	ll a,b;
  	cin>>a>>b;
  	solve(a,b);
  	cout<<maxil<<endl;
  }	
}
