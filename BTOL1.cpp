//// 570_NGUYENTRANANHTHU_TUAN7.cpp : This file contains the 'main' function. Program execution begins and ends there.
////
//#include <conio.h>
//#include <stdio.h>
//#include <stdlib.h>
//#define MAXROW 100
//#define MAXCOL 100
//void nhap(int a[][MAXCOL],int& m, int& n);
//void nhaprandom(int a[][MAXCOL], int& m, int& n);
//void xuat(int a[][MAXCOL], int m, int n);
//void tong(int a[][MAXCOL], int m, int n);
//void lonnhat(int a[][MAXCOL], int m, int n);
//void nhonhat(int a[][MAXCOL], int m, int n);
//void sxtang(int a[][MAXCOL], int m, int n);
//void vitrix(int a[][MAXCOL], int m, int n, int x7);
//void lonnhatdongk(int a[][MAXCOL], int k, int n);
//void demptuduong(int a[][MAXCOL], int m, int n);
//
//void nhap(int a[][MAXCOL], int& m, int& n)
//{
//	do
//	{
//		printf("\nSO DONG:"); scanf("%d", &m);
//	} while (m<=0);
//	do
//	{
//		printf("SO COT:"); scanf("%d", &n);
//	} while (n <= 0);
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("a[%d][%d]=", i, j); scanf("%d", &a[i][j]);
//		}
//	}
//}
//void nhaprandom(int a[][MAXCOL], int& m, int& n)
//{
//	do
//	{
//		printf("\nSO DONG:"); scanf("%d", &m);
//	} while (m <= 0);
//	do
//	{
//		printf("SO COT:"); scanf("%d", &n);
//	} while (n <= 0);
//	srand((int)time_t(0));
//	int rd;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			rd = -49 + rand() % (49 - (-49) + 1);
//			a[i][j] = rd;
//		}
//	}
//}
//void xuat(int a[][MAXCOL], int m, int n)
//{
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%5d", a[i][j]);
//		}
//		printf("\n");
//	}
//}
//void tong(int a[][MAXCOL], int m, int n)
//{
//	int t = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			t += a[i][j];
//		}
//	}
//	printf("\nTONG PTU: %d", t);
//}
//void lonnhat(int a[][MAXCOL], int m, int n)
//{
//	int Max = a[0][0];
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 1; j < n; j++)
//		{
//			if (Max<a[i][j])
//			{
//				Max = a[i][j];
//			}
//		}
//	}
//	printf("\nMAX: %d", Max);
//}
//void nhonhat(int a[][MAXCOL], int m, int n)
//{
//	int Min = a[0][0];
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 1; j < n; j++)
//		{
//			if (Min > a[i][j])
//			{
//				Min = a[i][j];
//			}
//		}
//	}
//	printf("\nMIN: %d", Min);
//}
//void swap(int& x, int& y)
//{
//	int tam = x;
//	x = y;
//	y = tam;
//}
//void sxtang(int a[][MAXCOL], int m, int n)
//{
//	int sopt = m * n;
//	for (int i = 0; i < sopt-1; i++)
//	{
//		for (int j = i+1; j < sopt; j++)
//		{
//			if (a[i/n][i%n]>a[j/n][j%n])
//			{
//				swap(a[i / n][i % n], a[j / n][j % n]);
//			}
//		}
//	}
//}
//void vitrix(int a[][MAXCOL], int m, int n, int x7)
//{
//	int flag = 0, dong7, cot7;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (a[i][j]==x7)
//			{
//				flag++;
//				dong7 = i;
//				cot7 = j;
//			}
//		}
//	}
//	if (flag!=0)
//	{
//		printf("VI TRI %d: DONG %d - COT %d", x7, dong7, cot7);
//	}
//	else
//	{
//		printf("KHONG CO X TRONG MA TRAN");
//	}
//}
//void lonnhatdongk(int a[][MAXCOL], int k, int n)
//{
//	int maxk = a[k][0];
//	for (int j = 0; j < n; j++)
//	{
//		if (maxk < a[k][j])
//		{
//			maxk = a[k][j];
//		}
//	}
//	printf("PTU LON NHAT DONG %d: %d", k, maxk);
//}
//void demptuduong(int a[][MAXCOL], int m, int n)
//{
//	int dem = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (a[i][j]>0)
//			{
//				dem++;
//			}
//		}
//	}
//	printf("\nSO PTU DUONG: %d", dem);
//}
//void menu()
//{
//	printf("1. NHAP MA TRAN");
//	printf("\n2. XUAT MA TRAN");
//	printf("\n3. TINH TONG");
//	printf("\n4. TIM MAX, MIN");
//	printf("\n5. SAP XEP TANG");
//	printf("\n6. NHAP MA TRAN - RANDOM");
//	printf("\n7. TIM VI TRI X");
//	printf("\n8. TIM MAX TAI DONG K");
//	printf("\n9. DEM PTU DUONG");
//	printf("\n10. DEM SO LAN XUAT HIEN CUA PTU X");
//	printf("\n11. MA TRAN CO VUONG HAY KHONG?");
//	printf("\n12. MA TRAN CO TOAN SO CHAN?");
//	printf("\n13. TIM DONG CO TONG LON NHAT");
//	printf("\n14. TIM SO CHAN LON NHAT");
//	printf("\n0. THOAT\n");
//}
//void main()
//{
//	int a[MAXROW][MAXCOL];
//	int m, n;
//	int chon;
//	menu();
//	do
//	{
//		printf("\nCHON: "); scanf("%d", &chon);
//		switch (chon)
//		{
//		case 0: printf("THOAT NHA PIPI !!"); break;
//		case 1:
//		{
//			printf("1. NHAP MA TRAN");
//			nhap(a, m, n);
//			printf("\n");
//			break;
//		}
//		case 2:
//		{
//			printf("2. XUAT MA TRAN\n");
//			xuat(a, m, n);
//			printf("\n");
//			break;
//		}
//		case 3:
//		{
//			printf("3. TINH TONG");
//			tong(a, m, n);
//			printf("\n");
//			break;
//		}
//		case 4:
//		{
//			printf("4. TIM MAX, MIN");
//			lonnhat(a, m, n);
//			nhonhat(a, m, n);
//			printf("\n");
//			break;
//		}
//		case 5:
//		{
//			printf("5. SAP XEP TANG\n");
//			sxtang(a, m, n);
//			xuat(a, m, n);
//			printf("\n");
//			break;
//		}
//		case 6:
//		{
//			printf("6. NHAP MA TRAN - RANDOM");
//			nhaprandom(a, m, n);
//			xuat(a, m, n);
//			printf("\n");
//			break;
//		}
//		case 7:
//		{
//			printf("7. TIM VI TRI X");
//			int x7;
//			printf("\nNHAP X: "); scanf("%d",&x7);
//			vitrix(a, m, n, x7);
//			printf("\n");
//			break;
//		}
//		case 8:
//		{
//			printf("8. TIM MAX TAI DONG K");
//			int k;
//			printf("\nNHAP DONG K: "); scanf("%d", &k);
//			lonnhatdongk(a, k, n);
//			printf("\n");
//			break;
//		}
//		case 9:
//		{
//			printf("9. DEM PTU DUONG");
//			demptuduong(a, m, n);
//			printf("\n");
//			break;
//		}
//		default: printf("\nKHONG CO TRONG MENU HOAC CHUA LAM DEN NEN XIN NHAP LAI NHA <3");
//			break;
//		}
//	} while (chon!=0);
//	getch();
//}
//// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
//// Debug program: F5 or Debug > Start Debugging menu
//
//// Tips for Getting Started: 
////   1. Use the Solution Explorer window to add/manage files
////   2. Use the Team Explorer window to connect to source control
////   3. Use the Output window to see build output and other messages
////   4. Use the Error List window to view errors
////   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
////   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
