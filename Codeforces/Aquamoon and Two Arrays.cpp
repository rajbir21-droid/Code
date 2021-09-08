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
   	  vi a(n);vi b(n);vi l,r;
   	  rep(i,0,n){
   	    cin>>a[i];	
	  }
	  rep(i,0,n){
	  	cin>>b[i];
	  }
	  rep(i,0,n){
	  	if(a[i]<b[i]){
	  	    for(int j=0;j<b[i]-a[i];j++){
	  	    	l.push_back(i+1);
			  }
		  }
		  else if(a[i]>b[i]){
		  	for(int j=0;j<a[i]-b[i];j++){
		  		r.push_back(i+1);
			  }
		  }
	  }
	  if(l.size()==r.size()){
	  	cout<<l.size()<<endl;
	  	rep(i,0,l.size()){
	  		cout<<r[i]<<" "<<l[i]<<endl;
		  }
	  }
	  else{
	  	cout<<-1<<endl;
	  }
   }
  return 0;
}

