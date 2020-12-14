# Algorithms that converts a value in cm to a value in inches

centimeters_per_inch = 2.54
inches_per_centimeter = 1 / centimeters_per_inch
value_in_cm = float(input("Enter value in cm: "))
value_in_inches = value_in_cm * inches_per_centimeter

print(str(value_in_cm) + ' cm is equivalent to ' +  str(value_in_inches) + ' inches')
