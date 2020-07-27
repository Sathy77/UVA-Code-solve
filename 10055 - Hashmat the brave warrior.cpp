#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
   long long int Num, Num2,re;
    while((scanf("%lld %lld",&Num,&Num2))!=EOF)
    {
        re=Num-Num2;
        if(re<0)
            cout<<-1*re<<endl;
        else
            cout<<re<<endl;
    }
    return 0;
}
