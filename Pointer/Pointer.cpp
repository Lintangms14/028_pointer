#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void shownim();								//deklarasi method
};

void mahasiswa::shownim() {						//implementasi method di luar class
	cout << "No Induk = " << nim << endl;
}

int main()
{
	mahasiswa mhs{ 1 };
	mhs.shownim();

	mahasiswa& ref = mhs;
	ref.nim = 2;
	mhs.shownim();
}