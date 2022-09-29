#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    double Test, Number;
    cin>>Test;
    for(int i=1; i<=Test; i++)
    {
       cin>>Number;
        if(Number==1)
            cout<<"0.000"<<endl;
        else
            printf("%0.3lf\n", Number*Number+(sqrt(2)-1)*(Number-2)*(Number-2));
    }
    return 0;
}
