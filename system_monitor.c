#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("User:");
    fflush(stdout);
    system("whoami");
    

    printf("Kernel:");
    fflush(stdout);
    system("uname -r");
    

    printf("Operating System:");
    fflush(stdout);
    system("lsb_release -d");

    printf("Uptime:");
    fflush(stdout);
    system("uptime -p");

    printf("\nCPU Usage:\n");
    fflush(stdout);
    system("top -bn1 | grep 'Cpu(s)'");

    printf("\nDisk Usage:\n");
    fflush(stdout);
    system("df -h");

    printf("\nMemory Usage:\n");
    fflush(stdout);
    system("free -h");

    printf("\n=====================================\n");

    return 0;

}