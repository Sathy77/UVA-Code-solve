#include<stdio.h>
#include<string.h>
int main()
{
long int i,count=0,l;
char arr[100000];
while(gets(arr))
{
l=strlen(arr);
for(i=0;i<l;i++)
    {
    if(arr[i]=='"')
        {
        count=count+1;
        if(count%2==1)
            printf("``");
        else
            printf("''");
        }
    else
        printf("%c",arr[i]);
    }
printf("\n");
}
return 0;
}
