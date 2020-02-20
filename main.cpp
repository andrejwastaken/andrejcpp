#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <iso646.h>
using namespace std;

int main()
{

int n,i;
i = 1;
v:cout<<"Vnesete do koj broj sakate da brojam: ";
cin>>n;
if(n <= i){
    goto v;
}else
for(i = 1; n >= i ; i++)
    cout<<i<<endl;
    system("PAUSE");
    return 0;
}

