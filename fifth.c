#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char *word;

    // Input sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Split into words
    word = strtok(sentence, " \n");  // delimiters are space and newline

    while (word != NULL) {
        printf("%s\n", word);
        word = strtok(NULL, " \n");  // get next word
    }

    return 0;
}
