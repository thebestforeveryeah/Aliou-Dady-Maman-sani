#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, string argv[])
{
if(argc==2)
{

    int z=atoi(argv[1]);

    string text=get_string("text: ");


    printf("Text code  ");
    for (int i=0; i<strlen(text); i++)

    if(isalpha(text[i]))
    {

    if(islower(text[i]))
        printf("%c",(((text[i]- 97)+ z)%26)+ 97);

    if(isupper(text[i]))
        printf("%c",(((text[i]- 65)+ z)%26)+ 65);

    }
    else
        printf("%c",text[i]);
    }
printf("\n");
}
