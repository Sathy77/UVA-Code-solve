#include<iostream>
using namespace std;
int main()
{
    long long int Number;
    while(cin>>Number)
    {
        long long int sum=1;
        for(long long int i=2; i<=Number; i++)
        {
            sum=sum*i;
        }
        cout<<sum<<endl;
    }
    return 0;
}
