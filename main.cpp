#include "Menu.cpp"
#include <locale.h>
#include <iostream>

int main() {
    setlocale(LC_ALL, "Spanish");
    cout << "Inicializando .." << endl;
    Menu menu;
    
    menu.Menu();
    
    return 0;
}

