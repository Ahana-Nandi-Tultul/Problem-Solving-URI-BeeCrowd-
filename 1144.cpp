/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, c=0, j=1, k=1;
    cin>>n;
    for(int i=1; i<=n; i++){
       cout<<static_cast<int>(pow(i,1))<<" "<<static_cast<int>(pow(i, 2))<<" "<<static_cast<int>(pow(i, 3))<<endl;
       cout<<static_cast<int>(pow(i,1))<<" "<<static_cast<int>((pow(i,2)+1))<<" "<<static_cast<int>((pow(i, 3)+1))<<endl;
    }
    return 0;
}