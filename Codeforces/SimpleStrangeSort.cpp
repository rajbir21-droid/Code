#include<bits/stdc++.h>
using namespace std;



int solve(vector<int>v){
   int ctr=0,ctr1=0,i=0;
   	 while(!is_sorted(v.begin(),v.end())){
   	  for(int j=i&1;j<v.size()-1;j+=2){
   	  	     if(v[j]>v[j+1]){
   	  	     	swap(v[j],v[j+1]);
			}
	   }
	   i++;
   }
   return i;
}

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
	    cout<<solve(v)<<endl;
	}
}
