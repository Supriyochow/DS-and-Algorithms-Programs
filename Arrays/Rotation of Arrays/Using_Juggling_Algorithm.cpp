//A C++ Program to reverse an array using Juggling Algorithm
//This can be done using a Juggling Algorithm
//This is the extension of method 2, instead of moving the array one by one, divide the array into two different sets where each set is equal to GCD of n and d and move the elements between the set.
// Here, Time complexity is: O(n)
// And Space Complexity is: O(1)

#include<iostream>
using namespace std;

//Function to find the gcd
int gcd(int a, int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}

//Function to rotate the array
void rotateArray(int arr[], int d, int n)
{
	int i,j,k,temp;
	
	//Getting the number of sets, i.e yhe GCD of n and d
	int sets=gcd(d,n);
	
	
	for(i=0;i<sets;i++)
	{
		j=i;
		temp=arr[i];
		while(1)
		{
			k=j+d;
			
			if(k>=n)
				k=k-n;
			if(k==i)		//Here it is checked that whether k is returning to the original position or not
				break;
			
			arr[j]=arr[k];
			
			j=k;
		}
		
		arr[j]=temp;

		
	}
	
	cout<<"Array after rotation is: "<<endl;  
		for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;

	
}


//Function to display the array
void Display(int arr[], int n)
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
	//Program to enter the array
	int arr[10], size, i,d;
	cout<<"Enter the size of the array: "<<endl;
	cin>>size;
	cout<<"Enter the elements of the array: "<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter through which the array is to be rotated"<<endl;
	cin>>d;
	//Printing array
	cout<<"Array before rotating: "<<endl;
	Display(arr,size);
	rotateArray(arr,d,size);
	return 0;

}
