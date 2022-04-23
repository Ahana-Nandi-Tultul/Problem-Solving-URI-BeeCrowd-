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
    float n;
    
    for (int i=0; i<100; i++){
       cin>>n;
        if(n<=10){
        cout<<"A["<<i<<"] = "<<fixed<<setprecision(1)<<n<<endl;
        }
    }
    return 0;
}
