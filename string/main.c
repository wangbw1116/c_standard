#include <stdio.h>
#include <string.h>


int main()
{
    printf("\n********** 1.memchr **********\n");
    {
        char *buff = "abcdefghijklmnopqrstuvwxyz0123456789";
        char *p = (char *)memchr(buff, 48, 36);//'0'
        printf("memchr ret: %s\n", p);
    }

    printf("\n********** 2.memcmp **********\n");
    {
        char *str1 = "hello123";
        char *str2 = "hello456";
        int ret = memcmp(str1, str2, 8);
        printf("memcmp ret: %d\n", ret);
    }

    printf("\n********** 3.memcpy **********\n");
    {
        char des[100] = {0};
        char *src = "hello, world";
        memcpy(des, src, 10);
        printf("des: %s\n", des);
    }
    

    return 0;
}