#!/usr/bin/python

import numpy as np
from scipy.misc import imread, imsave

img1 = imread("logo.png")
img2 = imread("changed.png")

img3 = img2

for i in range(img2.shape[0]):
    for j in range(img2.shape[1]):
        img3[i][j] = (img1[i][j] ^ img2[i][j])
        if (img3[i][j].all()):
            img3[i][j] = [255, 255, 255]
    

imsave("flag.png", img3)