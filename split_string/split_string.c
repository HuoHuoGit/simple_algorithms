#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int number;
    float price;
} Number_price;

int main(void)
{
    char test_string[] = "1*100.0|30*50.0|100*399.0|";
    char *p;
    char number_price[10][10] = { 0 };
    int number_price_length = 0;
    int i = 0;
    Number_price *price;
    
    p = (char *)malloc(10);
    memset(p, 0, 10);

    printf("test_string = %s\n", test_string);
    p = strtok(test_string, "|");
    printf("p = %s\n", p);
    while(1)
    {
        memcpy(number_price[i], p, 10); 
	p = strtok(NULL, "|");
	i++;
	if(p == NULL) break;
        printf("p = %s\n", p);
    }
    number_price_length = i;

    for(i=0; i<number_price_length; i++)
    {
        printf("number_price[%d] = %s\n", i, number_price[i]);
    }

    price = (Number_price *)malloc(number_price_length*(sizeof(Number_price)));

    for(i=0; i<number_price_length; i++)
    {
        price[i]->number = ; 
	price[i]->price = ;
    }

    free(p);
    free(price);
    return 0;
}
