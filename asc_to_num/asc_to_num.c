#include <stdio.h>

unsigned int asc_to_num(unsigned char * asc, unsigned char length);

int main(void)
{
    unsigned char asc[] = "1238884";
    printf("asc = %s\n", asc);
    printf("num = %u\n", asc_to_num(asc, 7));
    return 0;
}

unsigned int asc_to_num(unsigned char * asc, unsigned char length)
{
    int i = 0;
    unsigned int num = 0;

    for(i=0; i<length; i++)
    {
        num *= 10;
	num += (asc[i] - 48);
    }

    return num;
}
