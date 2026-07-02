import sys
import os

PROJEKT_ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), '../../python'))
sys.path.insert(0, PROJEKT_ROOT)

import numberStrings

#Tests fuer is_numberString
def test_leererString():
    #given a function
    #when string is empty
    string=""
    #then expect that return value is true
    assert is_numberString(string)==True

def test_gemischterString():
    #given a function
    #when string consists of letters and numbers
    string="a5kl8o9E"
    #then expect that return value is false
    assert is_numberString(string)==False

def test_realNumberString():
    #given a function
    #when string is really a number string
    string="4682"
    #then expect that return value is true
    assert is_numberString(string)==True

def test_SonderzeichenString():
    #given a function
    #when string consists of special characters and numbers
    string="4+8<>5"
    #then expect that return value is false
    assert is_numberString(string)==False


#Tests fuer countNumbersInString

def test_leererString():
    #given a function
    #when string is empty
    string=""
    #then expect that return value is 0
    assert countNumbersInString(string)==0

def test_gemischterString():
    #given a function
    #when string consists of letters and numbers
    string="a5kl8o9E"
    #then expect that return value is 3
    assert countNumbersInString(string)==3

def test_realNumberString():
    #given a function
    #when string is really a number string
    string="4682"
    #then expect that return value is 4
    assert countNumbersInString(string)==4

def test_SonderzeichenString():
    #given a function
    #when string consists of special characters and numbers
    string="4+8<>5"
    #then expect that return value is 3
    assert countNumbersInString(string)==3
