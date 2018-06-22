
#include "Sample.hpp"

namespace sample 
{

Sample::Sample() {
    auto s = "Sample project!!\n";
    std::cout << "Ctor:" << s;
}

Sample::~Sample() {
    std::cout << "Dtor\n";
}

};