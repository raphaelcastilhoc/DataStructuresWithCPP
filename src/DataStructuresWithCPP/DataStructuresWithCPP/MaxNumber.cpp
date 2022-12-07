#include "MaxNumber.h"

long MaxNumber::run(vector<int> numbers)
{
    if (numbers.size() == 1)
    {
        return numbers.front();
    }

    vector<int> new_numbers(numbers.begin() + 1, numbers.end());
    auto maxNumber = run(new_numbers);

    if (numbers.front() > maxNumber)
    {
        return numbers.front();
    }
    else
    {
        return maxNumber;
    }
}
