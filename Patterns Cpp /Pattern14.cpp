#include <iostream>

int main() {
    int a = 1, n = 4;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << a;
            a = a + 1;
        }
        std::cout << "\n";
    }
    
    return 0;
}
