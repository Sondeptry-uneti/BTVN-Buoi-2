#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
	class KH
	{
		private :
			char ht[30];
			struct NS
			{
				int ngay,thang,nam;
			};
			NS ngaysinh;
			char cmt[10];
			char k[50];	
		public:
			void Nhap()
			{
				cout<<"\n- Nhap ho ten khach hang: "; 
				cin.getline(ht,30);
				cout<<"\n- Nhap ngay sinh: ";
				do
				{
					cin>>ngaysinh.ngay;
					if(ngaysinh.ngay >31 || ngaysinh.ngay <= 0)
						cout<<"So ngay khong chinh xac vui long nhap lai: ";
				}
				while(ngaysinh.ngay >31 || ngaysinh.ngay <= 0);
				
				cout<<"\n- Nhap thang: ";
				do
				{
					cin>>ngaysinh.thang;
					if(ngaysinh.thang>12 || ngaysinh.thang<=0)
						cout<<"Khong co thang nay vui long nhap lai: ";
				}
				while(ngaysinh.thang>12 || ngaysinh.thang<=0);
				
				cout<<"\n- Nhap nam sinh: ";
				cin>>ngaysinh.nam;								
				cin.ignore();
				cout<<"\n- Nhap so chung minh thu:  ";
				cin.getline(cmt,10);
				cout<<"\n- Nhap ho khau: ";
				cin.getline(k,50);
				cin.ignore();
			}
			void tieuDe()
			{
				cout<<"*----------------------------------------------------------------------------------------*\n";
				cout<<"|\t\t\t\tDANH SACH KHACH HANG\t\t\t\t\t |\n";
				cout<<"|----------------------------------------------------------------------------------------|\n";
				cout<<"|"<<setw(15)<<"Ho ten"<<"|";
				cout<<setw(25)<<"Ngay Thang Nam"<<"|";
			 	cout<<setw(25)<<"Can cuoc cong dan "<<"|";
			 	cout<<setw(20)<<"Ho khau thuong tru"<<"|"; 
			 	cout<<endl;		 
			}
			void Xuat()
			{
				tieuDe(); 
		 		cout<<"|"<<setw(15)<<ht<<"|";
			 	cout<<setw(18)<<ngaysinh.ngay<<"/"<<ngaysinh.thang<<"/"<<ngaysinh.nam<<"|";
			 	cout<<setw(25)<<cmt<<"|";
			 	cout<<setw(20)<<k<<"|"<<endl;
		 		cout<<"*----------------------------------------------------------------------------------------*\n";
			}
			void xuat1() {
			cout << "\n-\tho ten khach hang la: " << ht << endl;
			}
			void sosanh(KH a[], int n) 
			{
				for (int i = 0; i < n-1 ; i++) 
				{
					for (int j = i+1; j < n; j++) 
					{
						if (strlen(a[i].ht) < strlen(a[j].ht)) 
						{
							KH tg = a[i];
							a[i] = a[j];
							a[j] = tg;
						}
					}
				}
			}
			
			void loc()
			{
				int a[100];
		 		int n;
				for(int i=0;i<n;i++)
				{
					if(ngaysinh.thang==12)
						 xuat1() ;
			 			 break;
				} 
			}	
			
			
	};
	
main()
{
	int n;
	cout << "\nNhap so luong khach hang: ";
	cin >> n;
	KH a[100];
	fflush(stdin);
	cout << "\nNHAP THONG TIN KHACH HANG: " << endl;
	for(int i = 0; i < n; i++)
	{
		cout << "\n\tKhach hang thu: "<< i+1 << endl;
		a[i].Nhap();
	}
	cout << "\nDANH SACH KHACH HANG: " << endl;
	for(int i = 0; i<n ; i++)
	{
		cout << "\n\tKhach Hang thu: " << i+1 << endl;
		a[i].Xuat();
	}
	cout << "\n\tKHACH HANG THEO THU TU TANG DAN CUA HO TEN : " << endl;
	for (int i = 0; i < n; i++) {
		a[i].sosanh(a, n);
		cout << "\tKhach hang thu " << i + 1 << endl;
		a[i].xuat1();
	}
	
	for(int i = 0; i<n ; i++)
	{
		cout << "\n\t- Danh sach khach hang sinh nhat thang 12:" << endl;
		a[i].loc();
	}

getche();
}