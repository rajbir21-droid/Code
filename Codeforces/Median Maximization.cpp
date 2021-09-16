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

int solve(int n,int s){
	if(n==1){
		return s;
	}
	if(s==1){
		return 0;
	}
	int ans=0,d=0,r=0;
	if(n%2==0){
		d=(n/2)+1;
		  ans=(s/d);
	}
	else{
		d=(round(n/(2*1.0)));
		ans=(s/d);
	}
	//cout<<d<<" ";
  
	return ans;
}

int main(){
   int t;
   cin>>t;
   while(t--){
   	  int n,s;
   	  cin>>n>>s;
   	  cout<<solve(n,s)<<endl;
   }
  return 0;
}

