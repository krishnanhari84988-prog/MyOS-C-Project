#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "myos.h"

void run_shell() {   // ⚠️ MUST be EXACT NAME
    char cmd[50];

    printf("\nWelcome to MyOS (C Version)\n");

    while (1) {
        printf("\nMyOS > ");
        scanf("%s", cmd);

        if (strcmp(cmd, "help") == 0) {
            printf("Commands:\n");
            printf("help - show commands\n");
            printf("clear - clear screen\n");
            printf("about - about OS\n");
            printf("time - show time\n");
            printf("date - show date\n");
            printf("exit - shutdown\n");
        }

        else if (strcmp(cmd, "clear") == 0) {
            clear_screen();
        }

        else if (strcmp(cmd, "about") == 0) {
            printf("This is a mini OS simulator in C.\n");
        }

        else if (strcmp(cmd, "time") == 0) {
            system("time /t");
        }

        else if (strcmp(cmd, "date") == 0) {
            system("date /t");
        }

        else if (strcmp(cmd, "exit") == 0) {
            printf("Shutting down...\n");
            break;
        }

        else {
            printf("Unknown command!\n");
        }
    }
}