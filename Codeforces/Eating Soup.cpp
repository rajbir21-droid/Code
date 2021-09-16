#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define vm vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

int solve(int n,int m){
	int d=n-m;
	if(n==m){
		return 0;
	}
	if(m==0){
		return 1;
	}
	return min(d,m);
}

int main(){
  
   	  int n,m;
   	  cin>>n>>m;
   	  cout<<solve(n,m)<<endl;
   	  
  return 0;
}

