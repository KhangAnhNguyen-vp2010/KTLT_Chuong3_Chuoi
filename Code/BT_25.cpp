#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void ThemTu(char* a, char* x, int& index) {
	printf("Nhap vi tri can them:");
	scanf("%d", &index);
	int a_len = strlen(a);
	int x_len = strlen(x);
	if (index< 0 || index >a_len) {
		printf("\nLoi! Khong the them vao vi tri nay!");
		return;
	}
	for (int i = a_len; i >= index; i--)
	{
		a[i + x_len] = a[i];
	}
	for (int i = 0; i < x_len; i++)
	{
		a[index + i] = x[i];
	}
	a[a_len + x_len] = '\0';
}
void XoaXuongDong(char a[]) {
	for (int i = 0; i <= strlen(a); i++)
	{
		if (a[i] == '\n') a[i] = '\0';
	}
}
void XoaTu(char* a, char* x) {
	char temp[100];
	char* p;
	int x_len = strlen(x);
	temp[0] = '\0';
	while ((p = strstr(a, x)) != NULL)
	{
		strncpy(temp, a, p - a);
		temp[p - a] = '\0';
		strcat(temp, p + x_len);
		strcpy(a, temp);
	}
}
int main() {
	char a[100], x[100], x1[100];
	int index;
	printf("Moi ban nhap vao chuoi:");
	fgets(a, sizeof(a), stdin);
	XoaXuongDong(a);
	printf("Chuoi ban vua nhap la:%s", a);
	printf("\nNhap chuoi can xoa:");
	fgets(x1, sizeof(x1), stdin);
	XoaXuongDong(x1);
	XoaTu(a, x1);
	printf("\nChuoi sau khi xoa:%s", a);
}