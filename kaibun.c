#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//文字列の反転
char* reverse(char* src){

    size_t srcSize=strlen(src);
    char* reversedSrc=malloc(sizeof(char*)*(srcSize+16));
    for(int i=0;i<srcSize;i++){
        reversedSrc[i]=src[(srcSize-1)-i];
    }
    return reversedSrc;
}

int main(int argc,char** argv){

    char* value=argv[1];
    char* reversedArgv=reverse(value);

    printf("%s\n",reversedArgv);
    free(reversedArgv);
    return 0;
}