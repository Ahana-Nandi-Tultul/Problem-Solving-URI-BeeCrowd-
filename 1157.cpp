/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   cout<<1<<endl;
   for (int i=2; i<=n; i++ ){
       if(n%i==0){
           cout<<i<<endl;
       }
   }

    return 0;
}
