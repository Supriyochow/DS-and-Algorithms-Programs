//A Cpp Program to implement backtracking algorithm for N-Queen Problem

#include<bits/stdc++.h>
#define N 4
using namespace std;


//A function to print the solution
void PrintSolution(int board[N][N])
{
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<board[i][j]<<" ";
			
		}
		cout<<endl;
}
}



//A function to check whether a queen can be placed on the region or not.
//Here we check the row, the upper diagonal and the lower diagonal
bool isSafe(int board[N][N],int row, int col)
{
	int i,j;
	
	//checking the row
	for(i=0;i<col;i++)
	{
		if(board[row][i])
			return false;
	}
	
	
	//checking the upper diagonal
	for(i=row,j=col;i>=0 && j>=0;i--,j--)
	{
		if(board[i][j])
			return false;
			
	}
	
	//checking lower diagonal
	for(i=row,j=col;i<N && j>=0;i++,j--)
	{
		if(board[i][j])
			return false;
	}
	
	return true;
	
}



//A fucntion to solve the N-Queen using backtracking and recursion
bool Solve_N_Queen(int board[N][N],int col)
{
	
	//Base Case: If all the queens are placed return true
	if(col>=N)
		return true;
	//Consider a column and try placing this queen one by one
	for(int i=0;i<N;i++)
	{
		if(isSafe(board,i,col))
			board[i][col]=1;
		
		if(Solve_N_Queen(board,col+1))
			return true;
		
		board[i][col]=0;	//BACKTRACK	
		}	
		
	return false;	
	
}


//Function to get the N-Queens
bool SolveQueen()
{
	int board[N][N]={{ 0,0,0,0 },
					 { 0,0,0,0 },
					 { 0,0,0,0 },
					 { 0,0,0,0 }};
	
	if(Solve_N_Queen(board,0)==false)				 
	{
		cout<<"Solutions does not exists"<<endl;
		return false;
	}
	
	PrintSolution(board);
	return true;
	
	
}



int main()
{
	SolveQueen();
	
	return 0;
}
