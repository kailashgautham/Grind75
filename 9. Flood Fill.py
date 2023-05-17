class Solution(object):
    def floodFill(self, image, sr, sc, color):
        """
        :type image: List[List[int]]
        :type sr: int
        :type sc: int
        :type color: int
        :rtype: List[List[int]]
        """
        checkColor = image[sr][sc]
        image[sr][sc] = color
        if (sr - 1) >= 0 and image[sr - 1][sc] == checkColor and image[sr - 1][sc] != color:
            self.floodFill(image, sr - 1, sc, color)
        if (sc - 1) >= 0 and image[sr][sc - 1] == checkColor and image[sr][sc - 1] != color:
            self.floodFill(image, sr, sc - 1, color)
        if (sr + 1) < len(image) and image[sr + 1][sc] == checkColor and image[sr + 1][sc] != color:
            self.floodFill(image, sr + 1, sc, color)
        if (sc + 1) < len(image[0]) and image[sr][sc + 1] == checkColor and image[sr][sc + 1] != color:
            self.floodFill(image, sr, sc + 1, color)
        return image