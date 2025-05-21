#include <iostream>
#include "SetPrint.h"
using namespace std;

int a = 10;//全局变量
void fun(int num, int current);

int main()
{
    int a = 10;//局部变量
    cout<<printFf(1, 2)<<endl;
    fun(1,200);
}

void fun(int num,int current) {
    if (num>current)
        return;
    cout << num << ",";
    fun(num + 1, current);
}



