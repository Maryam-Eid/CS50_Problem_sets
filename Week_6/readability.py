from cs50 import get_string

text = get_string("Text: ")

letters = 0
words = 1
sents = 0

for i in text:
    # ASCII values
    if (ord(i) >= 65 and ord(i) < 90) or (ord(i) >= 97 and ord(i) < 122):
        letters += 1
    elif i == " ":
        words += 1
    elif i == "." or i == "?" or i == "!":
        sents += 1

# number of letters per 100 words
l = letters / words * 100
# number of sentenses per 100 words
s = sents / words * 100

index = round(0.0588 * l - 0.296 * s - 15.8)

if index < 1:
    print("Before Grade 1.")
elif index >= 16:
    print("Grade 16+.")
else:
    print(f"Grade {index}.")
