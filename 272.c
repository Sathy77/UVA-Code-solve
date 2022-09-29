#include<stdio.h>
#include<conio.h>
int main()
{
    char arr[10000], arr1[10000];
    gets(arr);
    int j=0,i,cont=1;
    for(i=0; arr[i]!='\0'; i++)
    {
        if(cont==1 && arr[i]=='"')
        {
            arr1[j]='`';
            j++;
            arr1[j]='`';
            j++;
            cont=2;
        }
       else if(cont==2 && arr[i]=='"')
        {
            arr1[j]='\'';
            j++;
            arr1[j]='\'';
            j++;
            cont=1;
        }

        else
        {
            arr1[j]=arr[i];
            j++;
        }

    }

        puts(arr1);

    return 0;
}
