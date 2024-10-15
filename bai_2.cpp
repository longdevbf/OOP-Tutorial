#include <iostream>
#include <numeric> // Thêm thư viện này để dùng std::gcd

using namespace std;

struct PS {
    int ts;  // Tử số
    int ms;  // Mẫu số
};

void nhap(PS &u) {
    cout << "Nhap vao tu so" << endl;
    cin >> u.ts;
    cout << "Nhap vao mau so" << endl;
    cin >> u.ms;
}

void xuat(PS u) {
    cout << u.ts << "/" << u.ms;
}

int main() {
    // Sử dụng std::gcd để tính ước chung lớn nhất
    cout << gcd(5, 15) << endl;

    return 0;
}
