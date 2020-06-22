
// Example program
#include <iostream>
#include <vector>
#include <ranges>

int main() {
    const std::vector<std::string> vec({"c", "dddddddd", "aaaa", "bb"});
    const auto v = vec | std::views::transform([] (const std::string &f){ return f.size(); });
    for(auto i : v)
         std::cout << i << ' ';
    std::cout << '\n';
    return 0;
}
