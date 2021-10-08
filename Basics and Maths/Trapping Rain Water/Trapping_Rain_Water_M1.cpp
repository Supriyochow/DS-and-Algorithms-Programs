//A C++ Program to trap the rain water between the blocks Method1
//Time_Complexity= O(n^2)
//Space_Complexity= O(1)


#include<bits/stdc++.h>
using namespace std;

//Declaring Functions
int leftMax(int [],int,int);
int rightMax(int[],int,int);

//Function to find the water amount

int Find_Water_Amount(int arr[], int n)		//O(n^2)--->O(n)
{
	int Total_Water=0,i;	//Answer
	int left_MAX, right_MAX, Initial_Water;
	for(i=1;i<n-1;i++)
	{
		left_MAX=leftMax(arr,n,i);	//O(n)--->O(1)
		right_MAX=rightMax(arr,n,i);	//O(n)--->O(1)
		Initial_Water=min(left_MAX,right_MAX)-arr[i];
		Total_Water=Total_Water+Initial_Water;
	}
	return Total_Water;
}

//Function to find the left max of the position
int leftMax(int arr[],int n,int t)
{
	int Lmaximum=0,j;
	for(j=0;j<t;j++)
	{
		Lmaximum=max(Lmaximum,arr[j]);
	}
	return Lmaximum;
}

//Function to find the right max of the position
int rightMax(int arr[],int n,int t)
{
	int Rmaximum=0,j;
	for(j=t+1;j<n;j++)
	{
		Rmaximum=max(Rmaximum,arr[j]);
	}
	return Rmaximum;
}

//The main function
int main()
{
	int arr[20],size,i;
	//Inputting the array
	cout<<"Enter the size of the array:"<<endl;
	cin>>size;
	cout<<"Enter the elements of the array: "<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int Total;
	Total= Find_Water_Amount(arr,size);
	cout<<"The total water stored in the array is: "<<Total<<endl;
	return 0;
}
