#include <stdio.h>

//Hàm để nhập số phần tử
void nhap(int m[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("nhap vao so thu %d:", i + 1);
        scanf("%d", &m[i]);
    }
}

//Ước chung lớn nhất của 2 phần tử
int UC(int x, int y)
{
    if (x > y)
    {
        for (int i = x; i >= 1; i--)
        {
            if (x % i == 0 && y % i == 0)
            {
                return i;
            }
        }
    }
    else
    {
        for (int i = y; i >= 1; i--)
        {
            if (x % i == 0 && y % i == 0)
            {
                return i;
            }
        }
    }
}

//Ước chung lớn nhất của mảng số
int UCLN(int m[], int n)
{
    int x = m[0];
    for (int i = 1; i < n; i++)
    {
        x = UC(x, m[i]);
    }
    return x;
}

//Bội chung nhỏ nhất của 2 phần tử
int BC( int x, int y)
{
    if (x<y)
    {
        for (int i = x; i <= x*y; i++)
        {
            if (i%x==0 && i%y==0)
            {
                return i;
            }
        }
    }
    else
    {
        for (int i = y; i <= x*y; i++)
        {
            if (i%x==0 && i%y==0)
            {
                return i;
            }
        }
    }
    return y;
} 

//Bội chung nhỏ nhất của mảng số
int BCNN(int m[],int n)
{
    int x = m[0];
    for (int i = 1; i < n; i++)
    {
        x = BC(x, m[i]);
    }
    return x;
}

int main()
{
    // Cú pháp sau phẩy luôn là 1 khoản trắng. Nhớ để ý cách trình bày code, để sau này đọc lại dể hiểu code hơn.
    // Sử dụng Alt + Ctrl + F để format code cho đẹp code. Nếu chưa có thì cài Extention https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools
    // Chổ khai báo này khi khai báo cùng kiểu dữ liệu có thể khai báo như thế này nha
    // int m[100], n;
    int m[100];
    int n;
    printf("Nhap vao so phan tu:");
    scanf("%d",&n);
    nhap(m,n);

    printf("Uoc chung lon nhat cua %d phan tu tren la %d\n",n ,UCLN(m,n));

    printf("Boi chung nho nhat cua %d phan tu tren la %d\n",n, BCNN(m,n));

    return 0;
}