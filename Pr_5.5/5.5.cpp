#include <iostream>


void G(int a, int b, int c, int m, int V1, int V2, int n) 
{

    for (int i = 0; i < n; i++) {
        int Vi = (a * V1 + b * V2 + c) % m;
        std::cout << Vi << " ";
        V2 = V1;
        V1 = Vi;

    }
    return;
    std::cout << std::endl;
}

int main() 
{
    int a = 7;
    int b = 3;
    int c = 5;
    int m = 100;


    int V1 = rand();
    int V2 = rand();


    int n = 10;

  
    G (a, b, c, m, V1, V2, n);

    return 0;
}