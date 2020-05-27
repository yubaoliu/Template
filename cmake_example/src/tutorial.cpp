#include "include/TutorialConfig.h"
#include <iostream>

int main(int argc, char** argv)
{

    if (argc < 2) {
        // report version
        std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
                  << Tutorial_VERSION_MINOR << std::endl;
        std::cout << "Usage: " << argv[0] << " number" << std::endl;

        std::cout << "Hello World!" << std::endl;
        return 1;
    }
    else
    {
        const double inputValue = std::stod(argv[1]);
        std::cout << inputValue << std::endl;
    }
}
