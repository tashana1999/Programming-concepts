#include<iostream>
using namespace std;
int main(){
int t[2][5];
for(int i=0;i<2;i++){
	for(int j=0;j<5;j++){
	   t[i][j];
	   cout<<"Input integer value for Row"<<(i+1)<<"/Column"<<(j+1)<<":";	
	   cin>> t[i][j];
	}
}
int min=t[0][0];
for(int i=0;i<2;i++){
	for(int j=0;j<5;j++){
		if(min> t[i][j]){
			min=t[i][j];
		}
}}
cout<<"smallest value:"<<min<<endl;
	for(int j=0;j<5;j++){
		cout<<t[0][j]<<"";}
		cout<<endl;
		int tot=0;
			for(int j=0;j<2;j++){tot+=t[j][3];}
		cout<<"Total:"<<tot<<endl;
		cout<<endl;

}

