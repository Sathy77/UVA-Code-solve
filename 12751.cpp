#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,K,X,Test,T=1;
    scanf("%d ",&Test);
    while(Test--)
    {
        scanf("%d %d %d", &N,&K,&X);
        int arr[N+1],i,sum=0;
        for(i=0; i<=N; i++)
        {
            arr[i]=i;
        }
        for(i=X; i<X+K; i++)
        {
            arr[i]=0;
        }

        for(i=0; i<=N; i++)
        {
            sum=sum+arr[i];
        }
        printf("Case %d: %d\n",T,sum);
        T++;
    }

    return 0;
}

