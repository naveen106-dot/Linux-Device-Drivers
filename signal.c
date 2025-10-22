#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

// Signal handler for SIGINT (Ctrl+C)
void handle_sigint(int sig) {
    printf("\nReceived SIGINT (Ctrl+C). Exiting gracefully...\n");
    exit(0);  // Terminate the process
}

int main() {
    // Register signal handler
    signal(SIGINT, handle_sigint);

    printf("Running... Press Ctrl+C to stop.\n");

    // Infinite loop
    while (1) {
        printf("Working...\n");
        sleep(1);
    }

    return 0;
}
