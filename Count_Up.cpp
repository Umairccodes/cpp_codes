#include <iostream>
#include <chrono>

int main()
{
    // Disable output buffering
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 1; i <= 100000; i++)
    {               
        std::cout << i << '\n';
    }
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed_seconds = end - start;

    std::cout << "Loop completed in: " << elapsed_seconds.count() << "s" << std::endl;
}