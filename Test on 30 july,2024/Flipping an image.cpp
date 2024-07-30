//832.Flipping an image
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();

        for (int i = 0; i < n; ++i) {
            int left = 0, right = n - 1;
            while (left <= right) {
                // Swap and invert the elements
                if (left == right) {
                    image[i][left] = 1 - image[i][left];
                } else {
                    int temp = image[i][left];
                    image[i][left] = 1 - image[i][right];
                    image[i][right] = 1 - temp;
                }
                left++;
                right--;
            }
        }

        return image;
    }
};
