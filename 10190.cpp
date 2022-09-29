#include<iostream>
using namespace std;
int main()
{
    int Number, divider,TNumber,flag,i,arr[1000];
    while(cin>>Number>>divider)
    {
        TNumber=Number;
        flag=0;
        i=0;
        arr[i++]=Number;
        if(Number<divider || divider==0 || divider==1 )
        {
            cout << "Boring!" << endl;
            continue;
        }
        while(TNumber!=1)
        {
            if(TNumber%divider==0)
            {
                TNumber=TNumber/divider;
                arr[i++]=TNumber;
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"Boring!"<<endl;
        else
        {
            for(flag=0; flag<i; flag++)
            {
                 cout<<arr[flag];
                 if(flag<i-1)
                    cout<<" ";
            }

            cout<<endl;
        }
    }
    return 0;
}
