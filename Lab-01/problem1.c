#include <stdio.h>

int main()
{
int a, i,fact = 1;
printf("Enter a number: ");
scanf("%d", &a);
for(i = 1; i <= a; i++)
fact = fact * i;
printf("The Factorial is  %d",fact);
return 0;
}


#include <stdio.h>
int main() {
    int a,b, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &a);

    b = a;

    while (b>0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }
    if (original == reverse)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");
    return 0;
}

#include <stdio.h>

int main()
{
    int n, first, last, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    while (n >= 10)
    {
        n = n / 10;
    }

    first = n;

    sum = first + last;

    printf("Sum of first and last digit = %d", sum);

    return 0;
}



