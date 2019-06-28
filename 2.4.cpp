#include <stdio.h>
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int x,y=0;
    cin >> x;
    cin >> y;
    if (x<0.61 && x>0) {
        if (x*x+y*y<1) {
            cout << "Точка принадлежит области" <<endl;
        } else {
            cout << "Точка не принадлежит области" <<endl;
        }
    } else {
        cout << "Точка не принадлежит области" <<endl;
    }
    return 0;
}