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

    printf("%d", s);
}

int main()
{
    int chon;
    printf("Câu 1: Liệt kê tất cả các “ước số” của số nguyên dương n");
    printf("Câu 2: Tính tổng tất cả các “ ước số” của số nguyên dương n");
    printf("Câu 3: Tính tích tất cả các “ước số” của số nguyên dương n");
    printf("Câu 4: Đếm số lượng “ước số” của số nguyên dương n");
    printf("Câu 5: Liệt kê tất cả các “ước số lẻ” của số nguyên dương n");
    printf("Câu 6: Tính tổng tất cả các “ước số chẵn” của số nguyên dương n");
    printf("Câu 7: Tính tích tất cả các “ước số lẻ” của số nguyên dương n");
    printf("Câu 8: Đếm số lượng “ước số chẵn” của số nguyên dương n");
    printf("Câu 9: Cho số nguyên dương n. Tính tổng các ước số nhỏ hơn chính nó");
    printf("Câu 10: Tìm ước số lẻ lớn nhất của số nguyên dương n. Ví dụ n = 100 ước lẻ lớn nhất là 25");
    printf("Chọn câu: ");
    scanf("%d", &chon);

    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    return 0;
}