quantity = int(input("ENTER NUMBER OF ITEMS: "))
amount = int(input("ENTER THE COST OF EACH ITEM: "))
total_amount = quantity * amount

discount_percentage = float(input("ENTER THE DISCOUNT PERCENTAGE: "))
discount = (discount_percentage * total_amount) / 100
sub_total = total_amount - discount

tax_percentage = float(input("ENTER TAX PERCENTAGE: "))
tax = (sub_total * tax_percentage) / 100
bill = sub_total + tax

print("\nDetailed Bill:")
print(f"Amount of each item = ${amount}")
print(f"Total amount for {quantity} items = ${total_amount:.2f}")
print(f"Discount percentage = {discount_percentage}%")
print(f"Discount amount = ${discount:.2f}")
print(f"Subtotal after discount = ${sub_total:.2f}")
print(f"Tax percentage = {tax_percentage}%")
print(f"Tax amount = ${tax:.2f}")
print(f"TOTAL BILL = ${bill:.2f}")
