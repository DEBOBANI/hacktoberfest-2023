## Ram Samarth B B
## Language: Python
## Location: India
## Github : https://github.com/achiverram28
## Program to convert integer to Roman number in python
def intToRoman(num):
        integers=[1000,900,500,400,100,90,50,40,10,9,5,4,1]
        romans=["M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"]
        i=0
        ans=""
        while num>0:
            for _ in range(num//integers[i]):
                ans+=romans[i]
                num-=integers[i]
            i=i+1
        return ans
number=int(input("Enter the integer number: "))
print(intToRoman(number))      
