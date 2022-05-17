#include <iostream>
using namespace std; 
int main(){
 /*
jika nilai >=90 sangat memuaskan 
jika nilai >=80 memuaskan 
jika nilai >=75 cukup 
jika nilai <=75 tidak lulus 

*/
 int nilai; string keterangan;
 cout<<"masukan nilai = ";cin>>nilai; 

if (nilai >100 || nilai <0){ 
  keterangan = "diluar_jangkauan";
 } 
else if (nilai >= 90) { 
  keterangan = "Sangat_memuaskan";
 } 
else if (nilai >=80) { 
  keterangan = "memuaskan"; 
} 
else if (nilai >=75) keterangan = "cukup"; 
  else { keterangan = "tidak lulus"; 
} 
cout<<keterangan; 

return 0;

} 


