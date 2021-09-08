#include<bits/stdc++.h>
using namespace std;
/*int main()
{
	int arr[1000];
	int i=0,k=1;
	while(i<1000)
	{
		if(k%3!=0 && k%10!=3)
		{
			arr[i]=k;
			i++;
		}
		k++;
	}
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		cout<<arr[n-1]<<endl;		
	}
}*/
int main(){
	int t;
	cin>>t;
	while(t--){
		int k;
		cin>>k;
		int dp[k+1]={0};
		dp[1]=1;dp[2]=2;dp[3]=4;
		if(k==1){
			cout<<dp[k]<<endl;
		}
		else if(k==2){
			cout<<dp[k]<<endl;
		}
		else if(k==3){
			cout<<dp[k]<<endl;
		}
		else{
			int i=4;
			int j=4;
			while(j<=k){
			    while(i>0){
			    	if(i%3!=0&&i%10!=3){
			    		if(dp[j-1]!=i){
			    			dp[j]=i;
			    			break;
						}
					}
					i++;
				}
				j++;
			}
			cout<<dp[k]<<endl;
		}
		
	}
}
