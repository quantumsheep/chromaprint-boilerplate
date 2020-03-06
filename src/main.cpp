#include <chromaprint.h>
#include <iostream>

using namespace chromaprint;

int main()
{
    std::cout << "Hello, Chromaprint!" << std::endl;
    std::cout << "Version: " << chromaprint_get_version << std::endl;

    return 0;
}
