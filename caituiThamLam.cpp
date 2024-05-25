//#include<iostream>
//#include<fstream>
//using namespace std;
//struct MONDO
//{
//	int w; //trong luong
//	int v;//gia tri
//	int num;//soluong
//};
//void read_file(fstream& f, MONDO a[], int& n)
//{
//	f.open("E://trong//input_tuixach.txt", ios::in);
//	f >> n;
//	for (int i = 0; i < n; i++)
//	{
//		f >> a[i].w;
//		f >> a[i].v;
//		f >> a[i].num;
//	}
//
//	f.close();
//}
//void xuat_1_do_vat(MONDO m)
//{
//	cout << m.w << " " << m.v << " " << m.num;
//}
//void swap(MONDO& x, MONDO& y)
//{
//	MONDO t;
//	t = x;
//	x = y;
//	y = t;
//}
//void sapxep1(MONDO a[], int n)//tang dan theo trong luong
//{
//	for (int i = 0; i < n - 1; i++)
//		for (int j = i + 1; j < n; j++)
//			if (a[i].w > a[j].w)
//				swap(a[i], a[j]);
//}
//void sapxep2(MONDO a[], int n)//giam dan theo gia tri
//{
//	for (int i = 0; i < n - 1; i++)
//		for (int j = i + 1; j < n; j++)
//			if (a[i].v < a[j].v)
//				swap(a[i], a[j]);
//}
//void sapxep3(MONDO a[], int n)//giam dan theo don gia (don gia=gia tri/trong luong)
//{
//	for (int i = 0; i < n - 1; i++)
//		for (int j = i + 1; j < n; j++)
//			if ((1.0) * (a[i].v) / a[i].w < (1.0) * (a[j].v) / a[j].w)
//				swap(a[i], a[j]);
//}
////Ham tra ve tong gia tri cua nhung mon do trong tui
////w: suc chua toi da cua cai tui
////so luong la mang 1 chieu luu so luong cua moi do vat dc chon
//int tham_lam(MONDO a[], int n, int w, int soluong[])
//{
//	sapxep3(a, n);
//	int tong_gia_tri = 0;
//	for (int i = 0; i < n; i++)
//	{
//		soluong[i] = w / a[i].w;
//		w = w - soluong[i] * a[i].w;
//		tong_gia_tri += soluong[i] * a[i].v;
//	}
//	return tong_gia_tri;
//}
//int main()
//{
//	MONDO a[10];
//	int soluong[50];
//	int tonggt;
//	int n = 0;
//	fstream f;
//	read_file(f, a, n);
//	sapxep3(a, n);
//	int tong_trong_luong = 0;
//	tonggt = tham_lam(a, n, 37, soluong);
//	for (int i = 0; i < n; i++)
//	{
//		tong_trong_luong += soluong[i] * a[i].w;
//		xuat_1_do_vat(a[i]);
//		cout << ": " << soluong[i];
//		cout << endl;
//	}
//	cout << "tong gia tri: " << tonggt << endl;
//	cout << "Tong trong luong: " << tong_trong_luong;
//	cout << endl;
//	system("pause");
//	return 0;
//}