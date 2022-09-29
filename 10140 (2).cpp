#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
long long int sieve[1000002];
long long int *str;

int check_prime(long long int a)
{
    int c;
    if (sieve[a]==1)
        return 1;
    else if(a==1)
        return 0;
    else if(a!=2 && a%2==0)
        return 0;
    else
    {
        for ( c = 2 ; c <= sqrt(a); c++ )
        {
            if ( a%c == 0 )
                return 0;
        }
        sieve[a]=1;
        return sieve[a];
    }
}

int main()
{
    long long int Sart, End;
    long long int i,Test;
    while(cin>>Sart>>End)
    {
        str= new long long int[End-Sart];
        long long int j=0;
        for(i=Sart ; i<=End; i++)
        {
            Test=check_prime(i);
            if(Test==1)
            {
                str[j]=i;
                j++;
            }
        }
        long long int mini=10000,maxi=0,arr[4],tem;
        for(i=0; i<j-1; i++)
        {
            tem=str[i+1]-str[i];
            if(tem>maxi)
            {
                maxi=tem;
                arr[2]=str[i];
                arr[3]=str[i+1];
            }
            if(tem<mini)
            {
                mini=tem;
                arr[0]=str[i];
                arr[1]=str[i+1];
            }
        }
        if(maxi==0 && mini==10000)
            cout<<"There are no adjacent primes."<<endl;
        else
            cout<<arr[0]<<","<<arr[1]<<" are closest, "<<arr[2]<<","<<arr[3]<<" are most distant."<<endl;

    }


    return 0;
}
