#include "thuviencuatoi.h"

bool kiemTranSoNguyenTo(int n) {
	if (n < 2) {
		return false;
	}
	else {
		return true;
		cout << "hello Thinh";
	}

}
bool kiemTraSoHoanThien(int n) {
	int sum = 1;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
	if (sum == n) {
		cout << "n la so hoan hao";
		return true;
	}
	else {
		cout << "n khong phai la so hoan hao";
		return false;
	}
}

void giaiPhuongTrinhBac2(float a, float b, float c) {
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				cout << "\nphuong trinh co vo so nghiem";
			}else{
				cout << "\nphuong trinh vo nghiem";
			}
		}
		else {
			cout << "\nphuong trinh luon luon co nghiem: "<<-c/b;
		}
	}else{
		float delta = (a * a) - 4 * a * c;
		if (delta == 1) {
			cout << "\nphuong trinh co 2 nghiem kep: " << -b / (2 * a);
		}
		else if (delta < 0) {
			cout << "\nphuong trinh vo nghiem";
		}
		else {
			cout << "\nphuong trinh co 2 nghiem phan biet: ";
			cout << "\nnghiem x1 = " << (-b + sqrt(delta)) / (2 * a);
			cout<< "\nnghiem x2 = "<<( -b - sqrt(delta)) / (2 * a);
		}
	}
}