//Method 1: Using temporary array 
//Here Time complexity is: O(n)
//Space Complexity is: O(d) where d is the size of the temposry array

#include<iostream>
using namespace std;


//Main function
int main()
{
	//Taking array as input
	int arr[10],size,i;
	cout<<"Enter the array size: "<<endl;
	cin>>size;
	cout<<"Enter the array elements:"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	} 
	

	//Getting the size through which the array is to be rotated
	int d;
	cout<<"Enter the position thorugh which the array is to be rotated."<<endl;
	cin>>d;
	
	//printing the array
	cout<<"Array before rotating: "<<endl;
	
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
	
	//getting the temporary array
	int temp[d];
	
	//storing the d elements of array into the temp array
	for(i=0;i<d;i++)
	{
		temp[i]=arr[i];
	}
	
	i=0;
	int j;
	//Shifting the array with the other values
	for(j=d;j<size;j++)
	{	
		arr[i]=arr[j];
		i++;
	} 
	
 
	j=0;
	//Putting the value of the temp array into the last
	for(i=size-d;i<=size;i++)
	{
		arr[i]=temp[j];
		j++;
	}
	
	//printing the array
	cout<<"Array after rotating: "<<endl;
	
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;


	
	return 0;
}
