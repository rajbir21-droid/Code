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
   	  string s;
   	  cin>>s;
   	  vi v; vi b;
   	  int ctr=0;
   	  for(int i=0;i<s.size();i++){
   	  	  while(s[i]=='1'){
   	  	     ctr++;
   	  	     i++;
		  }
		  if(ctr!=0){
		  	v.push_back(ctr);
		  	ctr=0;
		  }
	   }
	   sort(v.begin(),v.end(),greater<int>());
	   int alice=0;
	   for(int i=0;i<v.size();i+=2){
	   	  alice+=v[i];
	   }
	   cout<<alice<<endl;
   }
  return 0;
}

