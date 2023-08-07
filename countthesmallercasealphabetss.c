#include <stdio.h>

int countLowercase(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count++;
        }
    }
    return count;
}

int main() {
    char inputString[100];
    printf("Enter a string: ");
    scanf("%s", inputString);

    int lowercaseCount = countLowercase(inputString);
    printf("Number of lowercase characters: %d\n", lowercaseCount);

    return 0;
}
