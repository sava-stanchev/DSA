public class Solution
{
    public IList<string> GenerateParenthesis(int n)
    {
        List<char> stack = new List<char>();
        List<string> res = new List<string>();

        void Backtrack(int openN, int closeN)
        {
            if (openN == closeN && openN == n)
            {
                res.Add(new string(stack.ToArray()));
                return;
            }

            if (openN < n)
            {
                stack.Add('(');
                Backtrack(openN + 1, closeN);
                stack.RemoveAt(stack.Count - 1);
            }

            if (closeN < openN)
            {
                stack.Add(')');
                Backtrack(openN, closeN + 1);
                stack.RemoveAt(stack.Count - 1);
            }
        }

        Backtrack(0, 0);
        return res;
    }
}