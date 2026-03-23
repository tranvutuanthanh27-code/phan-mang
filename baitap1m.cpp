#include <iostream>
using namespace std;

double Tinhtien(double kwh)
{
    float sotien;
    if (kwh <= 50 && kwh > 0)
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

    int i;

    cout << "+ nhap so ho gia dinh la : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "+ nhap so kwh dien tieu thu cua ho gia dinh thu " << i + 1 << " la :";
        cin >> a[i];
    }
    // 1. số tiền mỗi hộ gia đính phai tra
    for (int i = 0; i < n; i++)

    {
        double sotien = Tinhtien(a[i]);

        cout << " + ho gia dinh thu " << i + 1 << " tieu thu het la: " << a[i] << " va so tien phai tra la : " << sotien << " VND " << endl;
    }
    cout << endl;

    // 2. Hộ gia đình sd ít nhất.
    double min = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    double sotien = Tinhtien(min);
    cout << " => so tien ho gia dinh " << i + 1 << " tra it nhat la : " << sotien << " VND " << endl;

    cout << endl;

    // 3. sắp xếp số tiền điện tiêu thụ theo chiều tăng ssdần (từ bé đên lớn)
    int j, tg;
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
