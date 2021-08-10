#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]=arr[i];
        }
        int maxi=0,ctr=0;
        for(int i=0;i<arr.size();i++){
            maxi=max(maxi,mp[arr[i]]);
            if(i==maxi){
                ctr++;
            }
        }
        return ctr;
        
    }
};
int main(){
	Solution obj;
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	cout<<obj.maxChunksToSorted(v)<<endl;
}
