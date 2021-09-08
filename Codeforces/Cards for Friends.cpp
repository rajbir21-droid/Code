#include<bits/stdc++.h>
using namespace std;

string solve(int w,int h,int n){
	
	int p=1;
	int area=w*h;
	while(area%2==0){
		area/=2;
		p*=2;
	}
	if(p>=n){
		return "YES";
	}
	else{
		return "NO";
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int w,h,n;
		cin>>w>>h>>n;
		cout<<solve(w,h,n)<<endl;
	}
}
