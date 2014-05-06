#!/usr/bin/env python
# coding: utf-8

"""Python snippet
"""

import os
import sys

if __name__ == '__main__':
    if len (sys.argv) == 1:
        print ("Hi there!")
    elif len (sys.argv) == 2:
        print ("Hello, %s!" % sys.argv[1])
    else:
        print ("Usage: [python] %s nickname" % sys.argv[0])
