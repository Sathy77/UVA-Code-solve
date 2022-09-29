#include<stdio.h>
#include<conio.h>
int main()
{
    int N,K,X,Test;
    scanf("%d ",&Test);
    while(Test--)
    {
        scanf("%d %d %d", &N,&K,&X);
        int arr[N+1],i,sum=0;
        for(i=0; i<=N; i++)
        {
            arr[i]=i;
        }
        for(i=X; i<=K; X++)
        {
            arr[i]=0;
        }
        for(i=0; i<=N; i++)
        {
            sum=sum+arr[i];
        }
        printf("Case %d: %d\n",Test,sum);
    }

    return 0;
}
