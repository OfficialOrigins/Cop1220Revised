#include <stdio.h>
#include <string.h>
#include <ctype.h> //Extra useful methods

//Arav Halade
//Cop 1220
//PigLatin

//a, e, i, o, u

int isVowel(char c) {
    c = tolower(c);
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}

int main() {
    char sentence[1000], word[100];
    int i = 0, j = 0, k;

    fgets(sentence, sizeof(sentence), stdin); //alternative to scanf, much better

    while (sentence[i] != '\0') {
        if (isalpha(sentence[i])) {
            word[j++] = tolower(sentence[i]);
        } else {
            if (j > 0) {
                word[j] = '\0';
                k = 0;
                while (word[k] && !isVowel(word[k])) k++;

                if (k == 0)
                    printf("%syay", word);
                else {
                    printf("%s", word + k);
                    for (int m = 0; m < k; m++)
                        putchar(word[m]);
                    printf("ay");
                }
                j = 0;
            }
            putchar(sentence[i]);
        }
        i++;
    }

    if (j > 0) {
        word[j] = '\0';
        k = 0;
        while (word[k] && !isVowel(word[k])) k++;

        if (k == 0)
            printf("%syay", word);
        else {
            printf("%s", word + k);
            for (int m = 0; m < k; m++)
                putchar(word[m]);
            printf("ay");
        }
    }

    return 0;
}