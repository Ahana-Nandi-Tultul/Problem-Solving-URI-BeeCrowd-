/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n, c=0, j=1;
    cin>>n;
    for(int i=1; i<=n; i++){
        while(c<3){
            cout<<j<<" ";
            j=j+1;
            c=c+1;
            
        }
        cout<<"PUM"<<endl;
        j=j+1;
        c=0;
    }
    return 0;
}
