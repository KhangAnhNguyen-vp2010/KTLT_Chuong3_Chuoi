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

void xoa_KhoangTrangDau(char a[])
{
	xoaPhanTu(a,0);
}
void xoa_KhoangTrangCuoi(char a[])
{
	int n = strlen(a)-1;
	xoaPhanTu(a,n);
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

	if (a[0]==' ')
	{
		xoa_KhoangTrangDau(a);
	}
	int n = strlen(a)-1;
	if (a[n]==' ')
	{
		xoa_KhoangTrangCuoi(a);
	}
}

void chuyenDoi_Chuoi(char a[])
{
	// KI TU DAU
	a[0]-=32;

	for (int i = 1; i < strlen(a); i++)
	{
		if (a[i-1]==' ')
		{
			a[i]-=32;
		}
		else if (a[i] >= 65 && a[i] <= 90)
		{
			a[i]+=32;
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
	printf("\n---------------------------------------\n");
	chuyenDoi_Chuoi(a);
	xuat_Chuoi(a);
	getch();
	return 0;
}