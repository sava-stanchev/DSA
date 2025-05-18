/**
 * https://leetcode.com/problems/contains-duplicate/
 *
 * Time O(n) | Space O(n)
 *
 * hash set to get unique values in array,
 * to check for duplicates easily
 */
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> seen;
        for (int num : nums)
        {
            if (seen.count(num))
            {
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};
;