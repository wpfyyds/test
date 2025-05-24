#include <iostream>
#include <string>
#include <vector>
using namespace std;
//这是一个简单的命令行参数解析器,是实现一个处理命令行参数的工具，支持短选项、长选项和参数值
//argc表示参数的个数，包括程序名本身
//argv是一个指向字符数组的指针数组，每个字符数组存储一个命令行参数。
//argv[0]通常是程序的名称，后面的元素依次是用户输入的参数。
int main(int argc,char* argv[])
{
    for (int i = 1; i < argc; i++) {//遍历argv[]数组
        string param = argv[i];
        if (param[0] == '-' && param.length() > 1) {//判断是否为短选项
           //对于短选项，如`-h`（帮助）、`-v`（版本）等，可以根据选项字符执行相应的操作。
            if (param.length() == 2) {//短选项
                char option = param[1];
                if (option == '-h') {
                    cout << "Help information:" << endl;
                    cout << "This is a command line parameter parser." << endl;
                    cout << "Options:" << endl;
                    cout << "  -h    Show help information" << endl;
                    cout << "  -v    Show version" << endl;
                    cout << "  -o    Specify output file" << endl;
                }
                else if (option == 'v') {
                    cout << "Version 1.0" << endl;
                }
                else if (option == 'o') {

                }
            }
        }
    }
    return 0;
}


