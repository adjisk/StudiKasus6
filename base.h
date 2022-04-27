#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

class nilai{
  friend ostream& operator<<(ostream&, nilai&);

  public:
    void input();
    void proses();
    void output();

  private:
    string nama[20], matkul[5];
    float nt[5], na[5], rata_tugas[5], rata_uts[5], rata_uas[5], rata[5];
    int uts[5], uas[5], tugas[5], i, jml,jml_matkul, jml_uts=0;
};

void nilai::input(){
  cout<<"jumlah mahasiswa : ";
  cin>>jml;
  cout<<"jumlah matkul : ";
  cin>>jml_matkul;
  cout<<"\n===============================================================================\n";
  
  for(int j=0; j<jml; j++){
    cout<<"Nama : ";
    cin>>nama[j];
    for(int i=0; i<jml_matkul; i++){
      cout<<"\nMasukkan nama matkul : ";
      cin>>matkul[i];
      cout<<"Masukkan nilai tugas : ";
      cin>>tugas[i];
      cout<<"Masukkan nilai uts : ";
      cin>>uts[i];
      cout<<"Masukkan nilai UAS : ";
      cin>>uas[i]; cout<<"\n===============================================================================\n";
    }
  }
 cout<<"\n===============================================================================\n";
} 

void nilai::proses(){ 
  for(int j=0; j<jml; j++){
    for(int i=0; i<jml_matkul; i++){
      nt[i] = ((tugas[i]*0.2) + (uts[i]*0.35 )+ (uas[i]*0.45));
  }
     cout<<"Nilai Rata-Rata "<<endl;
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
  cout<<"Nama : "<<setiosflags(ios::left)<<nama[0];
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
  cout<<"\n===============================================================================\n";
  cout<<"Nilai Rata-Rata : ";
  cout<<setiosflags(ios::left)<<"\t"<<setw(10)<<rata_tugas[0];
  cout<<setiosflags(ios::left)<<"\t"<<setw(10)<<rata_uts[0];
  cout<<setiosflags(ios::left)<<"\t"<<setw(10)<<rata_uas[0];
  cout<<setiosflags(ios::left)<<"\t"<<setw(10)<<na[0];
  cout<<"\n===============================================================================\n";

  cout<<"\n\n\n";
  
  cout<<"Nama : "<<setiosflags(ios::left)<<nama[1];
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
  cout<<"\n===============================================================================\n";
  cout<<"Nilai Rata-Rata : ";
  cout<<setiosflags(ios::left)<<"\t"<<setw(10)<<rata_tugas[1];
  cout<<setiosflags(ios::left)<<"\t"<<setw(10)<<rata_uts[1];
  cout<<setiosflags(ios::left)<<"\t"<<setw(10)<<rata_uas[1];
  cout<<setiosflags(ios::left)<<"\t"<<setw(10)<<na[1];
  cout<<"\n===============================================================================\n";
}
