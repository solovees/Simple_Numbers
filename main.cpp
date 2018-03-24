#include <iostream>
#include <strstream>
#include <lab3_prost.h>

using namespace std;

void showData(int a, int b){
    vector<int> lstShow = TwoNumber::getList(a, b);
    vector<int>::iterator it;
    for(it = lstShow.begin(); it != lstShow.end(); it++){
        cout<<*it<<endl;
    }
}

enum error_code {
    no_error = 0,
    not_enough_arguments = 1,
    invalid_type = 2,
    invalid_value = 3
};

int main(int argc, char * argv[])
{



    if(argc != 3) {
        std::cerr <<"Количество параметров командной строки меньше допустимого";
        return not_enough_arguments;
    }

    std::istrstream astr(argv[1]); // создание первого потока
    int a;
    astr >> a;
    if(astr.fail()) {
        std::cerr << "Недопустимое значение A";
        return invalid_type ;
    }

    std::istrstream bstr(argv[2]); // создание второго потока
    int b;
    bstr>>b;

    if(astr.fail()) {
        std::cerr << "Недопустимое значение B";
        return invalid_value;
    }


    if(a>=b){
        std::cerr <<"Число A больше B ";
    }


    if(a<=0){
        std::cerr <<"Число A отрицаетльное или ноль";
    }


    if(b<=0){
        std::cerr <<"Число B отрицательное или ноль";
    }


    showData(a,b);
    return no_error;
}
