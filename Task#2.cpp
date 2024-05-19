#include<iostream>
using namespace std;


float arithmetic_operation(char ch)
{
	float operand1,operand2;
	
	cout<<"Enter the Operand 1 : ";
	cin>>operand1;
	
	cout<<"Enter the Operand 2 : ";
	cin>>operand2;
	
	
	float result=0;
	
	switch(ch)
	{
		case 'a':
			result = operand1+operand2;
			break;
			
		case 'b':
			result = operand1-operand2;
			break;
			
		case 'c':
			result = operand1*operand2;
			break;
			
		case 'd':
			if(operand2==0)
				cout<<"\nError! Division By 0\n";
				
			else
				result = operand1/operand2;
				break;
		
		default:
			cout<<"\nInvalid Input\n";
					
	}
	
	return result;
	
}


int main()
{
	char op;
	cout<<"Enter which arithmetic operation you want to perform : \n";
	cout<<"a) Addition \nb) Subtraction \nc) Multiplication \nd) Division \n";
	cin>>op;
	
	float output = arithmetic_operation(op);
	
	cout<<"\nOutput : "<<output;
}