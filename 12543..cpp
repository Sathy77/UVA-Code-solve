#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string Main, tem;
    int len, Tlen=0;
    while(1)
    {
        cin>>Main;
        if(Main=="E-N-D")
        {
             break;
        }

        len=Main.size();
        if(len>Tlen)
        {
            tem=Main;
            Tlen=len;
        }

    }
     for(int i=0;i<Tlen;i++)
    {
        if(tem[i]>='A'&&tem[i]<='Z')
            printf("%c",tem[i]+32);
        else if(tem[i]>='a'&&tem[i]<='z'||tem[i]=='-')
            printf("%c",tem[i]);
    }

    printf("\n");

    return 0;
}
