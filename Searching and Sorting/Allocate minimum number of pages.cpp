// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    bool isAllocate(int arr[],int mid,int m,int n){
        int page=0,allocateStudent=1;
        for(int i=0;i<n;i++){
            if(arr[i]>mid){
                return false;
            }
            if(page+arr[i]>mid){
                allocateStudent+=1;
                page=arr[i];
            }
            else{
                page+=arr[i];
            }
        }
        if(allocateStudent>m){
            return false;
        }
        return true;
    }
    //Function to find minimum number of pages.
    int findPages(int arr[], int n, int m) 
    {
        //code here
        int low=0,high=0,mid=0,res=-1;
        for(int i=0;i<n;i++){
            low=min(low,arr[i]);
            high+=arr[i];
        }
        while(low<=high){
            mid=(low+high)>>1;
            if(isAllocate(arr,mid,m,n)){
                res=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return res;
    }
};
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
