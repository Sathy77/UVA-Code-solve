#include<stdio.h>
#include<string.h>

int main()
{
    int i, word, flag;
    char str[1000];
    while(gets(str))
    {
        word=0,flag=1;
        for(i=0; str[i]!='\0'; i++)
        {
            if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z'))
            {
                if(flag==1)
                    word++;
                flag=0;
            }
            else
                flag=1;
        }
        printf("%d\n", word);
    }
    return 0;
}
