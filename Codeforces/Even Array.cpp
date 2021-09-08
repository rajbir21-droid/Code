#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		int ctr=0,ctr1=0;
		for(int i=0;i<n;i++){
		    if(i%2!=v[i]%2){
				if((v[i]&1)==1){
					ctr++;
				}
				else if((v[i]&1)==0){
					ctr1++;
				}
			}
	 }
	  if(ctr1!=ctr){
	  	cout<<-1<<endl;
	  }
	  else{
	  	cout<<ctr1<<endl;
	  }
	}
}
