#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int x, sum, i, otr =0;
    for(i=1; i<15; i++) {
        cin >> x;
        if (x<0) {
            otr += x;
        }
        if (x>=0 && x<10) {
            sum += x*3;
        }
    }
    cout << "Сумма" <<endl;
    cout << sum <<endl;
    cout << "Отрицательные" <<endl;
    cout << otr <<endl;
    return 0;
}