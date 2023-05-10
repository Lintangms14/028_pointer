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
	mahasiswa mhs{ 1 };							//object mhs
	mhs.shownim();								//member acces opreator

	mahasiswa& ref = mhs;						//pointer references refmhs
	ref.nim = 2;								//member acces operator
	mhs.shownim();

	mahasiswa* pmhs = &mhs;						//pointer dereference pmhs
	pmhs->nim = 3;								//Arrow operator
	mhs.shownim();
	system("pause");
	return 0;
}