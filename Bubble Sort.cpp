#include <iostream>
using namespace std;

int main() {
	cout << "~ Tugas Pertemuan ke-14 : Algoritma Sort ~" << endl;
	cout << "======================================================================" << endl;
	cout << "Nama          : Sella Andira Bintang Wulandari" << endl;
  	cout << "NIM           : 5520122013" << endl;
   	cout << "Program Studi : Informatika" << endl;
   	cout << "======================================================================" << endl;
   	
   int arr[] = {20, 30, 10, 5, 35};
   int n = 5;
   
   // Algoritma bubble sort
   for (int i = 0; i < n - 1; i++) {
      for (int j = 0; j < n - i - 1; j++) {
         if (arr[j] > arr[j+1]) {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
         }
      }
   }

   cout << "Array setelah diurutkan: ";
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }

   return 0;
}
