#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void shownim();   // deklarasi method
};

void mahasiswa::shownim() {
	cout << "No Induk : " << nim << endl;
}

int main() 
{
	mahasiswa mhs{ 1 };
	mhs.shownim();

	mahasiswa& ref = mhs;
	ref.nim = 2;
	mhs.shownim();

	mahasiswa* pMhs = &mhs;
	pMhs->nim = 3;
	mhs.shownim();
	system("pause");
	return 0;



}