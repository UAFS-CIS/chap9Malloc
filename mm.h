/* $begin mmheader */
/* $begin mallocinterface */
extern int mm_init(void);
extern void *mm_malloc (size_t size);
extern void mm_free (void *ptr);
/* $end mallocinterface */

extern void *mm_realloc(void *ptr, size_t size);
extern void *mm_calloc (size_t nmemb, size_t size);
extern void mm_checkheap(int verbose);
/* $end mmheader */

typedef struct {
    char *teamname; /* ID1+ID2 or ID1 */
    char *name1;    /* full name of first member */
    char *id1;      /* login ID of first member */
    char *name2;    /* full name of second member (if any) */
    char *id2;      /* login ID of second member */
} team_t;

extern team_t team;
