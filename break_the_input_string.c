#include<stdio.h>
#include<string.h>
int main()
{
    char str[90]="my_name_is_edcast_future_skills";
    char ch[5]="_";
    char *s;
    s=strtok(str,ch);
    printf("The broken string is:\n");
    while(s!=NULL)
    {
        printf("%s , ",s);

        s=strtok(NULL,ch);
    }

    return 0;
}
