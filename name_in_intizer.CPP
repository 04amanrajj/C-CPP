#include <stdio.h>
#include <string.h>

int main() {
    char input[1000];
    int wordCount = 0;

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    int len = strlen(input);

    for (int i = 0; i < len; i++) {
        // Check for a space or newline character to detect word boundaries
        if (input[i] == ' ' || input[i] == '\n') {
            wordCount++;
        }
    }

    // Add 1 to the word count to account for the last word
    wordCount++;

    printf("Number of words: %d\n", wordCount);

    return 0;
}
