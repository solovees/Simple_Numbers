#include <iostream>
#include <strstream>
#include <lab3_prost.h>
#include <stdexcept>

using namespace std;

void showData(int a, int b){
    vector<int> lstShow = TwoNumber::getList(a, b);
    vector<int>::iterator it;
    for(it = lstShow.begin(); it != lstShow.end(); it++){
        cout<<*it<<endl;
    }
}

int main(int argc, char * argv[])
{

    try{

        if(argc != 3) {
            std::cerr <<"Количество параметров командной строки меньше допустимого";
            return 2;
        }

        std::istrstream astr(argv[1]); // создание первого потока
        int a;
        astr >> a;
        if(astr.fail()) {
            std::cerr << "Недопустимое значение A";
            return 3;
        }

        std::istrstream bstr(argv[2]); // создание второго потока
        int b;
        bstr>>b;

        if(astr.fail()) {
            std::cerr << "Недопустимое значение B";
            return 4;
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




        return 0;
    }

    catch (std::exception const & e) {
    std::cerr << e.what() << std::endl;
    return 1;
}
}
