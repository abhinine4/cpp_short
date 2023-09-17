#include <iostream>
#include <string>
#include <set>

std::string mystr = "hello world";
std::string yourstr = "nobye world";
std::set<char> myset;

auto main()->int{
    int i, j;
    for(i=0; i<mystr.size()-1; ++i){
        for(j = i+1; j< yourstr.size(); ++j){
            if(mystr[i] == yourstr[j]){
                myset.insert(mystr[i]);
            }
        }
    }

    for(char el: myset){
        std::cout<<el<<std::endl;
    }
}