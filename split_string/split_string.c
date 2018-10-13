#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char test_string[] = "1*100.0|30*50.0|100*399.0|";
    char * p;
    
    //p = (char *)malloc(10);
    //memset(p, 0, 10);

    printf("test_string = %s\n", test_string);
    p = strtok(test_string, "|");
    printf("p = %s\n", p);

    while(p != NULL)
    {
        printf("p = %s\n", p);
	p = strtok(NULL, "|");
    }
    return 0;
}
