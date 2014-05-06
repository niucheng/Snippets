#!/usr/bin/env python
# coding: utf-8

"""Python snippet
"""

import os
import sys

if __name__ == '__main__':
    if len (sys.argv) == 1:
        print ("Hi there!")
    else:
        print ("Hello, %s!" % sys.argv[1])
