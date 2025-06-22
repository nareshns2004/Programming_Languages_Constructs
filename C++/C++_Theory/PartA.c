#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

static void* thread_fn_callback(void* arg){
    char* input = (char*) arg;
    int i = 0;
    while(i<10){
        printf("input string = %s\n",input);
        sleep(1);

        if(i==5){
            pthread_exit(0);
        }
        
        i++;
    }

}

void thread1_create(){

    pthread_t pthread1; // Thread Handle
    static char *thread_input1 = "I am Thread no 1";

    int rc = pthread_create(&pthread1, NULL, thread_fn_callback, (void*)thread_input1);

    if(rc!=0){
        printf("Error Code thread not created = %d\n",rc);
        exit(0);
    }

}


int main(int argc, char **argv){

    thread1_create();

    printf("main thread is paused\n");

   // pause();

    return 0;

}