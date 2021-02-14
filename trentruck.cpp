#include <iostream>
#include <array>
#include <vector>
#include <map>
#include <set>
#include <typeinfo>
#include <string>
#include <ctime>
#include <algorithm>
#include <deque>
#include <functional>
#include <typeinfo>
#include "numbers.h"

using namespace std;


void funcert(){
    int podawana;

    cout << "Podaj liczbe" << endl;
    cin >> podawana;

if(int numbers = podawana + 5; numbers > 2){
    cout << " true " << numbers << endl;
} else {
    cout << " false " << numbers << endl;
}
cout << endl;
}

void funarr(){
array<int, 5> liczby{1,3,6,8,9};

for(int i = 0; i < liczby.size(); i++){
    cout << i << " -- " << liczby[i] << endl;
}

for(auto e: liczby) cout << "liczba w tablicy: " << e << endl;


cout << "liczby.at(0) ----> " << liczby.at(0) << endl;
cout << "liczby.at(1) ----> " << liczby.at(1) << endl;
cout << "liczby.front() ----> " << liczby.front() << endl;
cout << "liczby.back() ----> " << liczby.back() << endl;

printSTL(liczby , " " , true);

}

void pairfuncter(){

pair<int,int> p1(50,100);
cout << "typ id: "<< typeid(p1).name() << endl;

auto p2(p1); // konstruktor kopiujacy z p1
printSTL(p2, " ");
printSTL(p1, " ");

pair<double,double>pd(p1); // przeslanie tego samego do kolejnej pary
printSTL(pd, " ");

}

int main(){

funcert();
funarr();
pairfuncter();

    return 0;
}