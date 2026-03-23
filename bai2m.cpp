#include <iostream>
using namespace std;
int main()
{
    int n;
    double ĐTB[200], T[200], V[200], NN[200];
    double TongT, TongV, TongNN, TongĐTB;

    cout << " + nhap so luong hoc sinh tham gia ky thi : ";
    cin >> n;

    if (n > 200)
    {
        cout << "! BỊ LỖI ! YÊU CẦU NHẬP LẠI !" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << "+ diem cua hoc sinh " << i + 1 << " la : ";
            cout << "+ diem mon toan la : ";
            cin >> T[i];
            cout << "+ diem cua mon Van la : ";
            cin >> V[i];
            cout << "+ diem mon Ngoai Ngu la : ";
            cin >> NN[i];

            // Tính điểm trung binh cua tung hoc sinh.
            ĐTB[i] = (T[i] + V[i] + NN[i]) / 3.0;
        }

        // 2.In điểm kiểm tra 3 môn với điểm trung bình.
        cout << " + Danh sach diem la : " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "+ HS " << i + 1 << ": Môn Toán : " << T[i] << " : Môn Văn : " << V[i] << " : Ngoại Ngữ : " << NN[i] << " --> Điểm trung bình : " << ĐTB[i] << endl;
        }
        // 3. Điem trung binh cao nhat.

        int max = ĐTB[0];
        for (int i = 0; i < n; i++)
        {
            if (ĐTB[i] > max)
            {
                max = ĐTB[i];
            }
        }
        //
        cout << "+ Hoc sinh co diem trung binh cao nhat la hoc sinh thu : ";
        for (int i = 0; i < n; i++)
        {
            if (ĐTB[i] == max)
            {
                cout << i + 1 << " va diem la : " << ĐTB[i] << endl; // in ra số thứ tự cua học sinh đó.
            }
        }
        // 4. Tính tổng các môn và trung bình tổng của từng môn , Tổng trung bình (ĐTB)
        for (int i = 0; i < n; i++)
        {
            TongT += T[i];
            TongV += V[i];
            TongNN += NN[i];
            TongĐTB += ĐTB[i];
        }
        cout << "+ Điểm Trung Bình Tổng Toán là : " << TongT / n << endl;
        cout << "+ Điểm Trung Bình Tổng Văn là : " << TongV / n << endl;
        cout << "+ Điểm Trung Bình Tổng Ngoại Ngữ là : " << TongNN / n << endl;
        cout << "+ Điểm Trung Bình Của Điểm Tổng Trung Bình là : " << TongĐTB / n << endl;
    }
    return 0;
}