import os
os.system("cls")

def roman_to_int(s):

    roman_to_int_map = {
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000
    }
    
    
    total = 0
    
    
    for i in range(len(s) - 1):
       
        if roman_to_int_map[s[i]] < roman_to_int_map[s[i + 1]]:
            total -= roman_to_int_map[s[i]]
        else:
            total += roman_to_int_map[s[i]]
    
    
    total += roman_to_int_map[s[-1]]
    
    return total


s1 = "III"
print(roman_to_int(s1))  


s2 = "LVIII"
print(roman_to_int(s2))  

s3 = "MCMXCIV"
print(roman_to_int(s3))  
