#include <iostream>


int main()
{
    int a = 0;
    int sum = a;

    std::cout << "Please input integers to be added together: " << std::endl;
    while(std::cin >> a)
    {
        sum += a;
    }

    std::cout << "The sum of the inputs is " << sum;
}