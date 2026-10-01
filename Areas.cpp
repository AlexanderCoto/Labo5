#include <iostream>
using namespace std;
int main()
{
    float r = 0.0, l = 0.0, b = 0.0, h = 0.0, T = 0.0, C = 0.0, Cu = 0.0;
    int figuras;
    cout << "Seleccione de que figura geometrica quiere el area:" << endl;
    cout << "1. Triangulo" << endl
         << "2. Circulo" << endl
         << "3. Cuadrado" << endl;
    cin >> figuras;
    switch (figuras)
    {
    case 1:
    cout<<"Ingresar la Base: ";
        cin >> b;
        cout<<"Ingresar la altura: ";
        cin >> h;
        T = (b * h) / 2;
        cout << "El area del Triangulo es: " << T << endl;
        break;
    case 2:
    cout<<"Ingresar el radio: ";
        cin >> r;
        C = (3.1416 * r * r);
        cout << "El area del circulo es: " << C << endl;
        break;
    case 3:
    cout<<"Ingrsar el lado: ";
        cin >> l;
        Cu = (l * l);
        cout << "El area del cuadrado es: " << Cu << endl;
        break;

    default:
        cout << "Valor invalido ";
        break;
    }

    return 0;
}