#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x;//variabel untuk menyimpan input dari lingkaran maupun bujusangkar
public:

	bidangDatar() {//constructor
		x = 0;
	}
	virtual void input() {

	}
	virtual float Luas(int a) {
		return 0;
	}
	//fungsi untuk menghitung luas
	virtual float keliling(int a) {
		return 0;
	}//fyngsi untuk menghitung keliling
	void settX9(int a) {//fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() {
		return x;
	}
};

class Lingkaran :public bidangDatar {
public:
	string bidangDatar;
	lingkaran(string pJenislingkaran):
		jenislingkaran(pJenislingkaran) {
		cout << "lingkaran dibuat\n" << endl;
	}
	~lingkaran(){
		cout << "manusia dihapus\n" << endl;
	}
	string lingkaran
		void setX(int a, string value) {
		this-> = a;
	
		float LuangLingkaran() {
			return 0;
		}
	}

};

class Bujusangkar :public bidangDatar {
public:
	string bidangDatar;
	sisi(string pJenissisi):
		jenissisi(pJenissisi) {
		cout << "lingkaran dibuat\n" << endl;
	}
	~lingkaran() {
		cout << "manusia dihapus\n" << endl;
	}
	string sisi

};

int main() {}
