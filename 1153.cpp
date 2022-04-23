/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n, sum=1;
    cin>>n;
    sum=n;
    for(int i=1; i<n; i++){
        sum=sum*(n-i);
    }
    cout<<sum<<endl;
    return 0;
}
