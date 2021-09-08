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
  int n,m;
  cin>>n>>m;
  vi a(n);
  for(int i=0;i<n;i++){
  	 cin>>a[i];
  }
  int sum=0;
  sort(a.begin(),a.end());
  for(int i=0;i<n&&m>0;i++){
  	 if(a[i]<=0){
  	 	sum+=abs(a[i]);
  	 	m--;
	   }
  }
  cout<<sum<<endl;
  return 0;
}

