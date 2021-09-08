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
   	  int n,x;
   	  cin>>n>>x;
   	  vi v(n);
   	  rep(i,0,n){
   	    cin>>v[i];	
	   }
	   map<int,int>mp,mu;
	   for(int i=0;i<n;i++){
	   	   mp[v[i]]++;
	   	   int d=v[i]^x;
	   	   mu[d]++;
	   }
	   int maxi=0,mini=INT_MAX;
	   for(auto c:v){
	   	  maxi=max(maxi,mp[c]+mu[c]);
	   }
	  for(auto c:v){
	     if(mp[c]+mu[c]==maxi){
	     	mini=min(mini,mu[c]);
		 }
	  }
	   cout<<maxi<<" "<<mini<<endl;
   }
  return 0;
}

