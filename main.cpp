#include <iostream>
using namespace std;

int main() {
    
    cout << 1 << endl;
    goto link; //начало пропуска кода | beginning of skipping a code
    cout << 2 << endl; //Не выполняеться | Not being executed
    
    cout << 3 << endl; //Не выполняеться | Not being executed
    link://ссылка где продолжить код | link where to continue the code
    cout << 4 << endl;

    cout << 5 << endl;
    
}
