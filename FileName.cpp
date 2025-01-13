#include<iostream>
using namespace std;

//function prototype
void filterEvens(int array[], int size);

int main()
//Exersice 1
{

	//decalr variables
	int myArray[8];

	//prompt user to input 8 integers
	cout << "Input 8 inegers: " << endl;
	for (int i = 0; i < 8; i++){
		cin >> myArray[i];
}
//function call for filterEvens
	filterEvens(myArray, 8);
	return 0;

}

void filterEvens(int array[], int size) {
	cout << "The even numbers that is in the array are:" << endl;
	for (int i = 0; i < 8; i++) {
		if (array[i] % 2 == 0) {
			cout << array[i] << ' ';
		}
	}
	cout << endl;
}

/*Input 8 inegers:
2
3
2
1
2
3
2
2
The even numbers that is in the array are:
2 2 2 2 2*/