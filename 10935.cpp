#include<cstdio>
#include<queue>
using namespace std;

int main()
{
    int n;

    while(scanf("%d", &n) && n!=0)
    {
        queue<int> q;
        for(int i=1; i<=n; i++)
        {
            q.push(i);
        }

        printf("Discarded cards:");
        while(q.size()>2)
        {
            printf(" %d,", q.front());
            q.pop();
            q.push(q.front());
            q.pop();
        }
        if(q.size()>1)
        {
            printf(" %d", q.front());
            q.pop();
        }
        printf("\nRemaining card: %d\n", q.front());
        q.pop();
    }
    return 0;
}
