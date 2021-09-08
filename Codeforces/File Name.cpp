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
   string s;
   cin>>s;
   int ctr=0;
   map<char,int>mp;
   for(int i=0;i<s.size();i++){
   	  if(mp[s[i]]>=2&& s[i]=='x'){
   	  	   s[i]=' ';
   	  	   ctr++;
	   }
	   else if(mp[s[i]]>=0&&s[i]!='x'){
	   	  size_t f= s.find("x");
	   	  if(f!=string::npos){
	   	  	    mp[s[f]]=0;
			 }
	   	  
	   }
	   mp[s[i]]++;
   }
   cout<<ctr<<endl;
  return 0;
}

