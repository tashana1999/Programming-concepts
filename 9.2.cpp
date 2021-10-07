#include<iostream>
using namespace std;
int main(){
	double*d_var,*d_array;
	d_var=new double;
	d_array=new double[3];
	cout<<"Enter a variable:";
	cin>>*d_var;
	cout<<"Enter value for variable:"<<*d_var<<endl;
	cout<<"Enter elements in the array:"<<endl;
	for(int i=0;i<3;i++){
		cin>>d_array[i];
	}
	cout<<"values in the array:"<<endl;
	for(int i=0;i<3;i++){
		cout<<d_array[i]<<endl;
	}
	return 0;
}
