def rot_R(num , num_rot , num_bits):
    if num > 2**num_bits - 1:
        print("Overflow occured.")
        pass
    else:
        rot_num = num % 2**(num_rot)
        rot_R_n = ( num >> num_rot) + (rot_num << (num_bits - num_rot))
        return rot_R_n


def rot_L(num , num_rot , num_bits):
    if num > 2**num_bits - 1:
        print("Overflow occured.")
        pass
    else:
        rot_num = int(num / 2**( num_bits - num_rot ))
        num_1 = num << num_rot
        num_edit = num_1 & (2**(num_bits) - 1)
        rot_L_n = ( num_edit ) + (rot_num)
        return rot_L_n

n , a , b = int(input("what is n ? ")) , int(input("what is a ? ")) , int(input("what is b ? "))

k , t = 0 , a
while k < n :
    if a == b or t == b:
        print(k)
        break
    else:
        a = rot_R(a , 1 , n)
        t = rot_L(t , 1 , n)
        k += 1
if k == n :
    print("No")
