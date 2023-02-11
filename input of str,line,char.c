#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch ,s[100],l[100];
    
    scanf("%c",&ch);
    scanf("%s",l);
    scanf("\n");
    scanf("%[^\n]%*c",s);
    printf("%c\n",ch);
    printf("%s\n",l);
    printf("%s",s);
    return 0;
}
