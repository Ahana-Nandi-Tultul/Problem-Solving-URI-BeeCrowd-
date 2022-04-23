/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, c=0;
    float avg, sum=0.0;
   while(true){
       cin>>n;
       if(n<0){
           break;
       }
       sum=sum+n;
       c=c+1;
   }
   avg= (sum/c);
   cout<<fixed<<setprecision(2)<<avg<<endl;
    return 0;
}
