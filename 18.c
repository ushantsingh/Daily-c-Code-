#include <stdio.h>
int min(int a, int b)
{
    return (a < b) ? a : b;
}

int main()
{
    int height[] = {3, 0, 2, 0, 4};
    int n = sizeof(height) / sizeof(height[0]);
    int water = 0;
    for (int i = 0; i < n; i++)
    {
        int leftMax = height[i];
        int rightMax = height[i];

        for (int j = 0; j < i; j++)
        {
            if (height[j] > leftMax)
            {
                leftMax = height[j];
            }
        }

        for (int j = i + 1; j < n; j++)
        {
            if (height[j] > rightMax)
            {
                rightMax = height[j];
            }
        }

        int trapped = min(leftMax, rightMax) - height[i];
        if (trapped > 0)
        {
            water += trapped;
        }
    }
    printf("Total Trapped water = %d\n", water);
    return 0;
}