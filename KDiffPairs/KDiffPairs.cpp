// KDiffPairs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int KDiffPairs(const std::vector<int>& arr, int k)
{
    int count = 0;
    for (auto i = arr.cbegin(); i != arr.cend() - 1; ++i)
    {
        for (auto j = i + 1; j != arr.cend(); ++j)
        {
            if (*j - *i == k)
            {            // if duplicates is not allowed in the array, we should break from this loop here
                        //  because this array is sorted
                ++count;
                //break;
            }
            else if (*j - *i > k) // because the array is sorted
                break;
        }
    }

    return count;
}

int main()
{
    while (true)
    {
        int count = 0;
        std::cout << "Number of elements in the array: ";
        std::cin >> count;
        if (count == 0)
            break;

        std::vector<int> vec(count);
        std::cout << "The numbers of the sorted array: ";
        for (int i = 0; i < count; ++i)
            std::cin >> vec[i];

        int k;
        std::cout << "The number to find difference of: ";
        std::cin >> k;

        std::cout << "The number of unique pairs which have a difference of k is: " << KDiffPairs(vec, k) << std::endl << std::endl;
    }
}
