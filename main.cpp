#include <iostream>
using namespace std;

int pangkat(int angka, int pangkatberapa) {
    /*angka^pangkatberapa*/
    int result = 1;
    for (int i = 0; i < pangkatberapa; i++) {
        result *= angka;
    }
    return result;
}

int faktorial(int faktorial){
    /*angka!*/
    int result = 1;
    for (int i = 0; i < faktorial; i++){
       result *= (faktorial-i);
    }
    return result;
}

int permutasi(int angka1, int angka2) {
    /*angka1 P angka2*/
    int result;
    result = faktorial(angka1)/faktorial(angka1-angka2);
    return result;
}

int kombinasi(int angka1, int angka2) { 
    /*angka1 C angka2*/
    int result;
    result = faktorial(angka1)/(faktorial((angka1-angka2))*faktorial(angka2));
    return result;
}

int main() {
    cout << kombinasi(5,3) << endl;
}
