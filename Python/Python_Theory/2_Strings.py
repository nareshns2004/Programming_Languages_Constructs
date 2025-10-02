# String is a sequence of characters enclosed within quotes
name = "Akshit"

# Letters. Numbers, Special, Symbols, Whitespace Characters, Unicode Characters

print("\u0061")  # 4 digit unicode combination
print("\U0001F600")  # 8 digit unicode combination

language = "Python"

print(language)
print(language[2])
print(1+2)
print("1+2")


name1 = "Python"
name2 = "Python"

print(name1==name2)

message = 'Don\'t worry about errors'

poem = '''I am naresh, I am working in software development
I am in process of giving interviews for MAANGM companies
'''

print(poem)
print("Hel\u0061")
a = "1"
b = "2"

print(a+b) #String Concatenation

first_name = "Naresh"
last_name = "Kumar"
print(first_name + " " + last_name)

age = 45
message = "My Age is " + str(age)
print(message)

city = "New York"
temp = 75
weather_report = "The Temperature in " + city + " is "+ str(temp) + " degrees"
print(weather_report)

weather_report = f"The Temperature in {city} is {temp*2} degrees"  #fstring
print(weather_report)

a = 5
b = 10

print(f"The sum of {a} and {b} is {a+b}")

name = "Naresh"
print(f"first character of {name} is {name[0]}")

a = "Python"
res = a*3
print(res)

star = "*"
print((star*5 + "\n")*5)
a = "Python"
print(a*0)
print(a*-1)

# len function
a = "Python"
print(len(a))
print(len("Hello\nWorld"))
print(("\u2764\uFE0F"))