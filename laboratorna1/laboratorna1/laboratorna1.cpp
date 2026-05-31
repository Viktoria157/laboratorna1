#include <iostream>
using namespace std;

int main()
{
    const int n = 10; // розмір масиву
    int a[n];

    cout << "Vvedit 10 elementiv masyvu:\n";

    // введення масиву
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    int suma = 0;
    int kilkist = 0;

    // пошук від'ємних елементів
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            suma += a[i];
            kilkist++;
        }
    }

    if (kilkist > 0)
    {
        double serednie = (double)suma / kilkist;

        cout << "\nSerednie arifmetychne vidiemnyh elementiv = "
            << serednie << endl;
    }
    else
    {
        cout << "\nVidiemnyh elementiv nema." << endl;
    }

    return 0;
}