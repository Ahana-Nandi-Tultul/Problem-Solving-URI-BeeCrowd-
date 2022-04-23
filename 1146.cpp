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
   while(true){
     cin>>n;
     if(n==0){
         break;
     }
     for(int i=1; i<n; i++){
         cout<<i<<" ";
     }
     cout<<n<<endl;
   }

    return 0;
}
