#include <stdio.h>

int main() {
    char input[100];
    int i, j;

    printf("Enter a string: ");
    scanf("%s", input);

    for (i=0,j=0; input[i] !='\0';i++) {
        if (input[i]!='a' && input[i]!='e' && input[i]!='i' && input[i]!='o' && input[i]!='u'
            && input[i]!='A' && input[i]!='E' && input[i]!='I' && input[i]!='O' && input[i]!='U')
         {
            input[j++] = input[i];
        }
    }

    input[j] = '\0';

    printf("String after removing vowels: %s\n", input);
    return 0;
}
