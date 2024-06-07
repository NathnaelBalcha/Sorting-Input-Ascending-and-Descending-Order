#include <iostream.h>
int main()
{
	int numbers[10],sap;
	cout<<"Enter 10 numbers to make ascending and descending order:\n";
	cout<<"========================================================\n";
	for (int i = 0; i < 10; ++i) {
			cout<<"Enter Number "<< i + 1 <<":";
			cin>> numbers[i];
		}
	cout<<"========================================================";
	for (int z = 0; z < 10; ++z){
			for (int x = 0; x < 10; ++x){
					if (numbers[z] < numbers[x]){
							sap = numbers[z];
							numbers[z] = numbers[x];
							numbers[x] = sap;
						}
				}
		}
	cout << "\nAscending Order: ";
	for (int i = 0; i < 10; ++i) {
			cout << numbers[i] << " ";
		}
	for (int z = 0; z < 10; ++z){
			for (int x = 0; x < 10; ++x){
					if (numbers[z] > numbers[x]){
							sap = numbers[z];
							numbers[z] = numbers[x];
							numbers[x] = sap;
						}
				}
		}
	cout << "\nDescending Order: ";
	for (int i = 0; i < 10; ++i) {
			cout << numbers[i] << " ";
		}
	cout << endl;
	return 0;
}

