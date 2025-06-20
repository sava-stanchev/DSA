public class Solution
{
    public IList<IList<int>> ThreeSum(int[] nums)
    {
        Array.Sort(nums);
        IList<IList<int>> res = new List<IList<int>>();

        for (int i = 0; i < nums.Length; i++)
        {
            if (nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int l = i + 1;
            int r = nums.Length - 1;

            while (l < r)
            {
                int sum = nums[i] + nums[l] + nums[r];

                if (sum > 0)
                {
                    r--;
                }
                else if (sum < 0)
                {
                    l++;
                }
                else
                {
                    res.Add(new List<int> { nums[i], nums[l], nums[r] });
                    l++;

                    while (l < r && nums[l] == nums[l - 1])
                    {
                        l++;
                    }
                }
            }
        }

        return res;
    }
}