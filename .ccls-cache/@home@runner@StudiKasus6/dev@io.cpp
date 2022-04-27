#include "../base.h"
using namespace std;

void nilai::input(){

  cout<<"Masukkan Jumlah matkul : ";
  cin>>jml;

 for(int i=0; i<jml; i++){
    cout<<"\nMasukkan nama matkul : ";
      cin>>matkul[i];
    cout<<"Masukkan nilai tugas : ";
   cin>>tugas[i];
   cout<<"Masukkan nilai uts : ";
    cin>>uts[i];
   cout<<"Masukkan nilai UAS : ";
    cin>>uas[i];
    nt = (tugas[i] + uts[i] + uas[i]);
   cout<<"Nilai Akhir : "<<nt/3;
  }
  // cout<<"\nNilai Pweb";
  // for(int i=0; i<1; i++){
  // cout<<"\nMasukkan nilai tugas : ";
  //  cin>>tugas[i];
  //  cout<<"Masukkan nilai uts : ";
  //   cin>>uts[i];
  //  cout<<"Masukkan nilai UAS : ";
  //   cin>>uas[i];
    
  //    nt = (tugas[i] + uts[i] + uas[i]);
  //  cout<<"Nilai Akhir : "<<nt/3;
  // }
  // cout<<"\nNilai Matdis";
  // for(int i=0; i<1; i++){
  // cout<<"\nMasukkan nilai tugas : ";
  //  cin>>tugas[i];
  //  cout<<"Masukkan nilai uts : ";
  //   cin>>uts[i];
  //  cout<<"Masukkan nilai UAS : ";
  //   cin>>uas[i];
    
  //    nt = (tugas[i] + uts[i] + uas[i]);
  //  cout<<"Nilai Akhir : "<<nt/3;
  // }

//   cout<<"\nNilai Akhir : ";
//   for(int i=0; i<1; i++){
//     na[i] = (tugas[i] + uts[i] + uas[i]) / 3;
//   }
} 

void nilai::output(){
cout<<"\n===============================================================================\n";

  cout<<"||\tMata Kuliah\t||\tTugas\t||\tUTS\t||\tUAS\t||\tNilai Akhir\t||";
  cout<<"||\tAlpro\t||\t"<<tugas[5]<<"\t||\t"<<uts[5]<<"\t||\t"<<uas[5]<<"\t||\t\t"<<na[10]<<"\t||"<<endl;
  cout<<"||\tPweb\t\t||"<<tugas[5]<<"\t||\t"<<uts[5]<<"\t||\t"<<uas[5]<<"\t||\t"<<na[10]<<"\t\t||"<<endl;
  cout<<"||\tMatdis\t\t||"<<tugas[5]<<"\t||\t"<<uts[5]<<"\t||\t"<<uas[5]<<"\t||\t"<<na[10]<<"\t||"<<endl;
  cout<<"||\trata-rata\t||\t"<<rata_tugas[5]<<"\t||\t"<<rata_uts[5]<<"\t||\t"<<rata_uas[5]<<"\t||\t"<<rata[5]<<"\t||";

  
//   for(int i =0; i<jml_matkul; i++){ 
//     cout<<i+1<<". "<<matkul[i]<< "  " <<sks[i]<<" SKS"<<endl;
//   }

//   cout<<"\nTotal sks : "<<jml_sks<<endl;
//   cout<<"Total bayar : "<<bayar<<endl; 
// 
  }

int main(){
  nilai X;
  X.input();
  X.output();
  return 0;
}