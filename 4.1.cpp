#include <iostream>//4.1
using namespace std;

//access to main function
int main()
{//declare variable
    int n, i;
    float num[i] ,sum=0.0, average;
//get input
    cout << "Enter number";

   cin >> n; 
//run loop
    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }
//find average
    average = sum / n;
    //print average
    cout << "Average = " << average;

    return 0;
}
