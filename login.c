#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "myos.h"

void login() {
    char user[20], pass[20];

    printf("==== MyOS Login ====\n");

    printf("Username: ");
    scanf("%s", user);

    printf("Password: ");
    scanf("%s", pass);

    if (strcmp(user, "admin") != 0 || strcmp(pass, "1234") != 0) {
        printf("Access Denied!\n");
        exit(0);
    }

    printf("Login Successful!\n");
}