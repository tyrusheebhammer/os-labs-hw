/*
Preempt Threads - a rudimentary userspace threads library

Author: Buffalo (hewner@rose-hulman.edu)

Contrary to C convention (but for your convenience) we've documented
these functions in the .c file rather than the header.

You should not need to modify this header.

 */

void initialize_basic_threads();

void yield_internal();

void create_new_thread(void (*fun_ptr)());

void create_new_parameterized_thread(void (*fun_ptr)(void*), void* parameter);

void schedule_threads_with_preempt(int usecs);

void yield();

void finish_thread();

int find_open_thread_pos();

void initialize_thread(int open_position);

void create_context(void (*fun_ptr)(void*), void* parameter, int open_position);

void thread_helper(void (*fun_ptr)(void*), void* parameter);

void free_thread();

void alarm_handler(int sig_num);

