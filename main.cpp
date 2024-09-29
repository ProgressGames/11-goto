#include <iostream>
using namespace std;

int main() {
    
    cout << 1 << endl;
    goto link; //начало пропуска кода
    cout << 2 << endl; //Ќе выполн€етьс€
    
    cout << 3 << endl; //Ќе выполн€етьс€
    link://ссылка где продолжить код
    cout << 4 << endl;

    cout << 5 << endl;
    
}