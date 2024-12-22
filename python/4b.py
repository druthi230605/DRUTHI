user_name=input("enter your name")
pancard_number=input("enter your pan number")
if user_name.isalpha()==False:
    print("INVALID USERNAME")
    
else:
    if (len(pancard_number)==10 and pancard_number[0:5].isalpha() and pancard_number[5:9].isnumeric() and pancard_number[9].isalpha()):
        print(f"USER NAME:{user_name},PAN_CARD NUMBER:{pancard_number}")
    else:
        print("pan number is invalid")    