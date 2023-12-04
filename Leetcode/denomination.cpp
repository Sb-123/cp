#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace;

int countWaysToMakeSum(int targetSum)
{
    // Initialize a vector to store the count of ways for each sum from 0 to targetSum
    vector<int> ways(targetSum + 1, 0);

    // There is 1 way to make a sum of 0 (by not selecting any coin)
    ways[0] = 1;

    // Iterate through each coin denomination
    std::vector<int> denominations = {1, 3, 4};
    for (int coin : denominations)
    {
        // Update the ways vector based on the current coin denomination
        for (int i = coin; i <= targetSum; ++i)
        {
            ways[i] += ways[i - coin];
        }
    }

    // The final element of the ways vector contains the total number of ways to make the target sum
    return ways[targetSum];
}

int main()
{
    // Test the function with a target sum of 7
    int result = countWaysToMakeSum(7);

    std::cout << "Total number of ways to make a sum of 7: " << result << std::endl;

    return 0;
}
