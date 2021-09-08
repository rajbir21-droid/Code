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
  	int n;
  	cin>>n;
  	 vector<pair<int,int>>p;
  	 string s;
  	 cin>>s;
  	 for(int i=0;i<n;i++){
  	    int ctr=0;int j=0;
		for(j=i;j<n;j++){
			if(s[j]=='a'){
				ctr++;
			}
			else{
				ctr--;
			}
			if(ctr==0){
				p.push_back(make_pair(i+1,j+1));
				break;
			}
	   }
     }
    if(p.empty()){
    	cout<<-1<<" "<<-1<<endl;
	}
	else{
	  int maxi=0;
	  for(int i=0;i<p.size();i++){
	  	if(p[i].ss-p[i].ff>maxi){
	  		maxi= p[i].ss-p[i].ff;
		  }
	  }
	  for(int i=0;i<p.size();i++){
	  	if(p[i].ss-p[i].ff==maxi){
	  	    cout<<p[i].ff<<" "<<p[i].ss<<endl;
	  	    break;
		  }
	  }
	}
  }
  return 0;
}

