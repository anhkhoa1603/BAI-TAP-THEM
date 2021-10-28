#include <stdio.h>

void s1(int n)
{
    int S,i;
    for (i = 1; i <= n; i++)
    {
        S = S + i;
    }
    printf("S(%d) = %d", n, S);
}

void s2(int n)
{
    int S = 0, i;
    for (i = 1; i <= n; i++)
    {
        S = S + i * i;
    }

    printf("S(%d) = %d", n, S);
}

void s3(int n)
{
    double S = 0, i;
    for (i = 1; i <= n; i++)
    {
        S = S + (1 / i);
    }

    printf("S(%d) = %.2f", n, S);
}

void s4(int n)
{
    double S = 0, i;
    for (i = 1; i <= n; i++)
    {
        S = S + 1 / (2 * i);
    }

    printf("S(%d) = %.2f", n, S);
}

void s5(int n)
{
    double S = 0, i;
    for (i = 0; i < n; i++)
    {
        S = S + 1 / (2 * i + 1);
    }

    printf("S(%d) = %.2f", n, S);
}

void s6(int n)
{
    double S = 0, i;
    for (i = 1; i <= n; i++)
    {
        S = S + 1 / (i * (i + 1));
    }

    printf("S(%d) = %.2f", n, S);
}

void s7(int n)
{
    double S = 0,i;
    for (i = 1; i <= n; i++)
    {
        S = S + i / (i + 1);
    }

    printf("S(%d) = %.2f", n, S);
}

void s8(int n)
{
    double S = 0, i;
    for (i = 0; i < n; i++)
    {
        S = S + ((2 * i + 1) / (2 * i + 2));
    }

    printf("S(%d) = %.2f", n, S);
}

void s9(int n)
{
    int S = 1, i;
    for (i = 1; i <= n; i++)
    {
        S = S * i;
    }

    printf("S(%d) = %d", n, S);
}

void s10(int x, int n)
{
    int S = 1, i;
    for (i = 1; i <= n; i++)
    {
        S = S * x;
    }

    printf("S(%d,%d) = %d", x, n, S);
}

int main()
{
    int b, n, a;
    do
    {
        printf("-----PLESASE CHOOSE ONE OF FOLLOWING METHODS-----\n");
        printf("1. S(n) = 1 + 2 + 3 + ... + n\n");
        printf("2. S(n) = 1^2 + 2^2 + ... + n^2\n");
        printf("3. S(n) = 1 + 1/2 + 1/3 + ... + 1/n\n");
        printf("4. S(n) = 1/2 + 1/4 + ... + 1/2n\n");
        printf("5. S(n) = 1 + 1/3 + 1/5 + ... + 1/(2n + 1)\n");
        printf("6. S(n) = 1/1x2 + 1/2x3 + ... + 1/n x (n + 1)\n");
        printf("7. S(n) = 1/2 + 2/3 + 3/4 + ... + n / n + 1\n");
        printf("8. S(n) = 1/2 + 3/4 + 5/6 + ... + 2n + 1/ 2n + 2\n");
        printf("9. T(n) = 1 x 2 x 3 ... x N\n");
        printf("10. T(x, n) = x^n\n");

        printf("\nYOU CHOOSE: ");
        scanf("%d", &a);

        printf("\nENTER n: ");
        scanf("%d", &n);

        switch (a)
        {
        case 1:
            s1(n);
            break;
        case 2:
            s2(n);
            break;
        case 3:
            s3(n);
            break;
        case 4:
            s4(n);
            break;
        case 5:
            s5(n);
            break;
        case 6:
            s6(n);
            break;
        case 7:
            s7(n);
            break;
        case 8:
            s8(n);
            break;
        case 9:
            s9(n);
            break;
        case 10:
            printf("\nENTER x: ");
            int x;
            scanf("%d", &x);
            s10(x, n);
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