#include <iostream>
#include <string>
#include <algorithm>
bool ValidAnagram(std::string s,std::string t){
    return s.size() == t.size() && (sort(s.begin(),s.end()),sort(t.begin(),t.end()),s == t);
}
int main (){
    std::cout<<std::boolalpha;
    std::cout << ValidAnagram("racecar", "carrace") << std::endl;
    return 0;
}