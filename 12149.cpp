#include<iostream>
using namespace std;
int main()
{
    int Number;
    while(cin>>Number)
    {
        if (Number==0)
            break;
        else
        {
            cout<<(Number*(Number+1)*(2*Number+1))/6<<endl;
        }
    }
    return 0;
}
