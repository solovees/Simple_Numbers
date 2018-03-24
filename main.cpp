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

enum error_code {
    no_error = 0,
    not_enough_arguments = 1,
    invalid_type = 2,
    invalid_value = 3
};

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

        // Проверка вводимых данных на то что это числа
        if(bstr.fail() || !bstr.eof()) {
            throw std::invalid_argument("b must be an integer");
        }

        // Проверка что а положительное число


        showData(a,b);
        return no_error;
    } catch (std::exception const & e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
}
