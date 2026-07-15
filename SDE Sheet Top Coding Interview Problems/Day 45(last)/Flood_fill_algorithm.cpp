//Flood fill algorithm
/* An image is represented by a 2-D array of integers, each integer representing the pixel value of the image. Given a coordinate (sr, sc) representing the starting pixel (row and column) of the flood fill, and a pixel value newColor, "flood fill" the image.
   To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same colour as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same colour as the starting pixel), and so on. Replace the colour of all of the aforementioned pixels with the newColor.
*/
class Solution {
public:
    void dfs(vector<vector<int>>& image, int r, int c,
             int oldColor, int newColor) {
        int n = image.size();
        int m = image[0].size();
        if (r < 0 || r >= n || c < 0 || c >= m)
            return;
        if (image[r][c] != oldColor)
            return;
        image[r][c] = newColor;
        dfs(image, r + 1, c, oldColor, newColor);
        dfs(image, r - 1, c, oldColor, newColor);
        dfs(image, r, c + 1, oldColor, newColor);
        dfs(image, r, c - 1, oldColor, newColor);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image,
        int sr, int sc, int newColor) {

        int oldColor = image[sr][sc];

        // No change needed
        if (oldColor == newColor)
            return image;

        dfs(image, sr, sc, oldColor, newColor);

        return image;
    }
};