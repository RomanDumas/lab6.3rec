#include <iostream>

using namespace std;
template <typename T>
void PositiveSum(T*& b, int k, T& sum, int i) {
	if (i > k)
		return;
	else {
		if (b[i] > 0)
			sum += b[i];
	}
	PositiveSum(b, k, sum, i + 1);

}
template <typename T>
void createArr(T*& b, int k, int i) {
	if (i > k)
		return;
	else {
		b[i] = i - 10;
		createArr(b, k, i + 1);
	}
}
template <typename T>
void Print(T*& b, int k, int i) {

	if (i > k)
		return;
	else {
		cout << " " << b[i];
	}

	Print(b, k, i + 1);
}
int main() {
	int k = 20, sum = 0;
	int* b = new int[k];


	createArr(b, k, 0);				//створення масиву

	cout << "arrey: " << endl;		//виведення
	Print(b, k, 0);					//
	cout << endl;					//

	PositiveSum(b, k, sum, 0);		//сума додатніх
	cout << "sum " << sum;

	delete[] b;
	return 0;
}