#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define mp map<int,int>
#define pii pair<int,int>
#define vm vector<vi>
#define pb push_back
#define sort(a) sort(a.begin(),a.end())
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

int main(){
  int t;
  cin>>t;
  while(t--){
  	int n,m,k;
  	cin>>n>>m>>k;
    if(k==(n*m)-1){
    	cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
  }
  return 0;
}

