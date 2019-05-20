               #include <iostream.h>
#include <conio.h>
#include <stdio.h>

void main ()
{
char huruf,lagi,nm[20];
float nilai,Nmid,Nfinal,NA,Ttl_mid,Ttl_final,Ttl_tgs,Jml=0;
int i = 1;
atas :
cout<<"menghitung nilai akhir mahasiswa\n";
cout<<"____________________________________\n";
cout<<"masukkan nama mahasiswa = ";cin>>nm;
		do
      {cout<<"masukkan nilai tugas" << i << " = " ; cin >> nilai ;
       Jml = Jml + nilai ;
       i ++ ;}
       while (i<=5);
cout<<"masukkan nilai mid mahasiswa = ";cin>>Nmid;
cout<<"masukkan nilai final mahasiswa = ";cin>>Nfinal;
Ttl_tgs = 0.3 * (Jml/5);
Ttl_mid = 0.3 * Nmid;
Ttl_final = 0.4 * Nfinal;
NA = Ttl_tgs + Ttl_mid + Ttl_final ;
		if((NA>=80) && (NA<=100))
      huruf = 'A';
      else if ((NA>=70) && (NA<=79))
      huruf = 'B';
      else if ((NA>=60) && (NA<=69))
      huruf = 'C';
      else if ((NA>=50) && (NA<=59))
      huruf = 'D';
      else if (NA<50)
      huruf = 'E';
cout<<endl;
cout<<endl;
cout<<"menghitung nilai akhir mahasiswa\n";
cout<<"-----------------------------------\n";
cout<<"Nama Mahasiswa = " <<nm<<endl;
cout<<"Total Nilai Tugas = " <<Ttl_tgs<<endl;
cout<<"Total Nilai Mid = " <<Ttl_mid<<endl;
cout<<"Total Nilai Final = " <<Ttl_final<<endl;
cout<<"Nilai Akhir Mahasiswa = " <<NA<<endl;
cout<<"Nilai Huruf Mahasiswa = " <<huruf<<endl;
cout<<"Ingin Menginput Lagi ? [Y/T]";
lagi=getch();
clrscr();
if ( lagi =='Y' || lagi == 'y' ) goto atas;
getch();
}