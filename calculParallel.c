#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int a = 20;
int main(){
    pid_t pid;
    switch(pid = fork()){
        case -1: printf("The fork failed! \n"); break;
        case 0: printf("ici le processus %d, le PID de mon pere est %d. \n", getpid(),getppid());a+=10;
        break;
        default: printf("ici le processus pere, le PID de mon fils est %d. \n", pid);a+=100;
    }
    printf("Fin du Process %d. avec a = %d\n", getpid(),a);
    return 0;
}

