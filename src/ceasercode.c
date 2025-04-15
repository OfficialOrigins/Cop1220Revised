#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

void toPigLatin(char* word, char* pigLatin) {
    int len = strlen(word);
    int i = 0;
    char punct = '\0';
    if (ispunct(word[len - 1])) {
        punct = word[len - 1];
        word[len - 1] = '\0';
        len--;
    }
    for (i = 0; i < len; i++) {
        word[i] = tolower(word[i]);
    }
    if (isVowel(word[0])) {
        sprintf(pigLatin, "%syay", word);
    } else {
        int consonantClusterEnd = 0;
        while (!isVowel(word[consonantClusterEnd]) && word[consonantClusterEnd] != '\0') {
            consonantClusterEnd++;
        }
        sprintf(pigLatin, "%s%.*say", word + consonantClusterEnd, consonantClusterEnd, word);
    }
    if (punct) {
        int len = strlen(pigLatin);
        pigLatin[len] = punct;
        pigLatin[len + 1] = '\0';
    }
}

int main() {
    char text[1000];
    int shift;
    printf("Enter text to encrypt: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';
    printf("Enter shift value: ");
    scanf("%d", &shift);
    printf("Text: %s\n", text);
    printf("Shift: %d\n", shift);
    char* word = strtok(text, " ");
    char pigLatin[1000] = "";
    char result[5000] = "";
    while (word != NULL) {
        char converted[100];
        toPigLatin(word, converted);
        strcat(result, converted);
        strcat(result, " ");
        word = strtok(NULL, " ");
    }
    printf("Cipher: %s\n", result);
    return 0;
}
