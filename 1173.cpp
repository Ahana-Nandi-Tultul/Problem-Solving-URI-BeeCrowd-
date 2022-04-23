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
    for (int i=0; i<10; i++){
        cout<<"N["<<i<<"] = "<<n<<endl;
        n=n*2;
        
    }
    return 0;
}
