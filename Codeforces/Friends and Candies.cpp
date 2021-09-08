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
		vi v(n);vi a(n);
		rep(i,0,n){
			cin>>v[i];
		}
		int sum=0;
		for(int i=0;i<v.size();i++){
			sum+=v[i];
		}
		int d=0;
		if(sum%n==0){
			 d=sum/n;
			 for(int i=0;i<n;i++){
				a[i]=d;
			}
			int ctr=0;
			for(int i=0;i<n;i++){
				if(v[i]>a[i]){
					ctr++;
				}
			}
			cout<<ctr<<endl;
		}
		else{
			cout<<-1<<endl;
		}
		
		
		
		
	} 
	return 0;
}

