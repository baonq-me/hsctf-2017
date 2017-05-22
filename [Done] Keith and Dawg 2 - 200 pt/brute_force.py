import hashlib
import itertools
import string
import sys

listletter = 'qwerty'

def dosethestringexisit(target, size):
    for xs in itertools.product(listletter, repeat=size):
        s = ''.join(xs)
        if hashlib.md5(s).hexdigest() == target:
            print s
            sys.exit(0)

for len in range(1, 10):
    dosethestringexisit('b81b28baa97b04cf3508394d9a58caae', len)