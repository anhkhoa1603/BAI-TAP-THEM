#include <stdio.h>

void cau1(int n)
{
    for(int i = 0; i < n/2; i++)
    {
        if(n % (i + 1) == 0)
        {
            printf("%d ", i + 1);
        }
    }
}

void cau2(int n)
{
    int s = 0;
    for(int i = 0; i < n/2; i++)
    {
        if(n % (i + 1) == 0)
        {
            s += (i + 1);
        }
    }

    printf("S = %d", s);
}

void cau3(int n)
{
    int s = 1;
    for(int i = 0; i < n/2; i++)
    {
        if(n % (i + 1) == 0)
        {
            s *= (i + 1);
        }
    }

    printf("S = %d", s);
}

void cau4(int n)
{
    int count = 0;
    for(int i = 0; i < n/2; i++)
    {
        if(n % (i + 1) == 0)
        {
            count++;
        }
    }

    printf("Count = %d", count);
}

void cau5(int n)
{
    for(int i = 0; i < n/2; i++)
    {
        if(n % (i + 1) == 0)
        {
            if((i + 1) % 2 == 1)
            {
                printf("%d ", i + 1);
            }
        }
    }
}

void cau6(int n)
{
    int s = 0;
    for(int i = 0; i < n/2; i++)
    {
        if(n % (i + 1) == 0)
        {
            if((i + 1) % 2 == 0)
            {
                s += (i + 1);
            }
        }
    }
    printf("S = %d", s);
}

void cau7(int n)
{
    int s = 1;
    for(int i = 0; i < n/2; i++)
    {
        if(n % (i + 1) == 0)
        {
            if((i + 1) % 2 == 1)
            {
                s *= (i + 1);
            }
        }
    }
    printf("S = %d", s);
}

void cau8(int n)
{
    int count = 0;
    for(int i = 0; i < n/2; i++)
    {
        if(n % (i + 1) == 0)
        {
            if((i + 1) % 2 == 0)
            {
                count++;
            }
        }
    }
    printf("%d", count);
}

void cau9(int n)
{
    int s = 0;
    for(int i = 0; i < n; i++)
    {
        if(n % i == 0)
        {
            s += i;
            printf("%d", i);
        }
    }
    printf("%d", s);
}

void cau10(int n)
{
    int max;
    for(int i = 0; i < n; i++)
    {
        if(n % i ==0 && i % 2 == 1)
        {
            max = i;
        }   
    }
    printf("%d", max);
}

int main()
{
    int chon;
    printf("Câu 1: Liệt kê tất cả các “ước số” của số nguyên dương n\n");
    printf("Câu 2: Tính tổng tất cả các “ ước số” của số nguyên dương n\n");
    printf("Câu 3: Tính tích tất cả các “ước số” của số nguyên dương n\n");
    printf("Câu 4: Đếm số lượng “ước số” của số nguyên dương n\n");
    printf("Câu 5: Liệt kê tất cả các “ước số lẻ” của số nguyên dương n\n");
    printf("Câu 6: Tính tổng tất cả các “ước số chẵn” của số nguyên dương n\n");
    printf("Câu 7: Tính tích tất cả các “ước số lẻ” của số nguyên dương n\n");
    printf("Câu 8: Đếm số lượng “ước số chẵn” của số nguyên dương n\n");
    printf("Câu 9: Cho số nguyên dương n. Tính tổng các ước số nhỏ hơn chính nó\n");
    printf("Câu 10: Tìm ước số lẻ lớn nhất của số nguyên dương n. Ví dụ n = 100 ước lẻ lớn nhất là 25\n");
    printf("Chọn câu: ");
    scanf("%d", &chon);

    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    switch(chon)
    {
        case 1:
            cau1(n);
            break;
        case 2:
            cau2(n);
            break;
        case 3:
            cau3(n);
            break;
        case 4:
            cau4(n);
            break;
        case 5:
            cau5(n);
            break;
        case 6:
            cau6(n);
            break;
        case 7:
            cau7(n);
            break;
        case 8:
            cau8(n);
            break;
        case 9:
            cau9(n);
            break;
        case 10:
            cau10(n);
            break;
    }

    return 0;
}