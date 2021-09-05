#include <iostream>
using namespace std;

int main(){
    int num, space;

    cout<<"Input number";
    cin>>num;

    for(int i = 1, k = 0; i <= num; ++i, k = 0)
    {
        for(space = 1; space <= num-i; ++space)
        {
            cout << "  ";
        }

        while (k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout<<endl;
    }
    return 0;
    
}