#include <iostream>
using namespace std;

int main()
{
    int a[3][5];
    int tongHocSinh = 0;

    for (int i = 0; i < 3; i++)
    {

        cout << "--- Nhap diem cho hoc sinh thu " << i << " ---" << endl;

        for (int j = 0; j < 5; j++)
        {
            cout << "Nhap diem mon " << j << ": ";
            cin >> a[i][j];         // Dòng code của em 📥
            tongHocSinh += a[i][j]; // Dòng code của em ➕
        }

        cout << "=> Tong diem cua hoc sinh " << i << " la: " << tongHocSinh << endl
             << endl;
    }

    return 0;
}