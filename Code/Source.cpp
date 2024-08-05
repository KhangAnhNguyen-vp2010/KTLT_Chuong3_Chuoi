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
	printf("Chuoi vua nhap la:%s", a);
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

void xoaPhanTu(char a[], int vitri)
{
	for (int i = vitri; i < strlen(a); i++)
	{
		a[i]=a[i+1];
	}
}

void xoa_KhoangTrangThua(char a[])
{
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i]==' ')
		{
			while (a[i+1]==' ')
			{
				xoaPhanTu(a,i);
			}
		}
	}
}
int main()
{
	char a[MAXSIZE];
	nhap_Chuoi(a);
	xuat_Chuoi(a);
	printf("\n---------------------------------------\n");
	demKhoangTrang(a);
	printf("\n---------------------------------------\n");
	xoa_KhoangTrangThua(a);
	xuat_Chuoi(a);
	getch();
	return 0;
}