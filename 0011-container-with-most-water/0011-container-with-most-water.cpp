class Solution {
public:
    // Use two pointer to solve the prolem - Left and Right
    // Starting at the boundary of each pointer 
    // The next step is move the pointer that has a shorter value in height[<pointer>] - use int max to compare and return
    int maxArea(vector<int>& height) {
        int Left = 0, Right = height.size() - 1, max = 0;
        while(Left < Right) {
            int Width = Right - Left;
            int Height = min(height[Left], height[Right]);
            if(Width*Height > max) max = Width*Height;
            (height[Left] < height[Right]) ? Left++ : Right--;
        }
        return max;
    }
};