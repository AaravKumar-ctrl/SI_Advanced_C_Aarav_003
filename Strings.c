#include <stdio.h>
#include <string.h>

int main() {
    // ---- 1. String Measurement & Copying ----
    char source[] = "Standard-C-String";
    char destination[30];
    char secure_dest[10];

    printf("--- String Measurement & Copying ---\n");
    printf("Length of source: %lu\n", (unsigned long)strlen(source)); // Output: 17

    // Using standard strcpy
    strcpy(destination, source);
    printf("After strcpy, destination: %s\n", destination);

    // Using secure strncpy to prevent memory overrun
    strncpy(secure_dest, source, sizeof(secure_dest) - 1);
    secure_dest[sizeof(secure_dest) - 1] = '\0'; // Crucial explicit null-termination
    printf("After secure strncpy, secure_dest: %s\n\n", secure_dest); // Output: Standard-

    // ---- 2. Concatenation ----
    char firstName[20] = "John ";
    char lastName[] = "Doe";
    
    printf("--- Concatenation ---\n");
    strcat(firstName, lastName);
    printf("Full Name (strcat): %s\n\n", firstName); // Output: John Doe

    // ---- 3. Lexicographical Comparison ----
    char pass1[] = "Secret123";
    char pass2[] = "Secret456";
    
    printf("--- Comparison ---\n");
    int result = strcmp(pass1, pass2);
    if (result == 0) {
        printf("Passwords match perfectly.\n");
    } else if (result < 0) {
        printf("pass1 is smaller than pass2 lexicographically.\n\n"); // This will print
    } else {
        printf("pass1 is greater than pass2 lexicographically.\n\n");
    }

    // ---- 4. Character & Substring Searching ----
    char sentence[] = "The quick brown fox jumps over the lazy dog";
    char *char_match = strchr(sentence, 'q');
    char *sub_match = strstr(sentence, "fox");

    printf("--- Searching ---\n");
    if (char_match) printf("Found character 'q' at position: %ld\n", char_match - sentence);
    if (sub_match)  printf("Found substring 'fox' at position: %ld\n\n", sub_match - sentence);

    // ---- 5. Safe Tokenization ----
    char CSV_line[] = "CPU,RAM,Storage,GPU,Network";
    char *token = strtok(CSV_line, ",");
    
    printf("--- Tokenization (Parsing CSV) ---\n");
    while (token != NULL) {
        printf(" Token extracted: %s\n", token);
        token = strtok(NULL, ","); // Must pass NULL to extract subsequent tokens
    }

    return 0;
}
