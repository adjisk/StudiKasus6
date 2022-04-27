#include "../base.h"
using namespace std;

void nilai::input(){

  cout<<"jumlah mahasiswa : ";
  cin>>jml;
  cout<<"jumlah matkul : ";
    cin>>jml_matkul;
  cout<<"\n===============================================================================\n";
 for(int j=0; j<jml; j++){
   cout<<"Nama : ";
 //  cin.getline(nama, sizeof(nama[j]));
   cin>>nama[j];
   for(int i=0; i<jml_matkul; i++){
    cout<<"\nMasukkan nama matkul : ";
      cin>>matkul[i];
    cout<<"Masukkan nilai tugas : ";
   cin>>tugas[i];
   cout<<"Masukkan nilai uts : ";
    cin>>uts[i];
   cout<<"Masukkan nilai UAS : ";
    cin>>uas[i];
    nt[i] = ((tugas[i]*0.2) + (uts[i]*0.35 )+ (uas[i]*0.45));
   //cout<<"Nilai Akhir : "<<nt[i];
  cout<<"\n===============================================================================\n";
     }
    cout<<"Nilai Rata-Rata ";
   rata_tugas[j]=((tugas[0]+tugas[1]+tugas[2])/3);
   cout<<rata_tugas[j]<<endl;
   rata_uts[j]=((uts[0]+uts[1]+uts[2])/3);
   cout<<rata_uts[j]<<endl;
   rata_uas[j]=((uas[0]+uas[1]+uas[2])/3);
   cout<<rata_uas[j]<<endl;
   na[j]=((nt[0] + nt[1]+ nt[2])/3);
   cout<<na[j]<<endl;
   }
  
  
} 

void nilai::output(){ 
  cout<<setiosflags(ios::left)<<nama[0];
  cout<<"\n===============================================================================\n";
  cout<<"||\tMata Kuliah\t||\tTugas\t||\tUTS\t||\tUAS\t||\tNilai Akhir\t||\n";
  cout<<"===============================================================================\n";

  for(int i=0; i<jml_matkul; i++){  
    cout<<setiosflags(ios::left)<<"\t\t"<<setw(10)<<matkul[i];
    cout<<setiosflags(ios::left)<<"\t"<<setw(10)<<tugas[i];
    cout<<setiosflags(ios::left)<<"\t"<<setw(10)<<uts[i];
    cout<<setiosflags(ios::left)<<"\t"<<setw(10)<<uas[i];
    cout<<setiosflags(ios::left)<<"\t"<<setw(10)<<nt[i];
    cout<<endl;
  }
  cout<<"Nilai Rata-Rata : ";
  cout<<setiosflags(ios::left)<<"\t"<<setw(10)<<rata_tugas[0];
  cout<<setiosflags(ios::left)<<"\t"<<setw(10)<<rata_uts[0];
  cout<<setiosflags(ios::left)<<"\t"<<setw(10)<<rata_uas[0];
  cout<<setiosflags(ios::left)<<"\t"<<setw(10)<<na[0];


  cout<<"\n\n\n";
  
  cout<<setiosflags(ios::left)<<nama[1];
  cout<<"\n===============================================================================\n";
  cout<<"||\tMata Kuliah\t||\tTugas\t||\tUTS\t||\tUAS\t||\tNilai Akhir\t||\n";
  cout<<"===============================================================================\n";  
  for(int i=0; i<jml_matkul; i++){  
    cout<<setiosflags(ios::left)<<"\t\t"<<setw(10)<<matkul[i];
    cout<<setiosflags(ios::left)<<"\t"<<setw(10)<<tugas[i];
    cout<<setiosflags(ios::left)<<"\t"<<setw(10)<<uts[i];
    cout<<setiosflags(ios::left)<<"\t"<<setw(10)<<uas[i];
    cout<<setiosflags(ios::left)<<"\t"<<setw(10)<<nt[i];
    cout<<endl; 
  }
  cout<<"Nilai Rata-Rata : ";
  cout<<setiosflags(ios::left)<<"\t"<<setw(10)<<rata_tugas[1];
  cout<<setiosflags(ios::left)<<"\t"<<setw(10)<<rata_uts[1];
  cout<<setiosflags(ios::left)<<"\t"<<setw(10)<<rata_uas[1];
  cout<<setiosflags(ios::left)<<"\t"<<setw(10)<<na[1];
}

int main(){
  nilai smt;
  smt.input();
  smt.output();
  return 0;
}
