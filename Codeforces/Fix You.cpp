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
  	int n,m;
  	cin>>n>>m;
  	char a[n][m];
  	for(int i=0;i<n;i++){
  	   for(int j=0;j<m;j++){
  	   	   cin>>a[i][j];
		}	
	}
  	int ctr=0;
  	for(int i=0;i<m-1;i++){
  	   if(a[n-1][i]=='D'){
  	     ctr++;	
	   }	
    }
    for(int i=0;i<n-1;i++){
    	if(a[i][m-1]=='R'){
    		ctr++;
		}
	}
	cout<<ctr<<endl;
  }
  return 0;
}

