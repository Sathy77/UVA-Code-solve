#include <cstdio>
using namespace std;
int main()
{
    int N,songs[20],n,i,j,max,best,sum,current;
    while(scanf("%d",&N)==1)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
            scanf("%d",songs+i);
        max = 1<<n;
        sum = 0;
        best = 0;
        for(i=0; i<max; i++)
        {
            current = 0;
            for(j=0; (1<<j)<=i; j++)
                if((1<<j)&i)
                    current+=songs[j];
            if(current>sum&&current<=N)
            {
                best=i;
                sum=current;
            }
        }
        for(j=0; (1<<j)<=best; j++)
            if((1<<j)&best)
                printf("%d ",songs[j]);
        printf("sum:%d\n",sum);
    }
    return 0;
}
