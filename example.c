#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

#include "tpool.h"

void sleeeeeep(void *arg)
{
    printf("hi\n");
    sleep(30);
    return;
}


int main(int argc, char *argv[])
{
    tpool_t *tpool = tpool_create(4);

    tpool_add_job(tpool, sleeeeeep, NULL);
    tpool_add_job(tpool, sleeeeeep, NULL);
    tpool_add_job(tpool, sleeeeeep, NULL);
    tpool_add_job(tpool, sleeeeeep, NULL);

    tpool_add_job(tpool, sleeeeeep, NULL);
    tpool_add_job(tpool, sleeeeeep, NULL);
    tpool_add_job(tpool, sleeeeeep, NULL);


    tpool_wait(tpool);
    tpool_destroy(tpool);


    return 0;
}
