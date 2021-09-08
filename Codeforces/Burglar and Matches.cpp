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

struct{
	bool operator()(pii &a,pii &b){
		return a.second>b.second;
	}
}cmp;

int main(){
   int n,m;
   cin>>n>>m;
   vii p;
   for(int i=0;i<m;i++){
   	  int mb,ms;
   	  cin>>mb>>ms;
   	  p.push_back(make_pair(mb,ms));
   }
   sort(p.begin(),p.end(),cmp);
   ll sum=0;
   for(int i=0;i<m;i++){
   	  if(n>=p[i].ff){
   	  	   n-=p[i].ff;
   	  	   sum+=p[i].ff*p[i].ss;
   	  	   continue;
		 }
		 sum+=n*p[i].ss;
		 n=0;
		 break;
   }
   cout<<sum<<endl;
  return 0;
}

