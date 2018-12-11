#include <unistd.h>
#include <stdio.h>
#include "preempt_threads.h"

void thread_function()
{
    
    // while(1) {
    //     write(STDOUT_FILENO, "111 working\n",12); 
    // }
    for(int i = 0; i < 20000; i++) {
        write(STDOUT_FILENO, "111 done\n",9); 
    }
}

void thread_function2()
{
    // while(1) { 
    //     write(STDOUT_FILENO, "222 working\n",12);
    // }
    for(int i = 0; i < 20000; i++) {
        write(STDOUT_FILENO, "222 done\n",9);
    }
    
}

void main() {

    initialize_basic_threads();
    create_new_thread(thread_function);
    create_new_thread(thread_function2);
    schedule_threads_with_preempt(3);
    printf( "Everything finished\n" );
}

