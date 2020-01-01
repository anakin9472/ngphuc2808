/*
Chèn phần tử trong mảng 1 chiều
2. Ngày viết: 20/12/2019
3. Ngày cập nhật: 20/12/2019
//Thao tác 25: Chèn giá trị x vào vị trí k trong mảng
*/

#include <iostream>				//một số thư viện thường dùng
#include <conio.h>				//_getch...
#include <math.h>				//sqrt,...
#include <time.h>
#include <stdlib.h>				//random,...
#include <string.h>				//xử lý chuỗi
using namespace std;
int main()
{
	int a[100];
	int n;
	int i;
	int x;
	int k;
	do
	{
		//Nhập mảng
		cout << "Nhap so phan tu cua mang: "; cin >> n;
		for (int i = 0; i < n; i++)
		{
			cout << "Nhap so phan thu thu # " << i << ": ";
			cin >> a[i];
		}
		//Xuất mảng
		cout << "Mang vua nhap la: ";
		for (i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << endl;
		//Thao tác 25: Chèn giá trị x vào vị trí k trong mảng
		//Phần tử đầu tiên dời đi là phần tử cuối cùng (n-1) và phần tử cuối cùng dời đi là phần tử nằm ở vị trí k
		cout << "Moi nhap phan tu x:= ";
		cin >> x;
		cout << "Moi nhap vi tri k can chen:= ";
		cin >> k;
		//Dời tất cả các phần tử từ k đến cuối ra sau 1 vị trí, lưu ý vòng lặp chạy ngược để xét từ vị trí n-1 đến vị trí k
		for (i = n - 1; i >= k; i--)
			a[i + 1] = a[i];
		//Sau khi dời, vị trí k lúc này sẽ trống 
		//Gán x vào vị trí k
		a[k] = x;
		//Tăng số phần tử lên
		n++;
		cout << "Mang sau khi chen gia tri x vao vi tri k la: ";
		cout << endl;
		for (int i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << endl;

	} while (_getch() != 27);
	return 0;
}

