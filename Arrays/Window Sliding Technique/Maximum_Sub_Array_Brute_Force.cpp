//A C++ program to find the maximum sum of k consecutive element in the array using Brute Force Methodlogy.
//Time Complexity: O(n*k)
//Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int k, int n)
{
	int max_sum=arr[0];
	int current_sum;

	for(int i=0;i<=n-k;i++)
	{
		current_sum=0;
		for(int j=i;j<k;j++)
		{
			current_sum=current_sum+arr[i+j];
		}
	max_sum=max(max_sum,current_sum);	
	}
	return max_sum;
}





int main()

{
	int arr[]={1,4,2,10,2,3,1,0,20};
	int k=4;
	int size=sizeof(arr)/sizeof(arr[0]);
	int Sum=maxSum(arr,k,size);
	cout<<"The sum is: "<<Sum<<endl;
	return 0;
}
