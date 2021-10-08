//A C++ program to rotate an array using Method-1 (Uisng temporary array)
//Time Complexity: O(size)
//Space Somplexity: O(d)

#include<bits/stdc++.h>
using namespace std;
int reverse(int *,int,int);

int main()
{
	int arr[10];//main array
	//int size=sizeof(arr)/sizeof(arr[0]);		//number of elements in array
	int size;
	int d=2;
	int temp[d];	//temporary array
	int x=0;
	int y=d-1;
	cout<<"Enter the size of array: ";
	cin>>size;
	cout<<"\nEnter the array elements: ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"Before rotationg: ";
	cout<<"\n{ ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"}";
	//arr=reverse(arr,d,size );
	for(int i=0;i<d;i++)
	{
		temp[i]=arr[i];
	}
	
	for(int i=d;i<size;i++)
	{
		arr[x]=arr[i];
		x++;
		
	}
	for(int i=size-1;i>size-1-d;i--)
	{
		arr[i]=temp[y];
		y--;
	}
	
	cout<<"After rotating by "<<d<<" we get: ";
	cout<<"\n{ ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"}";
	return 0;


}
