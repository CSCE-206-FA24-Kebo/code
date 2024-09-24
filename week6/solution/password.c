#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_PASSWORD_LENGTH 100

int is_valid_password(const char* password) {
    int length = strlen(password);
    int has_uppercase = 0;
    int has_digit = 0;
    int has_special = 0;

    if (length < 8) {
        return 0;
    }

    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) {
            has_uppercase = 1;
        } else if (isdigit(password[i])) {
            has_digit = 1;
        } else if (!isalnum(password[i])) {
            has_special = 1;
        }
    }

    return has_uppercase && has_digit && has_special;
}

int main() {
    char password[MAX_PASSWORD_LENGTH];
    int valid_password = 0;

    printf("Password Validator\n");
    printf("Criteria:\n");
    printf("- At least 8 characters long\n");
    printf("- Contains at least one uppercase letter\n");
    printf("- Contains at least one digit\n");
    printf("- Contains at least one special character\n\n");

    do {
        printf("Enter a password: ");
        fgets(password, sizeof(password), stdin); // This is why we used a DO WHILE !

        // Remove newline character if present
        password[strcspn(password, "\n")] = 0;
        
        printf("is_valid_password(password): %d\n", is_valid_password(password));

        if (is_valid_password(password)) {
            valid_password = 1;
            printf("Password is valid!\n");
        } else {
            printf("Password does not meet the criteria. Please try again.\n");
        }
    } while (!valid_password);

    return 0;
}