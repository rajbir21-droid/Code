#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		vector<ll>v(n);
		for(ll i=0;i<n;i++){
			cin>>v[i];
		}
		sort(v.begin(),v.end(),greater<ll>());
		ll sum=0,maxi=0;
		for(int i=0;i<=k;i++){
				sum+=v[i];
				maxi=max(maxi,sum);
		}
		cout<<maxi<<endl;
	}
}
