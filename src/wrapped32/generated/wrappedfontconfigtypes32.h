/*********************************************************************
 * File automatically generated by rebuild_wrappers_32.py (v0.0.2.2) *
 *********************************************************************/
#ifndef __wrappedfontconfigTYPES32_H_
#define __wrappedfontconfigTYPES32_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef int32_t (*iFppiUi_t)(void*, void*, int32_t, uint64_t, int32_t);

#define SUPER() ADDED_FUNCTIONS() \
	GO(FcPatternAdd, iFppiUi_t)

#endif // __wrappedfontconfigTYPES32_H_
