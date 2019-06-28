#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int i, N, middle=0;
	cout << "Введите N: ";
	cin >> N;
	float s[N];
	cout << "Введите массив";
	for(i=0; i<N; i++)
		cin >> s[i];

	int sum = 0;
	for(i=0; i<N; i++) {
		sum = sum+s[i];
	}
	middle = sum/N;
	cout << middle << endl;
	return 0;
}