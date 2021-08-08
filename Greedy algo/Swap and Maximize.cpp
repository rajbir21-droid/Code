/*
Given an array a[ ] of N elements. Consider array as a circular array i.e. element after an is a1. The task is to find maximum sum 
of the absolute difference between consecutive elements with rearrangement of array elements 
allowed i.e. after any rearrangement of array elements find |a1 – a2| + |a2 – a3| + …… + |an-1 – an| + |an – a1|.


Example 1:

Input:
N = 4
a[] = {4, 2, 1, 8}
Output: 
18
Explanation: Rearrangement done is {1, 8, 
2, 4}. Sum of absolute difference between 
consecutive elements after rearrangement = 
|1 - 8| + |8 - 2| + |2 - 4| + |4 - 1| = 
7 + 6 + 2 + 3 = 18.
Example 2:

Input:
N = 2
a[] = {10, 12}
Output: 
4

Expected Time Complexity: O(N*logN)
Expected Auxiliary Space: O(1)

Constraints:
2 ≤ N ≤ 105

*/





#include <bits/stdc++.h>
using namespace std;
long long int maxSum(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		cout<<maxSum(arr,n)<<endl;
	}
	return 0;
}// } Driver Code Ends

long long int maxSum(int arr[], int n)
{
    sort(arr,arr+n);
    int i=0,j=n-1;
    int sum=0;
    while(i<j){
        sum+=abs(arr[i]-arr[j]);
        if(i+1<j){
            sum+=abs(arr[i+1]-arr[j]);
        }
        //cout<<sum<<" ";
        i++;
        j--;
    }
    sum+=abs(arr[0]-arr[i]);
    return sum;
}