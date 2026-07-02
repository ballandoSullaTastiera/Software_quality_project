def is_numberString(string):
    for char in string:
        if not char in "0123456789":
            return False
    return True

def countNumbersInString(string):
    cnt=0
    for char in string:
        if char in "0123456789":
            cnt+=1
    return cnt