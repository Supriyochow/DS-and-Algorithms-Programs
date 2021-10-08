//A C++ program to rotate and array by reversal algorithm
//The Steps are:
//1. Divide the array into two parts nemly A and B.
//2. Reverse A and make ArB, where Ar is the reverse of A
//3. Reverse B and make ArBr, where Br is the reverse of B
//4. Reverse both A and B, (ArBr)r
//Time Complexity: O(n)
//Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

//Function to reverse an array
void reverseArray(int arr[],int start, int end)
{
	int temp;
	while(start<end)
{
	temp=arr[start];
	arr[start]=arr[end];
	arr[end]=temp;
	start++;
	end--;
}
}

//Function to rotate the array
void rotateArray(int arr[],int d,int n)
{
	if(d==0)
		return;
	//Incase the rotating factorial is smaller than the array length
	d=d%n;
	reverseArray(arr,0,d-1);
	reverseArray(arr,d,n-1);
	reverseArray(arr,0,n-1);
}

//Function to print the array
void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
}

//Main function
int main()
{
	int arr[20], n,d;
	cout<<"Enter the number of elements of the array: "<<endl;
	cin>>n;
	cout<<"Enter the elements of the array: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the rotating factorial: "<<endl;
	cin>>d;
	cout<<"Array before rotation: "<<endl;
	printArray(arr,n);
	rotateArray(arr,d,n);
	cout<<"Array after rotation: "<<endl;
	printArray(arr,n);
	return 0;
}

