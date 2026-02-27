#include <iostream>
#include <cstdlib>

int main() {
    const char* name = std::getenv("HOSTNAME");
    std::cout << "Content-Type: text/plain\n\n";
    std::cout << "Served by backend: " << (name ? name : "unknown") << std::endl;
    return 0;
}
