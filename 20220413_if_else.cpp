#include <iostream>
using namespace std;

int main (){
        /*
        jika nilai >=90 Sangat Memuaskjan
        jika nilai >=80 Memuaskan
        jika nilai >=75 cukup
        nilai <75 Tidak Lulus 
        
        
        */
        int nilai;
        string keterangan;
        cout<<"Masukkan Nilai = ";cin>>nilai;
        
    if (nilai >100 || nilai<0){
            keterangan = "Diluar_Jangkauan";
        }
    else if (nilai <0){
        cout<<"Diluar_jangkauan";
        }
    else if (nilai >100){
        cout<<"Diluar jangkauan";
    }
    else if (nilai >=90){
        cout<<"Sangat_Memuaskan";
    }
    else if (nilai >=80){
        cout<<"Memuaskan";
    }
       else if (nilai >=75){
        cout<<"Cukup";
    }
     else if (nilai<75){
        cout<<"Tidak_Lulus";
    }
return 0;
}
