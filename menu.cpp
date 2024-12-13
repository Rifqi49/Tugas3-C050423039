#include <iostream>
#include <conio.h>
using namespace std;


int n;

void tukar(int *a, int *b){
  int ubah = *a;
  *a = *b;
  *b = ubah;
}

void dMenu(){
system("cls");
cout<<"Aplikasi Sorting Bubble"<<"\n";       
cout<<"1. masukan data"<<"\n";            
cout<<"2. tampilkan data"<<"\n";            
cout<<"3. sorting asc"<<"\n";           
cout<<"4. sorting dsc"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        

}

void tampilkanData(int data[], int n){
  if (n > 0){
    cout << "Data saat ini: \n";
    for (int i = 0; i < n;i++) {
      cout << "Data ke-" << (i + 1) << ": " << data[i] << "\n";
    }
  }else {
    cout << "Data kosong. Masukkan data terlebih dahulu!";
  }
}

void sortingAscending(int data[], int n){
  for (int i = 0; i < n - 1; i++){
    for (int j = 0; j < n - i - 1; j++){
      if (data[j] > data [j + 1]){
        tukar(&data[j], &data[j + 1]); 
      }
    }
  }
  cout << "Data berhasil diurutkan secara ascending!";
}

void sortingDescending(int data[], int n){
  for (int i = 0; i < n - 1; i++){
    for (int j = 0; j < n - i - 1; j++){
      if (data[j] < data [j + 1]){
        tukar(&data[j], &data[j + 1]); 
      }
    }
  }
  cout << "Data berhasil diurutkan secara descending!";
}

int main() {
int data[100];
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    /* code */
    //mPertama("pertama");
    system("cls");
    cout << "Masukkan jumlah data: ";
      cin >> n;
        for (int i=0; i<n; i++){
          cout << "Masukkan data ke-" << i+1 << ": ";
          cin >> data[i];
        }
    break;
   case '2':
    //mPertama("ke- dua");
    /* code */ 
    system("cls");
    cout << "Data yang dimasukkan: \n";
      for(int i=0; i<n; i++){
        cout << "Data ke-" << i+1 << ": " << data[i] << endl;
      }
    getch();
    break;  
   case '3':
    //mPertama("ke- tiga");
    /* code */
    break;  
   case '4':
    //mPertama("ke- empat");
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}