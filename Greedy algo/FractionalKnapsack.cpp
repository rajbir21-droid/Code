#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define pii pair<int,int>
bool compare(pii p1,pii p2){
	double v1 = (double) p1.ff/p1.ss;
	double v2=(double) p2.ff/p2.ss;
	return v1>v2; 
}

int main(){
	
	int n,w;
	cin>>n>>w;
	vector<pair<int,int>>a(n);
	for(int i=0;i<n;i++){
	cin>>a[i].ff>>a[i].ss;
	}
	sort(a.begin(),a.end(),compare);
	double ans=0.0;
	for(int i=0;i<n;i++){
		if(w>=a[i].ss){
			ans+=a[i].ff;
			w-=a[i].ss;
			continue;
		}
		double vw=(double)a[i].ff/a[i].ss;
		ans+=vw*w;
		w=0;
		break;
	}
	cout.precision(10);
	cout<<ans<<endl;
}
