//currency conversion
#include <bits/stdc++.h>
using namespace std;

int main(){
    float pd,shl,pnc;
    cout<<"Enter pounds: ";
    cin>>pd;
    cout<<"Enter shillings: ";
    cin>>shl;
    cout<<"Enter pence: ";
    cin>>pnc;
    pd += (shl/20);
    pd += (pnc/(20*12));
    cout<<"Decimal pounds = "<<setprecision(2)<<fixed<<pd;

    return 0;
}
