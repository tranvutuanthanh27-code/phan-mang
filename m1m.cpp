#include <iostream>
using namespace std;
int main()
{
    double n;
    float a[50];
    // I. nhập và xuất mảng ra mà hình
    do
    {
        cout << " + nhap so thuc n (so phan tu) la : ";
        cin >> n;
        if (1 <= n && n <= 50)
        {
            cout << " + thoa man dieu kien 1 <= n <= 50 !" << endl;
        }
        else
        {
            cout << " + khong thoa man dieu kien !" << endl;
        }
    } while (n < 1 || n > 50);

    for (int i = 0; i < n; i++)
    {
        cout << " + nhap gia tri cua phan tu thu " << i << " la:";
        cin >> a[i];
    }
    // hiển thị dãy
    cout << " + day sau khi nhap la : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // II. Nhập số x vào , cho biết x có xuất hiện trong mảng ko , xuất hiện bao nhiêu lần và ở vị trí nào.

    int x;
    int dem = 0;

    cout << " + nhap so x ma ban mong muon tim la : ";
    cin >> x;

    cout << " + vi tri ma " << x << " xuat hien trong mang a la : ";
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            cout << i << " ";
            dem++;
        }
    }
    if (dem > 0)
    {
        cout << " + so lan ma " << x << " xuat hien trong mang a la : " << dem << endl;
    }
    else
    {
        cout << " + khong co so " << x << " nao xuat hien trong mang a." << endl;
    }
    cout << endl;

    // III. nhập vị trí k , số thực y tự do sau đó chèn y vào k => in ra dãy số sau chèn.
    int k;
    double y;
    cout << "+ nhap vi tri k ma ban muon thay the :";
    cin >> k;
    cout << "+ nhap so y ma ban muon thay the :";
    cin >> y;

    if (k >= 1 && k <= n)
    {
        for (int i = n; i > k; i--)
        {
            a[i] = a[i - 1];
        }
        a[k] = y;
        n++;
    }
    else
    {
        cout << "+ vi tri k khong hop le !" << endl;
    }
    cout << "+ day moi sau khi chen " << y << " vao la: ";
    for (int i; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // IV. Xoá phần tử số 0 nếu có.
    bool Coso0 = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            Coso0 = true;
            for (int j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            n--;
            i--; // kiểm tra lai vị trí lúc đầu.
        }
    }
    if (!Coso0)
    {
        cout << " + khong co so 0 trong day";
    }
    else
    {
        cout << " + day moi khi bo phan tu 0 ra khoi day la :";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
