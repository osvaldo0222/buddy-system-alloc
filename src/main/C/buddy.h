#ifndef BUDDY_H

#define BUDDY_H
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <stdbool.h>

struct buddy {
    size_t size;
    size_t longest[1];
};

struct buddy *buddy_new(unsigned num_of_fragments);
int buddy_alloc(struct buddy *self, size_t size, int* index_mod);
void buddy_free(struct buddy *self, int offset, int* index_mod);
void buddy_dump(struct buddy *self);
int buddy_size(struct buddy *self, int offset);

#endif /* end of include guard: BUDDY_H */
