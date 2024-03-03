#!/usr/bin/python3

"""A function that calculates the bmi of the individual and checks if they are overweight, underweight or obesed or normal"""

def bmi_calculator(name, weight_kg, height_m):
    bmi = weight_kg / height_m ** 2
    
    if bmi < 18.5:
        print(f"{name} your bmi is {bmi}, and you are underweight")
    elif 24.5 <= bmi <=24.5:
        print(f"{name} your bmi is {bmi}, and you are overweight")
    elif bmi > 29.5:
        print(f"{name} your bmi is {bmi}, and you are obesed")
    elif 18.5 <= bmi <= 24.5:
        print(f"{name} your bmi is {bmi}, and you are normal")
    
    return bmi
        
bmi_calculator(name="emmanuel", weight_kg=150, height_m=17.5)
bmi_calculator("David", 200, 20)