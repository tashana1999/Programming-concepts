#include<iostream>
#include<stdlib.h>
using namespace std;
int main();
int check(int x,int y);
int number,c,z,b,e,d;
int user(int y){
	cout<<"Please type your guess\n";
	cin>>e;
	d=check(e,y);
	return d;
	
	
}
int check(int x,int y){
	
	if(x==y){
		cout<<"Your guess is correct\n";
		cout<<"Would you like to play game again?\n";
		cout<<"if yes type 1.if no type 2\n";
		cin>>z;
		if(z==1){
			main();
		}
		else{
			cout<<"The game is over\n";
			
		}
		
	}
	else if(x<y){
		cout<<"Too high.Try again\n";
		b=user(e);
		
	}
	else{
		cout<<"Too low.Try again\n";
		b=user(e);
		
	}
	
	
}
int main(){
    int number=rand()%1000+1;
    int y=number;
    int x;
	cout<<"I have a number between 1 and 1000.Can you guess my number?\n";
	cout<<"Please type your first guess\n";
	cin>>x;
    int a=check(x,y);
	return 0;
}

