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
    for (int i=0; i<=10; i++){
        cin>>n;
        if (n<=0){
        n=1;
        }
        cout<<"X["<<i<<"] = "<<n<<endl;
    }
    return 0;
}
