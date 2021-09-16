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
   	  int n;
   	  cin>>n;
   	  vi v(n);
   	  rep(i,0,n){
   	    cin>>v[i];	
	  }
	  int flag=0;
	 rep(i,0,n-1){
	 	if(v[i]>v[i+1]){
	 		flag=1;
		 }
	 }
	 if(!flag){
	 	cout<<0<<endl;
	 }
	 else if(v[0]==1||v[n-1]==n){
	 	cout<<1<<endl;
	 }
	 else if(v[n-1]==1&&v[0]==n){
	 	cout<<3<<endl;
	 }
	 else{
	 	cout<<2<<endl;
	 }
	  
   }
  return 0;
}

