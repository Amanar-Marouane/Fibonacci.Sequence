#include<stdio.h>

int main(){

    int term_1 = 0, term_2 = 1;
    int fib = 0, length = 0;
  
    do
    {
        printf("Enter the sequence's length ==> ");
        scanf("%i",&length);
        if (length < 3)
        {
            printf("the sequence's length must be greater then 3!!!\n");
        }
    } while (length < 3);

    printf("the sequence has begin.\n");
    printf("%i\n%i\n",term_1,term_2);

    for (int i = 0; i < length; i++)
    {
        fib = term_1 + term_2;
        printf("%i\n",fib);
        term_1 = term_2;
        term_2 = fib;
    }
    printf("the sequence has ended.\n");
    return 0;
}