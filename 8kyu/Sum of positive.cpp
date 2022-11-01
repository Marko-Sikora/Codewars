// DESCRIPTION:
// You get an array of numbers, return the sum of all of the positives ones.

// Example [1,-4,7,12] => 1 + 7 + 12 = 20

#include <vector>

int positive_sum(const std::vector<int> arr)
{
    int sum = 0;
    for (int i : arr)
    {
        if (i > 0)
        {

            sum = sum + i;
        }
    }

    return sum;
}