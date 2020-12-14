# Algorithm that converts a value in inches to a value in centimeters.

inches_per_centimeter = 0.3937
centimeters_per_inch = 1 / inches_per_centimeter
value_in_inches = float(input("Enter a value in inches: "))
value_in_centimeters = value_in_inches * centimeters_per_inch
print(str(value_in_inches) + ' inches is equivalent to ' + str(value_in_centimeters) + ' cm.')
