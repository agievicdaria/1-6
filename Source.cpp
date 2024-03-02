#include "LorryC.h"
#include <iostream>
using namespace std;

int main() {

    LorryC l;
    l.Read();
    cout << l.toString();

    const int lorrySize = 2;
    LorryC lorries[lorrySize];
    for (int i = 0; i < lorrySize; ++i) {
        lorries[i].Read();
    }
    for (int i = 0; i < lorrySize; ++i) {
        lorries[i].Display();
    }

}