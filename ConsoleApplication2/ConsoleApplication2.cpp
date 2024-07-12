

#include <iostream>

using namespace std;

int main() {
    cout << "gedilmeli yol : ";
    double s;
    cin >> s;
    cout << "\n benzinin 100 km ucun xerci : ";
    double a100;
    cin >> a100;
    double const qiymet = 0.9;
    double total = a100 / 100 * s * qiymet;
    cout << "\n xerc olunan pul : " << total << endl;

    double h;
    cout << "hundurlugu daxil et: ";
    cin >> h;
    double l;
    cout << "\nuzunlugu daxil et: ";
    cin >> l;
    double w;
    cout << "\neni daxil et: ";
    cin >> w;


    double S = (h * l + h * w) * 2;
    cout << "Lazim olan oboy miqdari : " << S << endl;


    cout << "otaq sayi : ";
    double otaq;
    cin >> otaq;
    double tv = otaq * 1;
    double zibil = otaq * 1;
    double skaf = otaq * 1;
    cout << "otaqlarda birlikde " << tv << " televizor, " << zibil << " zibil qabi, " << skaf << " skaf var" << endl;


    cout << "kitabin sehfe sayi:";
    double kitab;
    cin >> kitab;
    cout << "kitab oxuma suretin : ";
    double suret;
    cin >> suret;
    double gun = kitab / suret;
    cout << "siz kitabi " << gun << "e gune qutaracaqsiz" << endl;
}

