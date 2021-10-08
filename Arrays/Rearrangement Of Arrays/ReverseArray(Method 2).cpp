//A program to reverse array using an recursive approach (Method 2)
//Time Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int start, int end)			//taking start and end variable
{
	//getting the condition
	if(start>=end)
		return;
	
	int temp= arr[start];
	arr[start]=arr[end];
	arr[end]=temp;
	
	//increasing the start and decresing the end
	reverseArray(arr,start+1,end-1);	
	
}


void printArray(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int n= sizeof(arr)/sizeof(arr[0]);
	
	cout<<"The initial array is: "<<endl;
	printArray(arr,n);
	reverseArray(arr,0,n-1);
	cout<<"The reversed array is: "<<endl;
	printArray(arr,n);
	
	
	return 0;
}
