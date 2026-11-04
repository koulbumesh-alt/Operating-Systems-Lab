#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t p = fork();

    if (p == 0) {
        printf("Child running with PID: %d\n", getpid());
        sleep(2);
        printf("Child Exiting...\n");
        exit(0);
    }
    else {
        printf("Parent Waiting for child to terminate...\n");
        pid_t terminated_pid = wait(NULL);
        printf("Parent Terminated child PID: %d\n", terminated_pid);
    }

    return 0;
}
