#include <iostream>
using namespace std;

double Tinhtien(double kwh)
{
    float sotien;
    if (kwh <= 50)
    {
        sotien = kwh * 1.984;
    }
    else if (kwh > 50 && kwh <= 100)
    {
        sotien = 50 * 1.984 + (kwh - 50) * 2.050;
    }
    else if (kwh > 100 && kwh <= 200)
    {
        sotien = 50 * 1.984 + 50 * 2.050 + (kwh - 100) * 2.380;
    }
    else if (kwh > 200 && kwh <= 300)
    {
        sotien = 50 * 1.984 + 50 * 2.050 + 100 * 2.380 + (kwh - 200) * 2.998;
    }
    else if (kwh > 300 && kwh <= 400)
    {
        sotien = 50 * 1.984 + 50 * 2.050 + 100 * 2.380 + 100 * 2.998 + (kwh - 300) * 3.350;
    }
    else
    {
        sotien = 50 * 1.984 + 50 * 2.050 + 100 * 2.380 + 100 * 2.998 + 100 * 3.350 + (kwh - 400) * 3.460;
    }
    return sotien;
}
int main()
{
    int n;
    double a[100];

    cout << "+ nhap so ho gia dinh la : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "+ nhap so kwh dien tieu thu cua ho gia dinh thu " << i << " la :";
        cin >> a[i];
    }
    // só tiền mỗi hộ gia đính phai tra
    for (int i = 0; i < n; i++)
    {
        double ketqua = Tinhtien(a[i]);

        cout << " + ho gia dinh thu " << i << " tieu thu het la: " << a[i] << " va so tien phai tra la : " << ketqua << " VND " << endl;
    }
    cout << endl;
    // Hộ gia đình sd ít nhất.
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        double ketqua = Tinhtien(a[i]);
        if (a[i] < min)
        {
            min = a[i];
            cout << " => so tien ho gia dinh " << i << " tra it nhat la : " << a[i] << " VND " << endl;
        }
    }
    cout << endl;
    // sắp xếp số tiền điện tiêu thụ theo chiều tăng ssdần (từ bé đên lớn)
    int i, j, tg;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
    cout << "+ so kwh tien dien theo chieu tang dan la : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
