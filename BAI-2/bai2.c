#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Moi nhap 3 canh cua tam giac:\n");
    printf(" a= ");
    scanf("%d", &a);
    printf(" b= ");
    scanf("%d", &b);
    printf(" c= ");
    scanf("%d", &c);
    while (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Moi nhap lai!!!\n");
        printf(" a= ");
        scanf("%d", &a);
        printf(" b= ");
        scanf("%d", &b);
        printf(" c= ");
        scanf("%d", &c);
    }
    if ((a*a + b*b) == c*c || (a*a + c*c) == b*b || (b*b + c*c) == a*a)
    {
        printf("Day la tam giac vuong!");
    }
    else if (a == b && a == c)
    {
        printf("Day la tam giac deu!");
    }
    else if (a == b || a == c || b == c)
    {
        printf("Day la tam giac can!");
    }
    else if ((a*a + b*b) < c*c || (a*a + c*c) < b*b || (b*b + c*c) < a*a)
    {
        printf("Day la tam giac tu!");
    }
    else
    {
        printf("Day la tam giac nhon!");
    }
}