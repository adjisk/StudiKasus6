#include "../base.h"
using namespace std;

void nilai::proses(){
  int uts[5], uas[5], tugas[5], i, jml;
  float na, rata_tugas, rata_uts, rata_uas, rata, nt;
  jml=2;
  uts[1]=90;
  uas[1]=80;
  tugas[1]=100;

  for(int i=1; i<n; i++){
  na = (0.2*tugas[i])+(0.35*uts[i])+(0.45*uas[i]);
  nt += na; 
  cout<<"Nilai Akhir : "<<na<<endl;
  rata = nt/i;
  cout<<"Rata-rata nilai : "<<rata<<endl;
  }
  for(int i=1; i<2; i++){
  rata_tugas += tugas[i]/i;
    cout<<"Rata tugas : "<<rata_tugas<<endl<<endl;

  rata_uts += uts[i]/i;
    cout<<"Rata uts : "<<rata_uts<<endl<<endl;

  rata_uas += uas[i]/i;
    cout<<"Rata uas : "<<rata_uas<<endl<<endl;
    }

}

  
int main (){
  nilai kuliah;
  kuliah.proses();
}
  