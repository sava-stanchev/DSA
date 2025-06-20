public class Solution
{
    public int MaxArea(int[] height)
    {
        int l = 0;
        int r = height.Length - 1;
        int res = 0;

        while (l < r)
        {
            int area = Math.Min(height[l], height[r]) * (r - l);
            res = Math.Max(area, res);

            if (height[l] <= height[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }

        return res;
    }
}