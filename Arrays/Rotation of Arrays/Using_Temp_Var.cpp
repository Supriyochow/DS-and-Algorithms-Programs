//A C++ Program to rotate an array through a d number of elements
//Method-2 Using a temporary variable
//Here, time Complexity: O(size)
//Space Complexity : O(1)
//It is better than method 1

#include<iostream>
using namespace std;

int main()
{
	int arr[10],i;
	int size;
	//Code to Enter the elements of the array:
	cout<<"Enter the size of the array:"<<endl;
	cin>>size;	
	cout<<"Enter the array elements : "<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	} 

	cout<<"Array before rotating: "<<endl;
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}

	//Taking an Temporary variable
	int temp=arr[0];
	for(i=0;i<size;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[size-1]=temp;
	//Shifting through the array
	cout<<"\nArray after rotating: "<<endl;
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}

	return 0;
}


