#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,i=0,Max=0;

    cout<<"Input Number1:";
    cin>>a;
    cout<<"Input Number2:";
    cin>>b;

    if(a<b)
        Max=b;
    else
        Max=a;

    while((Max%a==0)&&(Max%b==0))
    {
      Max=Max+1;
    }
    cout<<"smallest common factor:"<<Max<<endl;
}
