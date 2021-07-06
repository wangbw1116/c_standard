#include <stdio.h>
#include <errno.h>

int main()
{
    printf("********** 1.remove **********\n");
    {
        int ret = remove("./tmp");
        printf("remove ret: %d\n", ret);
        if(ret < 0){
            printf("errno: %d\n", errno);
        }
    }
    
    return 0;
}