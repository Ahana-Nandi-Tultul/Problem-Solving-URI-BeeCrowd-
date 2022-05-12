/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int n, m, c=0,x=1000;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>m;
         if(m<x){
             x=m;
             c=i;
         }
    }
    cout<<"Menor valor: "<<x<<endl;
    cout<<"Posicao: "<<c<<endl;

    return 0;
}
