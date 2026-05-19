import random
import string

char=string.punctuation+string.ascii_letters+string.digits+" "
char=list(char)
key=char.copy()
random.shuffle(key)

def main():
    running=True
    def encrypt():
        orginal_text=input("Enter your text :")
        encrypted_text=""
        for letter in orginal_text:
            index=char.index(letter)
            encrypted_text+=key[index]
        print(f"Encrypted text :{encrypted_text}")

    def decrypt():
        encrypted_text=input("Enter your text :")
        original_text=""
        for letter in encrypted_text:
            index=key.index(letter)
            original_text+=char[index]
        print(f"Decrypted text :{original_text}")

    while running:
        print("1.Encrypt")
        print("2.Decrypt")
        print("3.exit")
        user=input("Enter your choice :")
        if user=="1":
            encrypt()
        elif user=="2":
            decrypt()
        elif user=="3":
            running=False
        else:
            print("Invalid input")

if __name__=="__main__":
    main()