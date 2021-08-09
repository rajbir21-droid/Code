#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int isPossible(vector<int>&num,int k,int mid){
        int flower=0,bouque=0;
        for(int i=0;i<num.size();i++){
            if(num[i]>mid){
                flower=0;
            }
            else{
                flower++;
            }
            if(flower>=k){
                bouque++;
                flower=0;
            }
        }
        return bouque;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        if((k*m)>bloomDay.size()){
            return -1;
        }
        int res=0;
        int low=0,high=0;
        for(int i=0;i<bloomDay.size();i++){
            high=max(high,bloomDay[i]);
            low=min(low,bloomDay[i]);
        }
        while(low<high){
            int mid=(low+high)>>1;
            if(isPossible(bloomDay,k,mid)<m){
                low=mid+1;
            }
            else{
                high=mid;
            }
        }
        return low;
    }
};

int main(){
	Solution obj;
	int m,k,n;
	cin>>n>>m>>k;
	vector<int> vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	cout<<obj.minDays(vec,m,k)<<endl;
}
