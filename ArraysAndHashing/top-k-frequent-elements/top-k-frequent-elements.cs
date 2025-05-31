public class Solution
{
    public int[] TopKFrequent(int[] nums, int k)
    {
        Dictionary<int, int> count = new Dictionary<int, int>();
        List<int>[] bucket = new List<int>[nums.Length + 1];

        for (int i = 0; i < bucket.Length; i++)
        {
            bucket[i] = new List<int>();
        }

        foreach (int n in nums)
        {
            if (count.ContainsKey(n))
            {
                count[n]++;
            }
            else
            {
                count[n] = 1;
            }
        }

        foreach (var entry in count)
        {
            bucket[entry.Value].Add(entry.Key);
        }

        int[] res = new int[k];
        int index = 0;

        for (int i = bucket.Length - 1; i > 0 && index < k; i--)
        {
            foreach (int n in bucket[i])
            {
                res[index++] = n;
                if (index == k) return res;
            }
        }

        return res;
    }
}