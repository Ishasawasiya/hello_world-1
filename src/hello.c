#include <stdio.h>
#include "../include/hello.h"

int sgs_clib_convert_to_upper(char *message){

    for(;*message != '\0';){

        if((*message >= 97) && (*message<= 122)){
            *message = *message - 32;
        }
        message++;

    }
    return 0;
}