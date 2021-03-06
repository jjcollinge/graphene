/* -*- mode:c; c-file-style:"k&r"; c-basic-offset: 4; tab-width:4; indent-tabs-mode:nil; mode:auto-fill; fill-column:78; -*- */
/* vim: set ts=4 sw=4 et tw=78 fo=cqt wm=0: */

#include <stdio.h>

static void * ptr = NULL;

int main(int argc, const char ** argv, const char ** envp)
{
    printf("User program started\n");
    printf("Local Address in Executable: %p\n", &ptr);

    for (int i = 0 ; i < argc ; i++)
        printf("argv[%d] = %s\n", i, argv[i]);

    return 0;
}
