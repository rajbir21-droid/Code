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
  	int a,b;
  	cin>>a>>b;
  	int d=abs(b-a);
  	if(a<b&&(d&1)){
  		cout<<1<<endl;
	}
	else if(a<b&&((d&1)==0)){
		cout<<2<<endl;
	}
	else if(a>b&&(d&1)){
		cout<<2<<endl;
	}
	else if(a>b&&((d&1)==0)){
		cout<<1<<endl;
	}
	else{
		cout<<0<<endl;
	}
  }
  return 0;
}

