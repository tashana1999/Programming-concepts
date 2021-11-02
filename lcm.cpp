#include<iostream>
using namespace std;


int lcm(int x,int y);
int main(){
	int x,y,z;
	cout<<"Enter no 1\n";
	cin>>x;
	cout<<"Enter no 2\n";
	cin>>y;
	z=lcm(x,y);
	cout<<"lcm is:"<<z	<<endl;
	return 0;
}
int lcm(int x,int y){
	int Max,a;
	Max = (x > y) ? x : y;
  while (1) {
      if (Max % x == 0 && Max % y == 0) {
          a=Max;
          break;
      }
      ++Max;
  }

	

	return a;
}
