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
  int s,n,d,r;
  cin>>s>>n;
  vector<pair<int,int>>p;
  for(int i=0;i<n;i++){
  	 cin>>d>>r;
  	 p.push_back({d,r});
  }
  sort(p.begin(),p.end());
  int flag=0;
  for(int i=0;i<p.size();i++){
  	 if(s>p[i].ff){
  	 	 s+=p[i].ss;
	   }
	   else{
	   	  flag=1;
		   break;
	   }
  }
  flag?cout<<"NO"<<endl:cout<<"YES"<<endl;
  return 0;
}

