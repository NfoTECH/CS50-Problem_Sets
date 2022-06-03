# Given a string, replace every letter with its position in the alphabet.
# If anything in the text isn't a letter, ignore it and don't return it.
# "a" = 1, "b" = 2, etc.

alphabet = 'abcdefghijklmnopqrstuvwxyz'
def alphabet_position(text):
    if type(text) == str:
        text = text.lower()
        result = ''

        for letter in text:
            if letter.isalpha():
                result = result + ' ' + str(alphabet.index(letter) + 1)
        return result.lstrip(' ')



# SOLUTION2
def alphabet_position(text):
    return ' '.join(str(ord(c) - 96) for c in text.lower() if c.isalpha())