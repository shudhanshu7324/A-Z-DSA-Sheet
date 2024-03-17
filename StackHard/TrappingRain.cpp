// brute force
// time complexity o(n)^2
// space o(1)
int trap(vector<int> &height)
{
    int ans = 0;
    for (int i = 0; i < height.size(); i++)
    {
        int leftMax = 0;
        int rightMax = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if (height[j] > leftMax)
            {
                leftMax = height[j];
            }
        }
        for (int k = i + 1; k < height.size(); k++)
        {
            if (height[k] > rightMax)
            {
                rightMax = height[k];
            }
        }

        int maxHeight = min(leftMax, rightMax);
        if (maxHeight - height[i] > 0)
            ans += maxHeight - height[i];
    }

    return ans;
}

// better solution using prefix and suffix sum
// time complexity o(n)+o(n)+o(n) = o(n)
// space complexity o(2n)
