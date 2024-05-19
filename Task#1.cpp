#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int N=100,guess_no;
	
	int random_no = rand() % N;
	
	do
	{
		cout<<"Guess the Number Between 1 to 100 : ";
		cin>>guess_no;
		
		
		if(random_no == guess_no)
		cout<<"\nYou have guessed the correct number!";
		
		else if(random_no > guess_no)
		cout<<"\nYour Guess is lower than the correct number!\n\n";
		
		else
		cout<<"\nYour Guess is higher than the correct number!\n\n";
	}
	while(guess_no!=random_no);

}