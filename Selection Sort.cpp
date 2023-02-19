#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

int main() {
	cout << "~ Tugas Pertemuan ke-14 : Algoritma Sort ~" << endl;
	cout << "======================================================================" << endl;
	cout << "Nama          : Sella Andira Bintang Wulandari" << endl;
  	cout << "NIM           : 5520122013" << endl;
   	cout << "Program Studi : Informatika" << endl;
   	cout << "======================================================================" << endl;
   	
    int arr[] = {23, 25, 21, 22, 24,};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, n);

    cout << "Array setelah sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
