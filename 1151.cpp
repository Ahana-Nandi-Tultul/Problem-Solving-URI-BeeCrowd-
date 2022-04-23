/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n, a[46];
    cin>>n;
    
    a[0]=0;
    a[1]=1;
    cout<<a[0]<<" "<<a[1]<<" ";
    for (int i=2; i<n; i++){
        a[i]=a[i-1]+a[i-2];
        if(i==(n-1)){
            cout<<a[i];
        }
        else{
            cout<<a[i]<<" ";
        }
    }
    cout<<"\n";

    return 0;
}
