//C Program which gives Reverse of Entered Number

#include <stdio.h>
int reverse_num(int n)
{
    int m;
    int i = 0;
    while(n > 0)
    {
        m = n%10;
        n = n/10;
        i = i*10 + m;
    }
    printf("\nThe reversed number is: %d", i);
    return 0;
}
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("You entered: %d", n);
    reverse_num(n);
}
