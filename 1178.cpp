/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double n;
    cin>>n;
    for(int i=0; i<=99; i++){
        cout<<"N["<<i<<"] = "<<fixed<<setprecision(4)<<n<<endl;
        n=n/2;
    }
}
