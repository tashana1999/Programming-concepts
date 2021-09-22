#include<iostream>
using namespace std;
int main(){
	int A=30,B=50,C=100,D=120;//prices of products
	int R1=100,R2=100,R5=100,R10=100;//reservations
	int tempR1,tempR2,tempR5,tempR10;//user inputs
	int excR1,excR2,excR5,excR10;
	int tempR1_2,tempR2_2,tempR5_2,tempR10_2;//temporary store
	int code,price;//to accept product no selected
	while(R1>0||R2>0||R5>0||R10>0){
		cout<< "Welcome!How may I help you?"<<endl;
		cout<< "Product A: Enter 1"<< endl;
		cout<< "Product B: Enter 2"<< endl;
		cout<< "Product C: Enter 3"<< endl;
		cout<< "Product D: Enter 4"<< endl;
	
		 
		
		
	    do{
	    	cout<< "Enter a code " << endl;
		 cin>> code;
		} while((code==0)&&(code<4));
		switch(code){//display the price of the product
			case 1:
				price=A;
				cout << "Price of product A is Rs30/="<<endl;
				break;
			case 2:
				price=B;
				cout << "Price of product B is Rs50/="<<endl;
				break;
			case 3:
				price=C;
				cout << "Price of product C is Rs100/="<<endl;
				break;
			case 4:
				price=D;
				cout << "Price of product D is Rs120/="<<endl;
				break;			
		}
	cout<<endl;
	//recieves the payment of the customer for the product purchased-assumes that the customer always inputs legal coins
	//the while loop executes continuously until sufficient payment is done to purchase the product
	int count=0,lack=0,payment=0;
	while(payment<price){
		if(count!=0){
			lack=price-payment;
			cout<<"Rs."<<lack<<".00 insufficient,please insert remaining amount"<<endl;
		}
		cout<<"Please enter the payment through the slot(Rs.1,2,5 and 10 coins are only accepted)"<< endl;
		cout<<"Number of Rs.1 coins:";
		cin >> tempR1;
		tempR1_2+=tempR1;
		cout<<"Number of Rs.2 coins:";
		cin >> tempR2;
		tempR2_2+=tempR2;
		cout<<"Number of Rs.5 coins:";
		cin >> tempR5;
		tempR5_2+=tempR5;
		cout<<"Number of Rs.10 coins:";
		cin >> tempR10;
		tempR10_2+=tempR10;
		//calculations the total payment done
		payment+=(tempR1*1+tempR2*2+tempR5*5+tempR10*10);
		//adds the entered coins to the appropriate denomination reserve
		R1+=tempR1;
		R2+=tempR2;
		R5+=tempR5;
		R10+=tempR10;
		tempR1=0,tempR2=0,tempR5=0,tempR10=0;
		count++;
		cout<<endl;
		  
	}
	cout<<endl;
	//calculates the balance
	bool canChange=1;//stores whether the balance can be paid or not
	int balance=0;
	balance=payment-price;
	int tempBalance=balance;
	tempR1=0,tempR2=0,tempR5=0,tempR10=0;
	tempR10=balance/10;
	if(R10<tempR10){
		tempR10=R10;
	}
	balance=balance-tempR10*10;
		tempR5=balance/5;
	if(R5<tempR5){
		tempR5=R5;
	}
	balance=balance-tempR5*5;
		tempR2=balance/2;
	if(R2<tempR2){
		tempR2=R2;
	}
	balance=balance-tempR2*2;
		tempR1=balance/1;
	if(R1<tempR1){
		tempR1=R1;
	}
	balance=balance-tempR1*1;
	cout<<"out of change. Get back your payment Rs."<<payment<<".00 through the coin slot"<<endl;	
	}
	if(tempR10){
		cout<<"Rs.10: "<<tempR10<<endl;
	}
	if(tempR5){
		cout<<"Rs.5: "<<tempR5<<endl;
	}
	if(tempR2){
		cout<<"Rs.2: "<<tempR2<<endl;
	}
	if(tempR1){
		cout<<"Rs.1: "<<tempR1<<endl;
	}
	cout<<endl<<"Thank You"<<endl<<endl;
	//the balance will be deducted from the denomination reserves appropriately
	R1-=tempR1;
	R2-=tempR2;
	R5-=tempR5;
	R10-=tempR10;
	//moves excess coins to the overflow bin
	//maximum size of each denomination reserve is 120 coins.when exceeds the maximum amount coins are removed until there are space
	if(R1>120){
		excR1+=(R1-100);
		R1=100;
	}
	if(R2>120){
		excR2+=(R2-100);
		R2=100;
	}
	if(R5>120){
		excR5+=(R5-100);
		R5=100;
	}
	if(R10>120){
		excR10+=(R10-100);
		R10=100;
	}
	//reinitialize variables with 0;
	tempR1=0,tempR2=0,tempR5=0,tempR10=0;
	tempR1_2=0,tempR2_2=0,tempR5_2=0,tempR10_2=0;
	// payment=0, balance=0;
	//owners option to terminate the process of the vending machine whenever required
	int password=0;//authorized password is 12345
	cout<<"Enter password to terminate(authorized people only)"<<endl;
	cout<<"If you are a customer enter o for password to continue"<<endl;
	cout<<"password: ";
	cin>>password;
	if(password==12345){
		break;//terminates the loop if the correct password in entered
	}
	cout<<endl;


return 0;	
}
