// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    sort(arr,arr+n);
	    long long i=0,j=n-1,k=0;
	    long long x=0,ctr=0;
	    while(i<n-2){
	        k=i+1,j=n-1;
	        while(k<j){
	            x=arr[i]+arr[k]+arr[j];
	            if(x<sum){
	               ctr+=(j-k);
	               k++;
	            }
	            else{
	                j--;
	            }
	        }
	        i++;
	    }
	    return ctr;
	}
		 

};
int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}
