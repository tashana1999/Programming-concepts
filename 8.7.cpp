#include<iostream>
#include<conio.h>
using namespace std;
void findFactorial(int,int*);//function prototype
int main()
{int i,fact,num;//variable declaration
cout<<"Enter a number\n";
cin>>num;//takes input from the user
findFactorial(num,&fact);//function call
cout<<"Factorial of"<<num<<"is:"<<fact;
//display the factorial of given number
  getch();
return 0;
}
//function definition with parameter
void findFactorial(int num,int*fact){
	int i;
	*fact=1; 
	for(i=1;i<=num;i++){
		//calculate factorial using for loop
		*fact=*fact*i;
	}
}
