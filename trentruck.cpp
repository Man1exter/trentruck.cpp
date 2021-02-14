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
}


int main(){

funcert();
funarr();

    return 0;
}