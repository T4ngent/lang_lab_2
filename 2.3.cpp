#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int sum, k=0;
    while (k!=0) {
        cin >> k;
        if (k>0) {
            sum=sum+k;
        }
    }
    cout << sum <<endl;
    return 0;
}