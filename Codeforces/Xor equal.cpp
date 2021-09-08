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
	   map<int,int>mp;
	   int op=0;
	   int mini=INT_MAX;
	   for(int i=1;i<n;i++){
	   	  if(mp[v[i]]==0){
	   	     int d=v[i]^x;
			 if(mp[d]){
			 	mp[d]++;
			 	op++;
			 	//cout<<op<<" ";
			 }
			 else{
			 	mp[v[i]]++;
			 }	
		  }
		  else{
		  	mp[v[i]]++;
		  }
	   }
	   int maxi=0;
	   for(auto c:mp){
	   	  maxi=max(maxi,c.second);
	   }
	   cout<<maxi<<" "<<op<<endl;
	   	
   }
  return 0;
}

