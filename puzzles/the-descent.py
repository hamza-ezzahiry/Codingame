##
#  # author: SpiderX
#   ##

import sys
import math
while True:
    m = 0
    index = 0
    for i in range(8):
        mountain_h = int(input())
        if mountain_h > m:
            m = mountain_h
            index = i
    print(index)
