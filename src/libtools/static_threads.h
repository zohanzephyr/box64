#include <pthread.h>

typedef struct x64emu_s x64emu_t;
typedef struct x64_unwind_buff_s x64_unwind_buff_t;
typedef union my_mutexattr_s my_mutexattr_t;
typedef union my_barrierattr_s my_barrierattr_t;
typedef union my_condattr_s my_condattr_t;
typedef struct pthread_cond_old_s pthread_cond_old_t;
int my_pthread_atfork(x64emu_t *emu, void* prepare, void* parent, void* child);
int my_pthread_attr_destroy(x64emu_t* emu, void* attr);
int my_pthread_attr_getstack(x64emu_t* emu, void* attr, void** stackaddr, size_t* stacksize);
int my_pthread_attr_setstack(x64emu_t* emu, void* attr, void* stackaddr, size_t stacksize);
int my_pthread_attr_setstacksize(x64emu_t* emu, void* attr, size_t stacksize);
int my_pthread_attr_getdetachstate(x64emu_t* emu, pthread_attr_t* attr, int *state);
int my_pthread_attr_getguardsize(x64emu_t* emu, pthread_attr_t* attr, size_t* size);
int my_pthread_attr_getinheritsched(x64emu_t* emu, pthread_attr_t* attr, int* sched);
int my_pthread_attr_getschedparam(x64emu_t* emu, pthread_attr_t* attr, void* param);
int my_pthread_attr_getschedpolicy(x64emu_t* emu, pthread_attr_t* attr, int* policy);
int my_pthread_attr_getscope(x64emu_t* emu, pthread_attr_t* attr, int* scope);
int my_pthread_attr_getstackaddr(x64emu_t* emu, pthread_attr_t* attr, void* addr);
int my_pthread_attr_getstacksize(x64emu_t* emu, pthread_attr_t* attr, size_t* size);
int my_pthread_attr_init(x64emu_t* emu, pthread_attr_t* attr);
int my_pthread_attr_setaffinity_np(x64emu_t* emu, pthread_attr_t* attr, size_t cpusize, void* cpuset);
int my_pthread_attr_setdetachstate(x64emu_t* emu, pthread_attr_t* attr, int state);
int my_pthread_attr_setguardsize(x64emu_t* emu, pthread_attr_t* attr, size_t size);
int my_pthread_attr_setinheritsched(x64emu_t* emu, pthread_attr_t* attr, int sched);
int my_pthread_attr_setschedparam(x64emu_t* emu, pthread_attr_t* attr, void* param);
int my_pthread_attr_setschedpolicy(x64emu_t* emu, pthread_attr_t* attr, int policy);
int my_pthread_attr_setscope(x64emu_t* emu, pthread_attr_t* attr, int scope);
int my_pthread_attr_setstackaddr(x64emu_t* emu, pthread_attr_t* attr, void* addr);
int my_pthread_getattr_np(x64emu_t* emu, pthread_t thread_id, pthread_attr_t* attr);
int my_pthread_getattr_default_np(x64emu_t* emu, pthread_attr_t* attr);
int my_pthread_setattr_default_np(x64emu_t* emu, pthread_attr_t* attr);
int my_pthread_create(x64emu_t *emu, void* t, void* attr, void* start_routine, void* arg);
int my_pthread_once(x64emu_t* emu, int* once, void* cb);
int my___pthread_once(x64emu_t* emu, void* once, void* cb);
int my_pthread_key_create(x64emu_t* emu, pthread_key_t* key, void* dtor);
int my___pthread_key_create(x64emu_t* emu, pthread_key_t* key, void* dtor);
int my_pthread_key_delete(x64emu_t* emu, pthread_key_t key);
int my_pthread_barrierattr_destroy(x64emu_t* emu, my_barrierattr_t* b);
int my_pthread_barrierattr_getpshared(x64emu_t* emu, my_barrierattr_t* b, void* p);
int my_pthread_barrierattr_init(x64emu_t* emu, my_barrierattr_t* b);
int my_pthread_barrierattr_setpshared(x64emu_t* emu, my_barrierattr_t* b, int p);
int my_pthread_cond_timedwait(x64emu_t* emu, pthread_cond_t* cond, void* mutex, void* abstime);
int my_pthread_cond_wait(x64emu_t* emu, pthread_cond_t* cond, void* mutex);
int my_pthread_cond_clockwait(x64emu_t *emu, pthread_cond_t* cond, void* mutex, clockid_t __clock_id, const struct timespec* __abstime);
int my_pthread_getaffinity_np(x64emu_t* emu, pthread_t thread, size_t cpusetsize, void* cpuset);
int my_pthread_setaffinity_np(x64emu_t* emu, pthread_t thread, size_t cpusetsize, void* cpuset);
int my_pthread_kill(x64emu_t* emu, void* thread, int sig);
int my_pthread_kill_old(x64emu_t* emu, void* thread, int sig);
int my_pthread_mutexattr_destroy(x64emu_t* emu, my_mutexattr_t *attr);
int my___pthread_mutexattr_destroy(x64emu_t* emu, my_mutexattr_t *attr);
int my_pthread_mutexattr_getkind_np(x64emu_t* emu, my_mutexattr_t *attr, void* p);
int my_pthread_mutexattr_getprotocol(x64emu_t* emu, my_mutexattr_t *attr, void* p);
int my_pthread_mutexattr_gettype(x64emu_t* emu, my_mutexattr_t *attr, void* p);
int my_pthread_mutexattr_getrobust(x64emu_t* emu, my_mutexattr_t *attr, void* p);
int my_pthread_mutexattr_init(x64emu_t* emu, my_mutexattr_t *attr);
int my___pthread_mutexattr_init(x64emu_t* emu, my_mutexattr_t *attr);
int my_pthread_mutexattr_setkind_np(x64emu_t* emu, my_mutexattr_t *attr, int k);
int my_pthread_mutexattr_setprotocol(x64emu_t* emu, my_mutexattr_t *attr, int p);
int my_pthread_mutexattr_setpshared(x64emu_t* emu, my_mutexattr_t *attr, int p);
int my_pthread_mutexattr_settype(x64emu_t* emu, my_mutexattr_t *attr, int t);
int my___pthread_mutexattr_settype(x64emu_t* emu, my_mutexattr_t *attr, int t);
int my_pthread_mutexattr_setrobust(x64emu_t* emu, my_mutexattr_t *attr, int t);
int my_pthread_mutex_init(pthread_mutex_t *m, my_mutexattr_t *att);
int my___pthread_mutex_init(pthread_mutex_t *m, my_mutexattr_t *att);
int my_pthread_condattr_destroy(x64emu_t* emu, my_condattr_t* c);
int my_pthread_condattr_getclock(x64emu_t* emu, my_condattr_t* c, void* cl);
int my_pthread_condattr_getpshared(x64emu_t* emu, my_condattr_t* c, void* p);
int my_pthread_condattr_init(x64emu_t* emu, my_condattr_t* c);
int my_pthread_condattr_setclock(x64emu_t* emu, my_condattr_t* c, int cl);
int my_pthread_condattr_setpshared(x64emu_t* emu, my_condattr_t* c, int p);
int my_pthread_cond_init(x64emu_t* emu, pthread_cond_t *pc, my_condattr_t* c);
int my_pthread_cond_destroy(x64emu_t* emu, pthread_cond_t *pc);
int my_pthread_cond_broadcast(x64emu_t* emu, pthread_cond_t *pc);
int my_pthread_cond_signal(x64emu_t* emu, pthread_cond_t* cond);
int my_pthread_barrierattr_destroy(x64emu_t* emu, my_barrierattr_t* b);
int my_pthread_barrierattr_getpshared(x64emu_t* emu, my_barrierattr_t* b, void* p);
int my_pthread_barrierattr_init(x64emu_t* emu, my_barrierattr_t* b);
int my_pthread_barrierattr_setpshared(x64emu_t* emu, my_barrierattr_t* b, int p);
int my_pthread_barrier_init(x64emu_t* emu, pthread_barrier_t* bar, my_barrierattr_t* b, uint32_t count);
void my___pthread_register_cancel(x64emu_t* emu, x64_unwind_buff_t* buff);
void my___pthread_unregister_cancel(x64emu_t* emu, x64_unwind_buff_t* buff);
void my___pthread_unwind_next(x64emu_t* emu, x64_unwind_buff_t* buff);
void my__pthread_cleanup_push_defer(x64emu_t* emu, void* buffer, void* routine, void* arg);
void my__pthread_cleanup_push(x64emu_t* emu, void* buffer, void* routine, void* arg);
void my__pthread_cleanup_pop_restore(x64emu_t* emu, void* buffer, int exec);
void my__pthread_cleanup_pop(x64emu_t* emu, void* buffer, int exec);
int my_pthread_cond_broadcast_old(x64emu_t* emu, pthread_cond_old_t* cond);
int my_pthread_cond_destroy_old(x64emu_t* emu, pthread_cond_old_t* cond);
int my_pthread_cond_init_old(x64emu_t* emu, pthread_cond_old_t* cond, void* attr);
int my_pthread_cond_signal_old(x64emu_t* emu, pthread_cond_old_t* cond);
int my_pthread_cond_timedwait_old(x64emu_t* emu, pthread_cond_old_t* cond, void* mutex, void* abstime);
int my_pthread_cond_wait_old(x64emu_t* emu, pthread_cond_old_t* cond, void* mutex);
int my_pthread_getaffinity_np_old(x64emu_t* emu, pthread_t thread, void* cpuset);
int my_my_pthread_setaffinity_np_old(x64emu_t* emu, pthread_t thread, void* cpuset);


extern int __pthread_mutexattr_destroy(pthread_mutexattr_t *attr);
extern int __pthread_mutexattr_init(pthread_mutexattr_t *attr);
extern int __pthread_mutexattr_settype(pthread_mutexattr_t *attr, int t);
extern int __pthread_mutex_init(pthread_mutex_t *m, pthread_mutexattr_t *att);
extern int pthread_mutexattr_getkind_np(pthread_mutexattr_t *attr, void* p);
extern int pthread_mutexattr_setkind_np(pthread_mutexattr_t *attr, int k);