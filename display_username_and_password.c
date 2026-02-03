#include <stdio.h>
#include <string.h>

int main() {
    char username[20];
    char password[20];

    printf("username :");
    scanf("%s",username);

    printf("Enter password: ");
    scanf("%s", password);

    if ( strcmp(password, "1234") == 0) {
        printf("Login successful,Welcome %s\n",username);
    } else {
        printf("Invalid password\n");
    }

    return 0;
}
