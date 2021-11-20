import datetime
def convert24(str1):
    if str1[-2:] == "AM" and str1[:2] == "12":
        return "00" + str1[2:5] 
    elif str1[-2:] == "AM":
        return str1[0:5] 
    elif str1[-2:] == "PM" and str1[:2] == "12":
        return str1[0:5]
         
    else:
        return str(int(str1[:2]) + 12) + str1[2:5]
 
def conversion(s):
    return datetime.datetime.strptime(s,'%H:%M')
for i in range(int(input())):
    mtime = input()
    ans = ""
    mtime = conversion(convert24(mtime))
    '''#print(convert24(mtime))
    print(mtime[:8])
    print(convert24(mtime[:8]))
    print(conversion(convert24(mtime[:8])))
    print(convert24(mtime[9:]))
    print(conversion(convert24(mtime[9:])))'''
    for j in range(int(input())):
        str1 = input()
        mi = conversion(convert24(str1[:8]))
        ma = conversion(convert24(str1[9:]))
        if(mtime>=mi and mtime<=ma):
            ans+='1'
        else:
            ans+='0'
    print(ans)
