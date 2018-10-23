#include <stdio.h>
#include <string.h>

int main() {
    char text[255];
    printf("Enter string: ");
    gets(text);
    char *token = strtok(text," ");

    while (token != NULL)
    {

        int num=0;
        for (int i = 0; i <strlen(token) ;i++) {


            if (token[i] == '='||token[i] == '+'||token[i] == '-'||token[i] == '/'||token[i] == ')'||token[i] == '('||token[i] == '.'||token[i] == ','||token[i] == '?'||token[i] == '*'||token[i] == '%'||token[i] == '$'){
                num+=1;
            }

        }
        if(num>0)
        {
            printf("");
        }
        else
        {
            printf("%s\n",token);
        }



        token = strtok(NULL, " ");
    }

    return 0;
}
