#include<iostream>
using namespace std;

void displayBoard(char grid[][3])
{
	cout<<"Current State of Board\n\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<grid[i][j]<<"\t";
		}
		cout<<"\n\n";
	}
}

void playerInput(char grid[][3])
{
	bool winner = false, board = false;
	int count=0,row,column;
	
	while(winner==false || board==false)
	{
		board = true;
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(grid[i][j]==' ')
				board = false;
			}
		}
		
		count++;
		
		if(count%2!=0)
		{
			cout<<"Player 1 ! Input at which row(0-2) and column(0-2) you want to apply your Move : \n";
			
			cout<<"Row : ";
			cin>>row;
			
			cout<<"Column : ";
			cin>>column;
			
			grid[row][column] = 'X';
		}
		
		else
		{
			cout<<"Player 2 ! Input at which row(0-2) and column(0-2) you want to apply your Move : \n";
			
			cout<<"Row : ";
			cin>>row;
			
			cout<<"Column : ";
			cin>>column;
			
			grid[row][column] = '0';
		}
		
		displayBoard(grid);
		
		if(count%2!=0)
		{
			if(row==0 && column==0)
			{
				if(grid[row][column]=='X' && grid[row+1][column]=='X' && grid[row+2][column]=='X')
				winner = true;
				
				else if(grid[row][column]=='X' && grid[row][column+1]=='X' && grid[row][column+2]=='X')
				winner = true;
				
				else if(grid[row][column]=='X' && grid[row+1][column+1]=='X' && grid[row+2][column+2]=='X')
				winner = true;
			}
			
			else if(row==0 && column==1)
			{
				if(grid[row][column-1]=='X' && grid[row][column]=='X' && grid[row][column+1]=='X')
				winner = true;
				
				else if(grid[row][column]=='X' && grid[row+1][column]=='X' && grid[row+2][column]=='X')
				winner = true;
			}
			
			else if(row==0 && column==2)
			{
				if(grid[row][column]=='X' && grid[row-1][column]=='X' && grid[row-2][column]=='X')
				winner = true;
				
				else if(grid[row][column]=='X' && grid[row+1][column]=='X' && grid[row+2][column]=='X')
				winner = true;
				
				else if(grid[row][column]=='X' && grid[row-1][column-1]=='X' && grid[row-2][column-2]=='X')
				winner = true;
			}
			
			else if(row==1 && column==0)
			{
				if(grid[row][column]=='X' && grid[row][column+1]=='X' && grid[row][column+2]=='X')
				winner = true;
				
				else if(grid[row][column]=='X' && grid[row+1][column]=='X' && grid[row-1][column]=='X')
				winner = true;
			}
			
			else if(row==1 && column==1)
			{
				if(grid[row][column]=='X' && grid[row-1][column-1]=='X' && grid[row+1][column+1]=='X')
				winner = true;
				
				else if(grid[row][column]=='X' && grid[row-1][column+1]=='X' && grid[row+1][column-1]=='X')
				winner = true;
				
				else if(grid[row][column]=='X' && grid[row-1][column]=='X' && grid[row+1][column]=='X')
				winner = true;
				
				else if(grid[row][column]=='X' && grid[row][column-1]=='X' && grid[row][column+1]=='X')
				winner = true;
			}
			
			else if(row==1 && column==2)
			{
				if(grid[row][column]=='X' && grid[row-1][column]=='X' && grid[row+1][column]=='X')
				winner = true;
				
				else if(grid[row][column]=='X' && grid[row][column-1]=='X' && grid[row][column-2]=='X')
				winner = true;
			}
			
			else if(row==2 && column==0)
			{
				if(grid[row][column]=='X' && grid[row-1][column]=='X' && grid[row-2][column]=='X')
				winner = true;
				
				else if(grid[row][column]=='X' && grid[row][column+1]=='X' && grid[row][column+2]=='X')
				winner = true;
				
				else if(grid[row][column]=='X' && grid[row-1][column+1]=='X' && grid[row-2][column+2]=='X')
				winner = true;
			}
			
			else if(row==2 && column==1)
			{
				if(grid[row][column]=='X' && grid[row-1][column]=='X' && grid[row-2][column]=='X')
				winner = true;
				
				else if(grid[row][column]=='X' && grid[row-1][column]=='X' && grid[row+1][column]=='X')
				winner = true;
			}
			
			else if(row==2 && column==2)
			{
				if(grid[row][column]=='X' && grid[row-1][column]=='X' && grid[row-2][column]=='X')
				winner = true;
				
				else if(grid[row][column]=='X' && grid[row][column-1]=='X' && grid[row][column-2]=='X')
				winner = true;
				
				else if(grid[row][column]=='X' && grid[row-1][column-1]=='X' && grid[row-2][column-2]=='X')
				winner = true;
			}
		}
		
		if(winner==true)
		{
			cout<<"Player 1 has won the game!\n\n";
			break;
		}
		
		
		if(count%2==0)
		{
			if(row==0 && column==0)
			{
				if(grid[row][column]=='O' && grid[row+1][column]=='O' && grid[row+2][column]=='O')
				winner = true;
				
				else if(grid[row][column]=='O' && grid[row][column+1]=='O' && grid[row][column+2]=='O')
				winner = true;
				
				else if(grid[row][column]=='O' && grid[row+1][column+1]=='O' && grid[row+2][column+2]=='O')
				winner = true;
			}
			
			else if(row==0 && column==1)
			{
				if(grid[row][column-1]=='O' && grid[row][column]=='O' && grid[row][column+1]=='O')
				winner = true;
				
				else if(grid[row][column]=='O' && grid[row+1][column]=='O' && grid[row+2][column]=='O')
				winner = true;
			}
			
			else if(row==0 && column==2)
			{
				if(grid[row][column]=='O' && grid[row-1][column]=='O' && grid[row-2][column]=='O')
				winner = true;
				
				else if(grid[row][column]=='O' && grid[row+1][column]=='O' && grid[row+2][column]=='O')
				winner = true;
				
				else if(grid[row][column]=='O' && grid[row-1][column-1]=='O' && grid[row-2][column-2]=='O')
				winner = true;
			}
			
			else if(row==1 && column==0)
			{
				if(grid[row][column]=='O' && grid[row][column+1]=='O' && grid[row][column+2]=='O')
				winner = true;
				
				else if(grid[row][column]=='O' && grid[row+1][column]=='O' && grid[row-1][column]=='O')
				winner = true;
			}
			
			else if(row==1 && column==1)
			{
				if(grid[row][column]=='O' && grid[row-1][column-1]=='O' && grid[row+1][column+1]=='O')
				winner = true;
				
				else if(grid[row][column]=='O' && grid[row-1][column+1]=='O' && grid[row+1][column-1]=='O')
				winner = true;
				
				else if(grid[row][column]=='O' && grid[row-1][column]=='O' && grid[row+1][column]=='O')
				winner = true;
				
				else if(grid[row][column]=='O' && grid[row][column-1]=='O' && grid[row][column+1]=='O')
				winner = true;
			}
			
			else if(row==1 && column==2)
			{
				if(grid[row][column]=='O' && grid[row-1][column]=='O' && grid[row+1][column]=='O')
				winner = true;
				
				else if(grid[row][column]=='O' && grid[row][column-1]=='O' && grid[row][column-2]=='O')
				winner = true;
			}
			
			else if(row==2 && column==0)
			{
				if(grid[row][column]=='O' && grid[row-1][column]=='O' && grid[row-2][column]=='O')
				winner = true;
				
				else if(grid[row][column]=='O' && grid[row][column+1]=='O' && grid[row][column+2]=='O')
				winner = true;
				
				else if(grid[row][column]=='O' && grid[row-1][column+1]=='O' && grid[row-2][column+2]=='O')
				winner = true;
			}
			
			else if(row==2 && column==1)
			{
				if(grid[row][column]=='O' && grid[row-1][column]=='O' && grid[row-2][column]=='O')
				winner = true;
				
				else if(grid[row][column]=='O' && grid[row-1][column]=='O' && grid[row+1][column]=='O')
				winner = true;
			}
			
			else if(row==2 && column==2)
			{
				if(grid[row][column]=='O' && grid[row-1][column]=='O' && grid[row-2][column]=='O')
				winner = true;
				
				else if(grid[row][column]=='O' && grid[row][column-1]=='O' && grid[row][column-2]=='O')
				winner = true;
				
				else if(grid[row][column]=='O' && grid[row-1][column-1]=='O' && grid[row-2][column-2]=='O')
				winner = true;
			}
		}
		
		if(winner==true)
		cout<<"Player 2 has won the game!\n\n";
		
		if(winner!=true)
		cout<<"Game is Ongoing!\n\n";
	}
	
	if(winner==false)
	cout<<"Game has been Drawn";
}

int main()
{
	char choice;
	do
	{
		char grid[3][3]={' '};
	
		char player1 = 'X', player2 = 'O';
		
		cout<<"\t\t\t\t\tWelcome to The Tic Tac Toe Game!\n\n";
		
		cout<<"Player 1 ! You are Crosses(X's)\n\n";
		cout<<"Player 2 ! You are Noughts(0's)\n\n";
		
		
		playerInput(grid);
		
		
		cout<<"Do you both the players want to play the game again?\n";
		cout<<"Press y for yes, Press n for no!\n";
		cin>>choice;
		
	}
	while(choice=='y');
	
	cout<<"\n\n\t\t\t\t\t\tThank You!";
	
}