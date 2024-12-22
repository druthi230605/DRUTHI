message="DRU"
encrypted_data=""

for i in range(0,len(message),1):
    letter=message[i]
    encrypt_data=chr(ord(letter)+1)
    encrypted_data+=encrypt_data
print(encrypted_data)