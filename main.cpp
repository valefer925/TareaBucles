#include <iostream>

using namespace std;

int main()
{

    float n;
    cin >> n;
    int c = 0;
    int bin = 1;

    while (n)
    {
        int r = n;
        r = r / 10;
        r = n - (r * 10);
        c += r * bin;
        bin = bin * 2;
        n = n / 10;
    }
    cout << c << endl;


    int n;
    cin >> n;
    int bi = 0;
    int d = 1;
    int c;

    while (n)
    {
        c = n % 2;
        n = n / 2;
        bi += c * d;
        d = d * 10;
    }
    cout << bi;

    float n;
    cin >> n;
    while (n > 1)
        n = n/2;
    if (n == 1)
        cout << "Es potencia de 2" << endl;
    else
        cout << "No es potencia de 2" << endl;

}
