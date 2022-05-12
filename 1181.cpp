#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    double a[100][100], sum=0.0, avg=0.0;
    char str;
    cin>>n;
    cin>>str;
    for(int i=0; i<12; i++){
    for(int j=0; j<12; j++){
        cin>>a[i][j];
        if(i==n){
            sum=sum+a[i][j];
        }
    }

    }
    if(str=='S'){
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    else if(str=='M'){
        avg=(sum/12.0);
        cout<<fixed<<setprecision(1)<<avg<<endl;
    }
    return 0;
}
