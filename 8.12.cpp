#include <iostream>
using namespace std;
//function to sort the numbers using pointers
void sort(int n,int*ptr)
{int i,j,t;
//sort the numbers using pointers
for(i=0;i<n;i++){
	for(j=i+1;j<n;j++){
		if(*(ptr+j)<*(ptr+i)){
			t=*(ptr+i);
			*(ptr+i)=*(ptr+j);
			*(ptr+j)=t;
		}
	}
}
//print the numbers
for(i=0;i<n;i++)
 cout<<*(ptr+i)<<"";
 
}
int main(){
	int number;
	cout<<"Type the length of the array"<<endl;
	cin>>number;
	int arr[number];
	for(int i=0;i<number;i++){
		cout<<"Type the element"<<i+1<<":";
		cin>>arr[i];
	}
	sort(number,arr);
	return 0;
}
