//nested if
//percabangan bersarang
//if didalam if 

#include <iostream>
using namespace std;
int main ()
{
    int nilai;
    if (nilai % 2 == 0) {
        cout<<"Bilangan Genap"<<endl;
        if(nilai <10){
            cout<<"Bilangan Genap kurang dari 10"<<endl;
        }
        else {
            cout<<"Bilangan Genap lebih dari 10"<<endl;
        }
    return 0;
}
else {
    cout<<"Bilangan Ganjil"<<endl;
    if (nilai <10) {
        cout<<"Bilangan ganjil kurang dari 10"<<endl;
    }
    else{
        cout<<"Bilangan Ganjil lebih dari 10"<<endl;
    }
}
}
