//A C++ program to perform the Trapping Water problem using Method 2
//Time Complexity: O(n)
//Space Complexity: O(n)


#include<bits/stdc++.h>
using namespace std;

int Trap_Rain_Water(int arr[],int n)
{
	//taking an array for left max values
	int left[n];
	//Taking an array for right max values

	int right[n];
	
	int total=0,i,j;
	
	//Assignign the value in left matrix
	left[0]=arr[0];
	for(i=1;i<n;i++)
	{
		left[i]=max(left[i-1],arr[i]);
	} 
	
	//Assigning the value in right matrix
	right[n-1]=arr[n-1];
	for(i=n-2; i>=0;i--)

	{
		right[i]=max(right[i+1],arr[i]);
	}
	
	//Calculating the accumulated water
	for(i=0;i<n;i++)
	{
		total=total+(min(left[i],right[i])-arr[i]);
	}
	return total;


	
}

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
	Total= Trap_Rain_Water(arr,size);
	cout<<"The total water stored in the array is: "<<Total<<endl;
	return 0;
}
 
