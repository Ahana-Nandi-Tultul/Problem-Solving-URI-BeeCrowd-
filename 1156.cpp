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
    float n=1.0,k=2.0;
    n=n+(3.0/2.0);
    for(float i=5.0; i<=39.0; i=i+2){
        k=k*2;
        n=(n+(i/k));
    }
    cout<<fixed<<setprecision(2)<<n<<endl;
    return 0;
}
