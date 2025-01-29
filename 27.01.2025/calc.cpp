#include <iostream>
#include <cmath>
#include <iostream>
#include <cmath>
int main() {
    double a, b;
    char c;
    std::cin>>a;
    std::cin>>c;
    std::cin>>b;
    
    switch (c){
        case '+':
            std::cout<<a+b<<'\n';
            break;
        case '-':
            std::cout<<a-b<<'\n';
            break;
        case '/':
            std::cout<<a/b<<'\n';
            break;
        case '*':
            std::cout<<a*b<<'\n';
            break;
    }
    return 0;
}
