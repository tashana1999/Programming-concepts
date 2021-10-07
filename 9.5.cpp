#include<iostream>
#include<stdlib.h>
using namespace std;
struct Timer{
	int hours;
	int minutes;
};
int main(){
	Timer *timeptr=new Timer{10,20};
	return(0);
}
