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
		ll hp,hh,m;
	    cin>>hp>>hh>>m;
		vector<ll>mp(m);
		vector<ll>mh(m);
		for(int i=0;i<m;i++){
			cin>>mp[i];
		}
		for(int i=0;i<m;i++){
			cin>>mh[i];
		}
		ll ctr=0,i=0;
		ll maxi=0;
		while(i<m){
		  int d=ceil((float)mh[i]/hp);
		  maxi=max(maxi,mp[i]);
		  mp[i]*=d;
		  hh-=mp[i];
		  i++;
		}
		hh+=maxi;
		if(hh>0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		
	}

  return 0;
}

