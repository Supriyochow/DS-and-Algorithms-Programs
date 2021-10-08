//A C++ program to find the maximum sum of consecutive k elemtns in an array using window sliding technique
//Time Complexity:O(n)
//Space Complexity:O(1)

#include<bits/stdc++.h>
using namespace std;

//Returns maximum sum of the subarray
int maxSum(int arr[], int k, int n)
{
	int current_sum=0, max_sum=0;
	for(int i=0;i<k;i++)
	{
		max_sum+=arr[i];
	
	}
	current_sum=max_sum;
	for(int i=k;i<n;i++)
	{
		current_sum+=arr[i]-arr[i-k];
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
