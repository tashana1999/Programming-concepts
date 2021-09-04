
//IM2019/106
//Tashana kodithuwakku
//Assignment no 1
//due date Aug25
//use things within std namespace
using namespace std;
//allows access to iolibrary

#include <iostream> 
//allow access to maths functions
#include <math.h>
//start main function
int main()
{ //declare variables
   int x,y,z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u;
   //get amount of purchase from user
   cout << "Enter the amount of purchase\n";
   //set amount of purchase as x
   cin >> x;
   //get amount of cash tendered from user
   cout << "Enter the amount of cash tendered\n";
   //set amount of cash tendered as y
   cin >> y;
   //find balance
   z=y-x;
   //find no of 5000 notes in balance
   a=z/5000;
   //find remainder after dividing from 5000
   b=z%5000;
   //find no of 2000 notes in balance
   c=b/2000;
   //find remainder after dividing from 2000
   d=b%2000;
   //find no of 1000 notes in balance
   e=d/1000;
   //find remainder after dividing from 1000
   f=d%1000;
   //find no of 500 notes in balance
   g=f/500;
   //find remainder after dividing from 500
   h=f%500;
   //find no of 100 notes in balance
   i=h/100;
   //find remainder after dividing from 100
   j=h%100;
   //find no of 50 notes in balance
   k=j/50;
   //find remainder after dividing from 50
   l=j%50;
   //find no of 20 notes in balance
   m=l/20;
   //find remainder after dividing from 20
   n=l%20;
   //find no of 10 coins in balance
   o=n/10;
   //find remainder after dividing from 10
   p=n%10;
   //find no of 5 coins in balance
   q=p/5;
   //find remainder after dividing from 5
   r=p%5;
   //find no of 2 coins in balance
   s=r/2;
   //find remainder after dividing from 2
   t=r%2;
   //find no of 1 coins in balance
   u=t/1;
   //print no of 5000 notes
   cout <<"5000 notes=" << a << endl;
   //print no of 2000 notes
   cout <<"2000 notes=" << c << endl;
   //print no of 1000 notes
   cout <<"1000 notes=" << e << endl;
   //print no of 500 notes
   cout <<"500 notes=" << g << endl;
   //print no of 100 notes
   cout <<"100 notes=" << i << endl;
   //print no of 50 notes
   cout <<"50 notes=" << k << endl;
   //print no of 20 notes
   cout <<"20 notes=" << m << endl;
   //print no of 10 coins
   cout <<"10 coins=" << o << endl;
   //print no of 5 coins
   cout <<"5 coins=" << q << endl;
   //print no of 2 coins
   cout <<"2 coins=" << s << endl;
   //print no of 1 coins
   cout <<"1 coins=" << u << endl;
   return 0;
}
