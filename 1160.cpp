/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n, sum=0, t;
    cin>>t;
    for(int i=1; i<=t; i++){
    cin>>n;
    for(int i=1; i<n; i++){
        if((n%i)==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        cout<<n<<" eh perfeito"<<endl;
    }
    else{
        cout<<n<<" nao eh perfeito"<<endl;
    }
    sum=0;
}
    return 0;
}
