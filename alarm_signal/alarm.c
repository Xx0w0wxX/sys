#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void sig_handler(int signum)
{
    printf("Alarm delivered signum is %d\n", signum);
    // system("/bin/ls");
    exit(0);
}

int main()
{
    // we have to catch SIGALRM
    alarm(5);
    // See what happens by commenting out this lone
    // And check `sudo dtruss ./a.out` if you use MacOS
    signal(SIGALRM, sig_handler); // signum = 14
    // if you do something likel
    // signal(SIGINT, sig_handler);
    // Automatically exit


    // start executing from this line only if not exited in signal handler.
    for(;;)
        sleep(1);

    return 0;
}
