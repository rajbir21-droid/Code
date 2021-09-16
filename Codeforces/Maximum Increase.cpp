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
   int n;
   cin>>n;
   vi v(n);
   rep(i,0,n){
   	cin>>v[i];
   }
   int maxi=INT_MIN;
   int ctr=0,mctr=0;
   rep(i,0,n){
   	 if(v[i]>maxi){
   	    maxi=v[i];
		ctr++;
		//cout<<ctr<<"->";	
	  }
	  else{
	  	maxi=v[i];
	  	ctr=1;
	  }
	mctr=max(mctr,ctr);
   }
   cout<<mctr<<endl;
  return 0;
}

