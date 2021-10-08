//A program to reverse array using an iterative approach (Method 1)
//Time complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

//Function to reverse the array
void reverseArray(int arr[], int start, int end)			//taking start and end variable
{
	//getting the condition
	while(start<end)
	{
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
	
}

//Function to reverse the array
void printArray(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

//Driver Function
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int n= sizeof(arr)/sizeof(arr[0]);
	
	//print the original array
	cout<<"The initial array is: "<<endl;
	printArray(arr,n);
	
	//reversing the array calling the function
	reverseArray(arr,0,n-1);
	
	//printing the reverse array
	cout<<"The reversed array is: "<<endl;
	printArray(arr,n);
	
	
	return 0;
}
