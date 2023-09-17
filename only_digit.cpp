#include <iostream>
#include <string>
#include <algorithm>

std::string str = "012345678774829506432X";
std::string numset = "0123456789";
std::string::iterator it = numset.begin();

auto main()->int{
    for(auto& el : str){
        it = std::find(numset.begin(), numset.end(), el);
        if(it == numset.end()){
            std::cout <<"element out of set found"<< std::endl;
        }
    }
}