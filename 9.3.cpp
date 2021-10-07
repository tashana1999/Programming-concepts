#include<stdlib.h>
#include<iostream>
using namespace std;
int main(){
	double *d_var=NULL;
	double*d_array=new double[10];
	for(int i=0;i<10;i++){
		d_array[i]=1.0;
		cout<<d_array[i];
	}
	delete[]d_array;
	delete d_var;
}
