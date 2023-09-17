#include <iostream>
#include <string>

std::string reverse(const std::string& str){
    std::string _str = str;
    if (_str.size() > 1){
        return reverse(_str.substr(1, _str.size()-1)).append(_str.substr(0,1));
    }
    
    else return _str;
}

int main(){
    std::string mystr = "abcd";
    mystr = reverse(mystr);
    std::cout << mystr << std::endl;
}