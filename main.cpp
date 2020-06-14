#include <iostream>
#include <string>

class mahasiswa
{
public:
	int n,tgs[100],uts[100],uas[100];
	float nilai[100];
	std::string nama[100],jurusan[100],ket[100];
	char grade[100];

	void input()
	{
		for (int i = 1; i <=n; ++i)
		{
			std::system("clear");
			std::cout<<"=============================================="<<std::endl;
			std::cout<<"==             Mahasiswa Ke "<<i<<"               =="<<std::endl;
			std::cout<<"=============================================="<<std::endl;
			std::cout<<"Masukan Nama Mahasiswa = ";std::cin>>nama[i];
			std::cout<<"Masukan Jurusan Mahasiswa = ";std::cin>>jurusan[i];
			std::cout<<"Masukan Nilai Tugas = ";std::cin>>tgs[i];
			std::cout<<"Masukan Nilai UTS = ";std::cin>>uts[i];
			std::cout<<"Masukan Nilai UAs = ";std::cin>>uas[i];
			std::cout<<std::endl;
		}
	}

	void nilaiakhir()
	{
		for (int i = 1; i <=n; ++i)
		{
			nilai[i] = (tgs[i]*0.2)+(uts[i]*0.3)+(uas[i]*0.5);
		}
	}

	void gradee()
	{	
		nilaiakhir();
		for (int i = 1; i <= n; ++i)
		{
			if (nilai[i]>=80)
			{
				grade[i] = 'A';
			}
			else if (nilai[i]>=70)
			{
				grade[i] = 'B';
			}
			else if(nilai[i]>=60)
			{
				grade[i] = 'C';
			}
			else if (nilai[i]>=50)
			{
				grade[i] = 'D';
			}
			else 
			{
				grade[i] = 'E';
			}
		}
	}

	void keterangann()
	{	
		for (int i = 1; i <= n; ++i)
		{
			if (nilai[i]>=70)
			{
				ket[i] = "Selamat Anda Lulus ";
			}
			else
			{
				ket[i] = "Mohon Maaf Anda Tidak Lulus Silahkan Mengulang";
			}
		}
	}

	void output()
	{
		std::system("clear");
		std::cout<<"=============================================="<<std::endl;
		std::cout<<"==             KETERANGAN MAHASISWA           = "<<std::endl;
		std::cout<<"=============================================="<<std::endl;
		for (int i = 1; i <= n; ++i)
		{
			std::cout<<"=============================================="<<std::endl;
			std::cout<<"==             Mahasiswa Ke "<<i<<"               =="<<std::endl;
			std::cout<<"=============================================="<<std::endl;
			std::cout<<"Nama Mahasiswa = "<<nama[i]<<std::endl;
			std::cout<<"Jurusan Mahasiswa = "<<jurusan[i]<<std::endl;
			std::cout<<"Nilai Akhir Mahasiswa = "<<nilai[i]<<std::endl;
			std::cout<<"Grade Mahasiswa = "<<grade[i]<<std::endl;
			std::cout<<"Keterangan = "<<ket[i]<<std::endl;
		}
		std::cout<<"=============================================="<<std::endl;
		std::cout<<"==                                          == "<<std::endl;
		std::cout<<"=============================================="<<std::endl;
	}

	void mhs()
	{
		std::system("clear");
		std::cout<<"=============================================="<<std::endl;
		std::cout<<"= TEKNIK INFORMATIKA || STMIK PALANGKA RAYA  ="<<std::endl;
		std::cout<<"= MUHAMAD ISRA       || C1955201073          ="<<std::endl;
		std::cout<<"=============================================="<<std::endl;
		std::cout<<"==     PROGRAM MENGHITUNG NILAI SEMESTER    =="<<std::endl;
		std::cout<<"=============================================="<<std::endl;
		std::cout<<"== MASUKAN JUMLAH MAHASISWA  = ";std::cin>>n;
		std::cout<<"=============================================="<<std::endl;
		std::cout<<std::endl;
	}
};

int main()
{
	mahasiswa stmik;
	stmik.mhs();
	stmik.input();
	stmik.gradee();
	stmik.keterangann();
	stmik.output();

	return 0;
}