#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <unistd.h>
#include <string.h>

#include "mm.h"
#include "memlib.h"

/* Single word (4 Bytes) or double word (8 Bytes) alignment */
#define ALIGNMENT 8

/* 
 * mm_init - initialize the malloc package.
 */
int mm_init(void)
{
    return 0;
}

/* 
 * mm_malloc - Allocate a block by incrementing the brk pointer.
 *     Always allocate a block whose size is a multiple of the alignment.
 */
void *mm_malloc(size_t size){
    int newsize = (size + (ALIGNMENT-1)) & ~0x7;
    void *p = mem_sbrk(newsize);
    if (p == (void *)-1){
	return NULL;
    }else{
        return (void *) p;
    }
}

/*
 * mm_free - Freeing a block does nothing.
 */
void mm_free(void *ptr){

}














