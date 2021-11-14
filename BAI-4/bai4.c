#include <stdio.h>

void s1(int n)
{
    int S = 0, i = 1, a = 1;

    while (i <= n)
    {
        a = a * i;
        S = S + a;
        i = i + 1;
    }

    printf("S(%d) = %d", n, S);
}

void s2(int x, int n)
{
    int S = 0, i = 1, M = 1;

    while (i <= n)
    {
        M = M * x;
        S = S + M;
    }

    printf("S(%d, %d) = %d", x, n, S);
}

void s3(int x, int n)
{
    int S = 0, i = 1;

    while (i <= n)
    {
        S = S + x ^ (2 * i);
    }

    printf("S(%d, %d) = %d", x, n, S);
}

void s4(int x, int n)
{
    int S, i = 0;

    while (i <= n)
    {
        S = S + x ^ (2 * i + 1);
    }

    printf("S(%d, %d) = %d", x, n, S);
}

void s5(int n)
{
    int i = 1, a = 0;
    float S = 0;

    while (i <= n)
    {
        a = a + i;
        S = S + 1.0 / a;
        i = i + 1;
    }

    printf("S(%d) = %.2f", n, S);
}

void s6(int x, int n)
{
    int i = 1, a = 0;
    double S = 0, M = 1;
    while (i <= n)
    {
        a = a + i;
        M = M * x;
        S = S + M / a;
        i = i + 1;
    }

    printf("S(%d, %d) = %d", x, n, S);
}

int main()
{
    int b, n, a;
    do
    {
        printf("-----PLESASE CHOOSE ONE OF FOLLOWING METHODS-----\n");
        printf("1. S(n) = 1 + 1.2 + 1.2.3 + ... + 1.2.3....N\n");
        printf("2. S(x,n) = x + x^2 + x^3 + ... + x^n\n");
        printf("3. S(x,n) = x^2 + x^4 + ... + x^2n\n");
        printf("4. S(x,n) = x + x^3 + x^5 + ... + x^2n + 1\n");
        printf("5. S(n) = 1 + 1/1 + 2 + 1/ 1 + 2 + 3 + ... + 1/ 1 + 2 + 3 + ... + N\n");
        printf("6. S(x,n) = x + x^2/1 + 2 + x^3/1 + 2 + 3 + ... + x^n/1 + 2 + 3 + ... + N\n");
        printf("7. S(x,n) = x + x^2/2! + x^3/3! + ... + x^n/N!\n");
        printf("8. S(x,n) = 1 + x^2/2! + x^4/4! + ... + x^2n/(2n)!\n");
        printf("9. S(x,n) = 1 + x + x^3/3! + x^5/5! + ... + x^(2n+1)/(2n+1)!\n");

        printf("\nYOU CHOOSE: ");
        scanf("%d", &a);

        printf("\nENTER n: ");
        scanf("%d", &n);

        int x;

        switch (a)
        {
        case 1:
            s1(n);
            break;
        case 2:
            printf("Enter x: ");
            scanf("%d", &x);
            s2(x,n);
            break;
        case 3:
            printf("Enter x: ");
            scanf("%d", &x);
            s3(x,n);
            break;
        case 4:
            printf("Enter x: ");
            scanf("%d", &x);
            s4(x,n);
            break;
        case 5:
            s5(n);
            break;
        case 6:
            printf("Enter x: ");
            scanf("%d", &x);
            s6(x,n);
            break;
        case 7:

            break;
        case 8:

            break;
        case 9:

            break;
        default:
            break;
        }
        printf("\n");
        printf("\nDO YOU WANT TO TRY AGAINT???\n");
        printf("1. YES\n");
        printf("0. NO\n");
        printf("ENTER:");
        scanf("%d", &b);
    } while (b == 1);
    printf("\nHAVE A NICE DAY!!");
    printf("\n \n");
}