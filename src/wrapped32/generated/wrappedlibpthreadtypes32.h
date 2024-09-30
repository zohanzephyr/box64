/*********************************************************************
 * File automatically generated by rebuild_wrappers_32.py (v0.0.2.2) *
 *********************************************************************/
#ifndef __wrappedlibpthreadTYPES32_H_
#define __wrappedlibpthreadTYPES32_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFv_t)(void);
typedef void (*vFp_t)(void*);
typedef int32_t (*iFp_t)(void*);
typedef int32_t (*iFh_t)(uintptr_t);
typedef void (*vFpi_t)(void*, int32_t);
typedef int32_t (*iFpi_t)(void*, int32_t);
typedef int32_t (*iFpL_t)(void*, uintptr_t);
typedef int32_t (*iFpp_t)(void*, void*);
typedef int32_t (*iFhi_t)(uintptr_t, int32_t);
typedef int32_t (*iFhp_t)(uintptr_t, void*);
typedef int32_t (*iFprLL__t)(void*, struct_LL_t*);
typedef void (*vFppp_t)(void*, void*, void*);
typedef int32_t (*iFpiu_t)(void*, int32_t, uint32_t);
typedef int32_t (*iFpup_t)(void*, uint32_t, void*);
typedef int32_t (*iFppL_t)(void*, void*, uintptr_t);
typedef int32_t (*iFppp_t)(void*, void*, void*);
typedef int32_t (*iFhup_t)(uintptr_t, uint32_t, void*);
typedef void* (*pFpOM_t)(void*, int32_t, ...);
typedef int32_t (*iFpprLL__t)(void*, void*, struct_LL_t*);
typedef int32_t (*iFBh_ppp_t)(struct_h_t*, void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(__pthread_initialize, vFv_t) \
	GO(__pthread_register_cancel, vFp_t) \
	GO(__pthread_unregister_cancel, vFp_t) \
	GO(__pthread_unwind_next, vFp_t) \
	GO(__pthread_mutex_destroy, iFp_t) \
	GO(__pthread_mutex_lock, iFp_t) \
	GO(__pthread_mutex_trylock, iFp_t) \
	GO(__pthread_mutex_unlock, iFp_t) \
	GO(__pthread_mutexattr_init, iFp_t) \
	GO(pthread_attr_destroy, iFp_t) \
	GO(pthread_attr_init, iFp_t) \
	GO(pthread_cond_broadcast, iFp_t) \
	GO(pthread_cond_broadcast@GLIBC_2.0, iFp_t) \
	GO(pthread_cond_destroy, iFp_t) \
	GO(pthread_cond_destroy@GLIBC_2.0, iFp_t) \
	GO(pthread_cond_signal, iFp_t) \
	GO(pthread_cond_signal@GLIBC_2.0, iFp_t) \
	GO(pthread_mutex_destroy, iFp_t) \
	GO(pthread_mutex_lock, iFp_t) \
	GO(pthread_mutex_trylock, iFp_t) \
	GO(pthread_mutex_unlock, iFp_t) \
	GO(pthread_mutexattr_init, iFp_t) \
	GO(pthread_rwlock_destroy, iFp_t) \
	GO(pthread_rwlock_unlock, iFp_t) \
	GO(pthread_rwlock_wrlock, iFp_t) \
	GO(sem_close, iFp_t) \
	GO(sem_destroy, iFp_t) \
	GO(sem_post, iFp_t) \
	GO(sem_trywait, iFp_t) \
	GO(sem_wait, iFp_t) \
	GO(pthread_detach, iFh_t) \
	GO(_pthread_cleanup_pop, vFpi_t) \
	GO(_pthread_cleanup_pop_restore, vFpi_t) \
	GO(pthread_attr_setdetachstate, iFpi_t) \
	GO(pthread_attr_setinheritsched, iFpi_t) \
	GO(pthread_attr_setschedpolicy, iFpi_t) \
	GO(pthread_attr_setscope, iFpi_t) \
	GO(pthread_mutexattr_setkind_np, iFpi_t) \
	GO(pthread_attr_setguardsize, iFpL_t) \
	GO(pthread_attr_setstacksize, iFpL_t) \
	GO(__pthread_key_create, iFpp_t) \
	GO(__pthread_mutex_init, iFpp_t) \
	GO(__pthread_once, iFpp_t) \
	GO(__pthread_rwlock_init, iFpp_t) \
	GO(pthread_attr_getdetachstate, iFpp_t) \
	GO(pthread_attr_getguardsize, iFpp_t) \
	GO(pthread_attr_getinheritsched, iFpp_t) \
	GO(pthread_attr_getschedparam, iFpp_t) \
	GO(pthread_attr_getschedpolicy, iFpp_t) \
	GO(pthread_attr_getscope, iFpp_t) \
	GO(pthread_attr_getstackaddr, iFpp_t) \
	GO(pthread_attr_getstacksize, iFpp_t) \
	GO(pthread_attr_setschedparam, iFpp_t) \
	GO(pthread_attr_setstackaddr, iFpp_t) \
	GO(pthread_cond_init, iFpp_t) \
	GO(pthread_cond_init@GLIBC_2.0, iFpp_t) \
	GO(pthread_cond_wait, iFpp_t) \
	GO(pthread_cond_wait@GLIBC_2.0, iFpp_t) \
	GO(pthread_key_create, iFpp_t) \
	GO(pthread_mutex_init, iFpp_t) \
	GO(pthread_mutex_timedlock, iFpp_t) \
	GO(pthread_once, iFpp_t) \
	GO(pthread_rwlock_init, iFpp_t) \
	GO(sem_getvalue, iFpp_t) \
	GO(pthread_kill@GLIBC_2.0, iFhi_t) \
	GO(pthread_getattr_np, iFhp_t) \
	GO(sem_timedwait, iFprLL__t) \
	GO(_pthread_cleanup_push, vFppp_t) \
	GO(_pthread_cleanup_push_defer, vFppp_t) \
	GO(sem_init, iFpiu_t) \
	GO(pthread_attr_setaffinity_np, iFpup_t) \
	GO(pthread_attr_setstack, iFppL_t) \
	GO(__pthread_atfork, iFppp_t) \
	GO(pthread_atfork, iFppp_t) \
	GO(pthread_attr_getstack, iFppp_t) \
	GO(pthread_getaffinity_np, iFhup_t) \
	GO(pthread_setaffinity_np, iFhup_t) \
	GO(sem_open, pFpOM_t) \
	GO(pthread_cond_timedwait, iFpprLL__t) \
	GO(pthread_cond_timedwait@GLIBC_2.0, iFpprLL__t) \
	GO(pthread_create, iFBh_ppp_t)

#endif // __wrappedlibpthreadTYPES32_H_
