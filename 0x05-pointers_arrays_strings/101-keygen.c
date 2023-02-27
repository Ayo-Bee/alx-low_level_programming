#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main() {
    char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator
    const char* allowed_chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+{}[]<>?/";

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random password
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = allowed_chars[rand() % (sizeof(allowed_chars) - 1)];
    }
    password[PASSWORD_LENGTH] = '\0'; // null terminate the string

    // Print the password
    printf("%s\n", password);

    return 0;
}

