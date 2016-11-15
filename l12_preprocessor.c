#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int main(int args,char * argv[]){
    void * memory = malloc(400);
    assert(memory!=NULL);
    printf("Yay!\n");
    free(memory) ;
    return 0 ;
}