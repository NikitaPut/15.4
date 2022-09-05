#include "iostream"
void parity(bool b, int N) {
	for (int i = b; i <= N; i += 2)
		std::cout << i << ' ';
}

int main() { 
	const int N = 13;
	parity(false, N);

	return 0;
}
