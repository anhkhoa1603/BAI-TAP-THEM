#include <stdio.h>
#include <math.h>

int s1(int n)
{
    int S = 0, i = 1, a = 1;

    while (i <= n)
    {
        a = a * i;
        S = S + a;
        i = i + 1;
    }

    return S;
}

int s2(int x, int n)
{
    int S = 0, m = 1;

    for (int i = 1; i <= n; i++)
    {
        m *= x;
        S = S + m;
    }

    return S;
}

int s3(int x, int n)
{
    int S = 0, i = 1, m = 1;

    while (i <= n)
    {
        m = m * x * x;
        S = S + m;
        i++;
    }

    return S;
}

int s4(int x, int n)
{
    int S = 0, i = 0, m = x;

    while (i <= n)
    {
        m = pow(x, (2 * i + 1));
        S = S + m;
        i++;
    }

    return S;
}

float s5(int n)
{
    int i = 1, a = 0;
    float S = 0;

    while (i <= n)
    {
        a = a + i;
        S = S + 1.0 / a;
        i = i + 1;
    }

    return S;
}

float s6(int x, int n)
{
    float S = 0, T = 1;
    long M = 0;
    int i = 1;

    while(i <= n)
    {
        T = T * x;
        M = M + i;
        S = S + T / M;
        i++;
    }

    return S;
}

float s7(int x, int n)
{
    float S = 0, T = 1;
    long M = 1;
    int i = 1;

    while(i <= n)
    {
        T = T * x;
        M = M * i;
        S = S + T / M;
        i++;
    }

    return S;
}

float s8(int x, int n)
{
    float S = 1, T = 1;
    long M = 1;
    int i = 1;

    while(i <= n)
    {
        T = T * x * x;
        M = M * (2 * i) * ((2 * i) - 1);
        S = S + T / M;
        i ++;
    }

    return S;
}

float s9(int x, int n)
{
    float S = 1 + x, T = x;
    long M = 1;
    int i = 1;

    while(i <= n)
    {
        T = T * x * x;
        M = M * (2 * i) * ((2 * i) + 1);
        S = S + T / M;
        i ++;
    }

    return S;
}

int main()
{
    int x, n, b, a;
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
        
        switch (a)
        {
        case 2:
        case 3:
        case 4:
        case 6:
        case 7:
        case 8:
        case 9:
            printf("\nEnter x: ");
            scanf("%d", &x);
            break;
        default:
            break;
        }

        printf("\nENTER n: ");
            scanf("%d", &n);

        switch (a)
        {
        case 1:
            printf("S(%d) = %d", n, s1(n));
            break;
        case 2:
            printf("S(%d, %d) = %d",x, n, s2(x,n));
            break;
        case 3:
            printf("S(%d, %d) = %d",x, n, s3(x,n));
            break;
        case 4:
            printf("S(%d, %d) = %d",x, n, s4(x,n));
            break;
        case 5:
            printf("S(%d) = %.5f", n, s5(n));
            break;
        case 6:
            printf("S(%d, %d) = %.5f",x, n, s6(x,n));
            break;
        case 7:
            printf("S(%d, %d) = %.5f",x, n, s7(x,n));
            break;
        case 8:
            printf("S(%d, %d) = %.5f",x, n, s8(x,n));
            break;
        case 9:
            printf("S(%d, %d) = %.5f",x, n, s9(x,n));
            break;
        default:
            break;
        }
        printf("\n");
        printf("\nDO YOU WANT TO TRY AGAINT???\n");
        printf("1. YES\n");
        printf("0. NO\n");
        printf("ENTER: ");
        scanf("%d", &b);
    } while (b == 1);
    printf("\nHAVE A NICE DAY!!");
    printf("\n \n");
}