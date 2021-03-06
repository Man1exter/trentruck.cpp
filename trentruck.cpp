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

printSTL(p1, " ");
auto p2(p1); // konstruktor kopiujacy z p1
printSTL(p1, " ");
printSTL(p2, " ");

pair<double,double>pd(p1); // przeslanie tego samego do kolejnej pary
printSTL(pd, " ");

cout << "pierwsza wartosc p1.first to : " << p1.first << endl;
cout << "druga wartosc p1.second to : " << p1.second << endl;

auto praw33 = make_pair(1661441,string("Hello from Man1exter"));
cout << "pierwsza wartosc praw33.first to ----------------> : " << praw33.first << endl;
cout << "druga wartosc praw33.second to --------------> : " << praw33.second << endl;

cout << endl;

auto hel5 = make_pair(29961,vector<string>{"Hello", "from", "Man1exter"});
cout << hel5.first << " <-------------- jego 2 index w tablicy: ------------> "<< hel5.second[2] << endl;

}


// c++17 -->

// void newCols(){

// pair pshort(string("Man1exter"), 100.99f);
// printSTL(pshort, " ");

// }

void perTrainDeque(){

    cout << " <-- <-- deque mode --> -->" << endl;

deque<string> location;
location.push_front("Kopalina");
location.push_front("Biskupice");
printSTL(location , " " , true);

cout << "Po dodaniu petli od 0 do 5 inkrementujac" << endl;

for(int i = 0; i < 5; i++){
    location.push_back("Man1exter");
}
printSTL(location , " " , true);

cout << "usuniecie 3 ostatnich" << endl;

for(int i = 0; i < 3; i++){
    location.pop_back();
}
printSTL(location , " " , true);

cout << " ile mozna wpakowac takich elementow: -------> " << location.max_size() << endl;

cout << endl;
cout << "wstawainie za 3 elementem wstaw ----> Wroclaw <-----" << endl;

location.insert(location.begin() + 3, "Wroclaw");
printSTL(location , " " , true);

cout << endl;

cout << "Wstawianie 2 razy Minkowice za 5 elementem" << endl;
location.insert(location.begin() + 5,2, "Minkowice");
printSTL(location , " " , true);

cout << endl;

cout << "ostateczny rezultat" << endl;
cout << "-------------------" << endl;
cout << "-------------------" << endl;
printSTL(location , " " , true);
cout << "-------------------" << endl;
cout << "-------------------" << endl;

}


int main(){

funcert();
funarr();
pairfuncter();
// newCols();
perTrainDeque();

    return 0;
}