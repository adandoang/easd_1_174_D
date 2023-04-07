// 1. karena algoritma adalah urutan instruksi yang terstruktur dan terorganisir yang mengikuti logika atau langkah-langkah tertentu untuk menyelesaikan suatu masalah atau mencapai suatu tujuan
// 2. struktur statik dan dinamik
// 3. penggunaan memori, jumlah input data, jumlah operasi, jenis algoritma, kemampuan komputer, bahasa pemrograman
// 4. insertionsort, karena hanya ada satu perulangan untuk setiap elemen data, sehingga jumlah operasi yang diperlukan untuk mengurutkan data relatif sedikit
// 5. bubblesort, insertionsort, dan selectionsort
// 6. 

#include <iostream>
using namespace std;

int a[94];
int n;

void input() {
    while (true) {
        cout << "Masukan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 94 elemen\n";
        }
    }
    cout << endl;

    cout << "\nmasukan bilangan:" << endl;
    for (int j = 0; j < n; j++) {
        cin >> a[j];
    }
}

void selectionSort(int arr[], int n) {
    for (int AJ = 0; AJ < n - 1; AJ++) {
        int min_index = AJ;
        for (int i = AJ + 1; i < n; i++) {
            if (arr[i] < arr[min_index]) {
                min_index = i;
            }
        }
        int temp = arr[AJ];
        arr[AJ] = arr[min_index];
        arr[min_index] = temp;
    }
}

void display(int arr[], int n) {
    cout << "==================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "==================================" << endl;
  