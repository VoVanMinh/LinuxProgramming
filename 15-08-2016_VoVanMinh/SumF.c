#include<stdio.h>
//# include <conio.h>
int main()
{
    int n, i, f1=1, f2=1, f3, sum = 2;
    printf("Ban muon tinh tong bao nhieu so (n>1):"); 
    scanf("%d", &n);
    while(n<=1)
    {
        printf("Nhap lai (n>1): "); 
        scanf("%d", &n);
    }
    for (i = 3; i <=n; i++)
    {
        f3 = f1 + f2;
        sum += f3;
        f1 = f2;
        f2 = f3;            
    }   
    printf("Tong bang=%d\n", sum);
   // getch();
}
