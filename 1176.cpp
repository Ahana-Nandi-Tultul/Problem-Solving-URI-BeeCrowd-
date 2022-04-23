/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n, t;
    long long a[61];
    cin>>n;
    a[0]=0;
    a[1]=1;
    for (int i=2; i<=60; i++){
        a[i]=a[i-2]+a[i-1];
        
       
    }
    for(int i=0; i<n; i++){
        cin>>t;
        cout << "Fib(" << t << ") = " << a[t] << "\n";
    }
    

    return 0;
}