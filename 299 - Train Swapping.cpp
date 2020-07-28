//# UVA-Code-solve

#include<iostream>
using namespace std;
int main()
{
    int Test, Test1, ar[50];
    cin>>Test;
    while(Test--)
    {
        cin>>Test1;
        int i,j;
        for(i=0; i<Test1; i++)
        {
            cin>>ar[i];
        }
        int tem,cont=0;
        for(i=0; i<Test1; i++)
        {
            for(j=Test1-1; j>i; j--)
            {
                if(ar[j]<ar[j-1])
                {
                    tem=ar[j];
                    ar[j]=ar[j-1];
                    ar[j+1]=tem;
                    cont++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<cont<<" swaps."<<endl;

    }
    return 0;
}
