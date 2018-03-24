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
    std::istrstream astr(argv[1]); // создание первого потока
    int a;
    astr >> a;



    std::istrstream bstr(argv[2]); // создание второго потока
    int b;
    bstr>>b;

    try{
        //Исключение недостаточного количесвто аргументов коммандной строки
        if(argc < 3) {
            throw std::length_error("not enough parameters");
        }


        // Проверка вводимых данных на то что это числа
        if(astr.fail() || !astr.eof()) {
            throw std::invalid_argument("a must be an integer");
        }

        // Проверка что а положительное число
        if(a <= 0) {
            throw std::out_of_range("a must be positive");
        }

        // Проверка что b положительное число
        if(b <= 0) {
            throw std::out_of_range("b must be positive");
        }

        if(a>=b){
            std::cerr <<"Число A больше B ";
        }


    }

    catch (std::exception const & e) {
    std::cerr << e.what() << std::endl;
    return 1;
    }
    showData(a,b);
    return 0;
}
