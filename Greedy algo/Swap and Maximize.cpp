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
