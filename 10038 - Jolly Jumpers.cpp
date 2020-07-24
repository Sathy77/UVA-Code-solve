#include<iostream>
#include <cstdlib>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int Number;
    while(cin>>Number)
    {
        int str[Number], str1[Number-1],i,j,flag=1;
        for(i=0; i<Number ; i++)
        {
            cin>>str[i];

        }
        for(i=0; i<Number-1; i++)
        {
            str1[i]=abs(str[i]-str[i+1]);
        }
        sort(str1, str1 + Number - 1);
        j=1;
        for(i=0; i<=Number-2 ; i++)
        {
            if(str1[i]!=j)
            {
                flag=0;
                break;
            }
            j++;

        }
        if(flag==1)
            cout<<"Jolly"<<endl;
        else
            cout<<"Not jolly"<<endl;

    }

    return 0;
}
