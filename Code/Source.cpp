#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAXSIZE 100
void nhap_Chuoi(char a[])
{
	printf("Nhap chuoi:");
	gets(a);
}

void xuat_Chuoi(char a[])
{
	printf("Chuoi vua nhap la: %s", a);
}

void demKhoangTrang(char a[])
{
	int dem=0;
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i]==' ')
		{
			dem++;
		}
	}

	printf("So luong khoang trang trong chuoi la: %d", dem);
}
int main()
{
	char a[MAXSIZE];
	nhap_Chuoi(a);
	xuat_Chuoi(a);
	demKhoangTrang(a);
	getch();
	return 0;
}