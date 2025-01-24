class Solution(object):
    def flipAndInvertImage(self, image):
        for row in image:
            row.reverse()

        for i in range(len(image)):
            for j in range(len(image[i])):
                image[i][j] = 1 - image[i][j]  

        return image
        