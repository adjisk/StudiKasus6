#include <iostream>
using namespace std;

class nilai{

  public:
    void input();
    void proses();
    void output();

  private:
    char nama[20];
    string matkul[5];
    int uts[5], uas[5], tugas[5], nt, jml;
    float na[5], rata_tugas[5], rata_uts[5], rata_uas[5], rata[5];
  
};