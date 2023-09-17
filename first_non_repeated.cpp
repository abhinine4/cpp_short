#include <iostream>
#include <string>

std::string mystr = "aaaaaaabccccccc";

int main(){
    int i;
    for(i=0; i<mystr.size()-1; ++i){
        if(mystr[i] != mystr[i+1]) break;
    }
    std::cout<<mystr[i+1]<<std::endl;
}