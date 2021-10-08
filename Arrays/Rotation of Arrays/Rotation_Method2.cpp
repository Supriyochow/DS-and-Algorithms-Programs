//A C++ program to rotate an array using Method-2 (Uisng temporary variable)
//Time complexity: O(n)
//Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[10]={2,3,4,5,6,7,8,9,1};	//array
	int temp;							//temporary var
	int n=sizeof(arr)/sizeof(arr[0]);
	temp=arr[0];
	cout<<"The array before rotation is: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";	
	}	
	cout<<"\n";
	for(int i=0; i<n;i++)
	{
		arr[i]=arr[i+1];
		
		
	}
	arr[n-1]=temp;
	cout<<"The array after rotation is: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}

