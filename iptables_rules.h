#include <libiptc/libiptc.h>

int insert_rule (const char *table,
                 const char *chain, 
                 unsigned int src,
                 int inverted_src,
                 unsigned int dest,
                 int inverted_dst,
                 const char *target);

void flush_table (const char *table, const char *chain);