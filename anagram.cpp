#include <iostream>
#include <string>
#include <algorithm>

std::string ana = "cinema";
std::string gram = "iceman";

auto main()-> int{
    std::sort(ana.begin(), ana.end());
    std::sort(gram.begin(), gram.end());

    std::cout << ((ana == gram) ? "Yes" : "No") << std::endl;
}