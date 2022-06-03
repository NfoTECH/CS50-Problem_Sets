# TODO
from cs50 import get_string
import string

def main():
    text = get_string("Text: ")

    letters = 0
    for i in range(len(text)):
        if text[i].isalpha():
            letters += 1

    words = 1
    for i in range(len(text)):
        if text[i] == " ":
            words += 1

    sentences = 0
    for i in range(len(text)):
        if text[i] in [".", "!", "?"]: # text[i] == "." or text[i] == "!" or text[i] == "?":
            sentences += 1

    average_letters = letters / words * 100
    average_sentences = sentences / words * 100

    formula = (0.0588 * average_letters) - (0.296 * average_sentences) - 15.8
    index = round(formula)

    if index < 1:
        print("Before Grade 1")
    elif index >= 16:
        print("Grade 16+")
    else:
        print(f"Grade {index}")

main()