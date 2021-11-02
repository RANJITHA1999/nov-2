#include <stdio.h>
#include <string.h>
int main()
{
    char s[20],c;
    int flag = 0, i,len;
    printf("Enter the string:\n");
    gets(s);
    len=strlen(s);
    printf("enter choice:\n");
    scanf("%c",&c);
    
    for (i = 0;i<len;i++)
    {
        if (s[i] == c)
        {
            printf("character is :%d\n",i+1);
            flag=1;
        }
    }
    if(flag==0)
    {
        
printf("word not found");
    }
}


