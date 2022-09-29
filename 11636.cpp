#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int Number,j=0,i,Ans;
    while((scanf("%d",&Number))==1)
    {
        if(Number<0)
            break;
        else
        {
            for(i=0; i<Number; i++)
            {
                if(pow(2,i)>=Number)
                {
                    Ans=i;
                    break;
                }
            }
            j++;
        }
        cout<<"Case "<<j<<": "<<i<<endl;
    }
    return 0;
}
