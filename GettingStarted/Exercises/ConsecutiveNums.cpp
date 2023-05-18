#include <iostream>

int main()
{
    int currVal = 0, val = 0;

    if(std::cin >> currVal)
    {
        int count = 1;
        while(std::cin >> val)
        {
            if(currVal == val)
                count++;
            else
            {
                // reset count to 1. set currVal = val
                std::cout << currVal << " occurs " << count << " time(s)." << std::endl;
                count = 1;
                currVal = val;
            }
        }
        std::cout << currVal  << " occurs " << count << " times(s)." << std::endl;
    }
}