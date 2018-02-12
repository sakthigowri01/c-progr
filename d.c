#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <string>
#include <time.h>

std::string gen_random() {
    size_t len = rand() % 25 + 5;

    std::string x;

    std::generate_n(std::back_inserter(x), len, rand);
    return x;
}

static const int num = 10000000;

int main(){
   
    
    return 0;
}
