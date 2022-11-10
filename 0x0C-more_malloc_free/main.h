#ifndef MAIN_H
#define MAIN_H

/**
  * File: main.h
  * Desc: Contains all function prototype for task 0x0C-more_malloc_free
  * Auth: ADB
  */

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif
