#include <cstdlib>
#include <iostream>
#include<conio.h>
using namespace std;
 
void print_array(int array[], int size) {
 cout<< "  Proses Pengurutan Bubble Sort: ";
 int j;
 for (j=0; j<size;j++)
 cout <<" "<< array[j];
 cout << endl;
 
}//end of print_array
 
void bubble_sort(int arr[], int size) {
 bool not_sorted = true;
 int j=1,tmp;
 
 while (not_sorted)  {
 not_sorted = false;
 j++;
 //1. Pengecekan Mulai dari data ke-1 sampai data ke-n
 for (int i = 0; i < size - j; i++) {
 //2. Bandingkan data ke-n dengan data sebelumnya (n-1)
 if (arr[i] > arr[i + 1]) {
 tmp = arr[i];
 //3. Jika lebih kecil maka pindahkan bilangan tersebut dengan bilangan yg ada didepannya satu persatu (n-1,n-2,n-3,....dst)
 arr[i] = arr[i + 1];
 arr[i + 1] = tmp;
 not_sorted = true;
 //4. Jika lebih besar maka tidak terjadi pemindahan
    }//end of if
   print_array(arr,5);
  }//end of for loop
  //5. Ulangi langkah 2 dan 3 s/d sort optimal.
 }//end of while loop
}//end of bubble_sort
 
int main() {
    cout<<"\tBubble Sort\n\n";
 int array[5]= {5,4,3,2,1};
 print_array(array,5);
 bubble_sort(array,6);
 getch();
 return 0;
}//end of main
