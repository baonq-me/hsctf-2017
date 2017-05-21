from hashlib import *
from base64 import *

#xydj: vbqw edbo sedjqydi sqfyjqb bujjuhi qdt dkcruhi qdt de ifusyqb sxqhqsjuhi
# Quay toi 10 ki tu trong bang ma Caesar (https://planetcalc.com/1434/) ta duoc
# hint: flag only contains capital letters and numbers and no special characters

FLAG = b'{insert flag here}'  # Encode base64 nguoc tro lai, base64(NVL7OA) = TlZMN09B (flag day roi)
FLAG = b64decode(FLAG) # NVL7OA

def main():
    n = ''
    n += md5(FLAG).hexdigest()
    n += sha1(FLAG).hexdigest()
    n += sha224(FLAG).hexdigest()
    n += sha256(FLAG).hexdigest()
    n += sha384(FLAG).hexdigest()
    n += sha512(FLAG).hexdigest()

    if b64encode(n.encode()) == b'NGY3OTgwN2E3YzQ3ZjY5N2JkNWYwNmJlZWY5NTVjZmRmNGZkYWVmOGFkZThlZGY3MDc4NThmZTQyOTRkNzgwZDY5ZDRkNmE4OTdkODU5OGNlMzE0MmQyMDc2NDBjYTUxZDgyMTVkMGQ2YzY5Mzg3M2ZkMzJjMWY2ZTQ2ODc1MDAyN2I1ZGIzNGI3ZDljZTBhNzk3NTNlY2M3M2RhNjY0YTk5NTg4OWUwZDM2ZGI0YmZjNjhkZjlmYzhkYTNkMzY5YjI2NmU2MTdhNjE1OGQxNmNjYWQ0MTg5ZjBhM2RjYWU2MmQ5YjEwM2I1MGIwZDQzMzdjOTYxNjM0NzFiNDIzZmMyOGYzY2RhMjk0MTdiNzI4MGViOTMyMTQ5MjA3NWM1ODkwZGMwMzM0NzFjZjkxNzgxYTA3MDAxY2VhNjY5NmIzMmNkZjU2YjIxMjliYzc2YTgzMjE4YmVlNTJjODMwYThiZmMwOWVjNTVhZTM3MjExMGMwY2M4OTUwZWY1NzdkMzJlZDIxMWQ0MDMwN2MzZmQ2Njg0MTEzMzQxZTYwM2M=':
    # base64decode cai @*&(*@%& tren ta duoc
    #4f79807a7c47f697bd5f06beef955cfdf4fdaef8ade8edf707858fe4294d780d69d4d6a897d8598ce3142d207640ca51d8215d0d6c693873fd32c1f6e468750027b5db34b7d9ce0a79753ecc73da664a995889e0d36db4bfc68df9fc8da3d369b266e617a6158d16ccad4189f0a3dcae62d9b103b50b0d4337c96163471b423fc28f3cda29417b7280eb9321492075c5890dc033471cf91781a07001cea6696b32cdf56b2129bc76a83218bee52c830a8bfc09ec55ae372110c0cc8950ef577d32ed211d40307c3fd6684113341e603c
    #n += sha512(FLAG).hexdigest()   -> bo ra 512/4 ki tu
    #n += sha384(FLAG).hexdigest()   -> bo ra 384/4 ki tu
    #n += sha256(FLAG).hexdigest()   -> bo ra 256/4 ki tu
    #n += sha224(FLAG).hexdigest()   -> bo ra 224/4 ki tu
    #n += sha1(FLAG).hexdigest()     -> bo ra 160/4 ki tu
    #n += md5(FLAG).hexdigest()		 -> bo ra 120/4 ki tu
    # Con lai md5: 4f79807a7c47f697bd5f06beef955cfd
    # Crack bang https://hashkiller.co.uk/md5-decrypter.aspx -> NVL7OA -> Input truyen vao ham main
    #
        print('Correct flag!')
    else:
        print('Incorrect flag :(')

main()
