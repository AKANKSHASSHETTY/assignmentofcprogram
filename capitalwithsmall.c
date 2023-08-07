


#include <stdio.h>

int areSameChars(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if ((str1[i] >= 'A' && str1[i] <= 'Z' && str2[i] >= 'a' && str2[i] <= 'z') ||
            (str1[i] >= 'a' && str1[i] <= 'z' && str2[i] >= 'A' && str2[i] <= 'Z')) {
            if (str1[i] != str2[i] + 32 && str1[i] + 32 != str2[i]) {
                return 0;
            }
        } else {
            if (str1[i] != str2[i]) {
                return 0;
            }
        }
        i++;
    }

    return (str1[i] == '\0' && str2[i] == '\0');
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    if (areSameChars(str1, str2)) {
        printf("The two strings are equal.\n");
    } else {
        printf("The two strings are not equal.\n");
    }

    return 0;
}


