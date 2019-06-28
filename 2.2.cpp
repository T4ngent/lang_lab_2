#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int search, a=0;
    cout << "Введите искомое число"<< endl;
    cin >> search;
    while (true) {
        cout << "Введите число для сравнения" << endl;
        cin >> a;
        if (a == search || search==0) {
            cout << "Такой элемент найден:" << endl;
            cout << search << endl;
            break;
        } else {
            cout << "Такой элемент не найден или число для сравнения равно нулю" << endl;
        }

    }

    return 0;
}