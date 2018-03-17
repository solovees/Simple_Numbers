#include <iostream>
#include <lab3_prost.h>

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
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    showData(a,b);
    return 0;
}
