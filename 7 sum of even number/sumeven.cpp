using namespace std;
#include <iostream>
#include <vector>
int sumeven(int start, int end) {
	start += (start % 2 == 0) ? 0 : 1;
	end -= (end % 2 == 0) ? 0 : 1;

	int sumeven = 0;
	for (int i = start; i <= end;i+=2) {
		sumeven += i;
	}
	return sumeven;
}

int main(){
	int startrange;
	int endrange;
	cin >> startrange;
	cin >> endrange;
	cout << "Sum of even is : ";
	int result= sumeven(startrange, endrange);
	cout << result;
	return 0;