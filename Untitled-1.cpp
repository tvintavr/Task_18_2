#include <iostream>
#include <limits>
#include <cmath>

int rekurs(const int &n, const int &k = 3) {
    if (n <= 1) {
        return 1;
    }
    
    int lot = 0;
    for (int i = 1; i <= k && i <= n; i++) {
        lot += rekurs(n - i, k);
    }
    
    return lot;
}

int main() {

    std::cout<<"Input steps amount: ";
    int n;
    std::cin>>n;

    while (n<1 || std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout<<"Input correct steps amount: ";
        std::cin>>n;
    }

    std::cout<<"Input highest jump: ";
    int k;
    std::cin>>k;

    while (k<1 || std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout<<"Input correct highest jump: ";
        std::cin>>k;
    }
    int lot=0;
    
    if (k<n) {
        lot=rekurs(n,k);
    } else {
        lot=rekurs(n,n);
    }

    std::cout <<"Number of ways: "<< lot << std::endl;



}