#include<stdio.h>

void Fibonacci();

void main()
{
    Fibonacci();
    
}

void Fibonacci() 
{
    int n, i,a=0,b=1,sum;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++) 
    {
        if (i <= 1) 
        {
            sum = i;
        } 
        else
        {
            sum = a+b ;
            a= b;
            b= sum;
        }
        printf("%d ", sum);
    }
}