#include<bits/stdc++.h>
#include<vector>
#include<string>

using namespace std;

int main()
{
    int sub=0,len;
    string a,b;
    while(1){
    cin>>a;
    if(a=="E-N-D")break;
    len=a.size();
    if(len>sub){
        b=a;
        sub=len;

    }
    }
    for(int i=0;i<sub;i++)
    {
        if(b[i]>='A'&&b[i]<='Z')
            printf("%c",b[i]+32);
        else if(b[i]>='a'&&b[i]<='z'||b[i]=='-')
            printf("%c",b[i]);
    }

    printf("\n");


    return 0;
}


