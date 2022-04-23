/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int a=0,n;
   int i=0;
   cin>>n;
   while(i<1001){
        cout<<"N["<<i<<"] = "<<a<<endl;
           i=i+1;
           a=a+1;
          if(a==n){a=0;}
           
       
   }
    return 0;
}