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
  	int a,b,c;
  	cin>>a>>b>>c;
  	int ctr=0;
  	   	if(a>0){
  	   	   a--;
		   ctr++;	
	    }
	    if(b>0){
  	   	   b--;
		   ctr++;	
	    }
	    if(c>0){
  	   	   c--;
		   ctr++;	
	    }
	    if(b<c){
	    	swap(b,c);
		}
		if(a<b){
			swap(a,b);
		}
	    if(a>0&&b>0){
	    	a-=1;b-=1;
	    	ctr+=1;
		}
		if(a>0&&c>0){
			a-=1;c-=1;
			ctr+=1;
		}
		if(b>0&&c>0){
			b-=1;c-=1;
			ctr+=1;
		}
		if(a>0&&b>0&&c>0){
			ctr+=1;
	    }
	cout<<ctr<<endl;
  }
  return 0;
}

