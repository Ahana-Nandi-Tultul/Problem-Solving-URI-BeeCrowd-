/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
  int n, m,sum=0, c=0;
  cin>>m;
   while(true){
     cin>>n;
     if(n>m){
         while(sum<=n){
         sum=sum+m;
         m=m+1;
         c=c+1;
         }
         if(sum>n){
             break;
        }
     }
     
     else{}
     n=0;
   }
   cout<<c<<endl;

    return 0;
}
