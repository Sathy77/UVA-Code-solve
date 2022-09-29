#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int Test,Number,i,sum,re;
    cin>>Test;
    while(Test--)
    {
        cin>>Number;
        sum=0;
        for(i=1; i<=Number/2; i++)
        {
            if(Number%i==0)
            {
                sum+=i;
            }


        }
        if(Number>sum)
            cout<<"deficient"<<endl;
        else if(Number==sum)
            cout<<"perfect"<<endl;

        else
            cout<<"abundant"<<endl;
    }
    return 0;
}
