// Section 20
// Challenge 1
// Identifying palindrome strings using a deque
#include <cctype>
#include <algorithm>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>


bool is_palindrome(const std::string& s)
{
    std::deque<char> d;
    char front{};
    char back{};
    for(char c:s){
        if(std::isalpha(c)){
            d.push_back(std::toupper(c));
        }
    }
    
    while(d.size()>1){
        front = d.front();
        d.pop_front();
        back = d.back();
        d.pop_back();
        if(front != back){
            return false;
        }
    }
    return true;
}

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar",
        "bob", "ana", "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };

 
    std::cout << std::boolalpha;
    
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    
    std::cout << std::endl;
    return 0;
}