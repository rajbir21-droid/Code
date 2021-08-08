/*
Given an array arr[] of distinct integers of size N and a sum value X, the task is to find count of triplets with the sum smaller than the given sum value X.


Example 1:

Input: N = 4, X = 2
arr[] = {-2, 0, 1, 3}
Output:  2
Explanation: Below are triplets with 
sum less than 2 (-2, 0, 1) and (-2, 0, 3). 


Example 2:

Input: N = 5, X = 12
arr[] = {5, 1, 3, 4, 7}
Output: 4
Explanation: Below are triplets with 
sum less than 12 (1, 3, 4), (1, 3, 5), 
(1, 3, 7) and (1, 4, 5).

Expected Time Complexity: O(N2).
Expected Auxiliary Space: O(1).


Constraints:
3 ≤ N ≤ 103
*/



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
   //enter no of test cases
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

