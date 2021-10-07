#include <stdio.h>
#include<stdlib.h>
int main(){
	//pointers of double which store values of double type
	double*d_var=NULL,*d_array=NULL;
	//DMA using pointers
	//<pointer name>=<new operator><type of values>
	d_var=new double;
	//double*d_var=new double;
	//DMA using pointers
	//<pointer>=<new operator><type of values><size of the array>
	d_array=new double[10];
	return 0;
}
