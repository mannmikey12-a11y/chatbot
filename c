# Math Tutor Chatbot
# This chatbot helps students practice basic math concepts.

# Function for addition
def addition_help(name):
    print("\n" + name + ", let's practice addition!")

    try:
        number1 = float(input("Enter the first number: "))
        number2 = float(input("Enter the second number: "))

        answer = number1 + number2
        print("The answer is:", answer)

    except ValueError:
        print("Please enter numbers only.")


# Function for subtraction
def subtraction_help(name):
    print("\n" + name + ", let's practice subtraction!")

    try:
        number1 = float(input("Enter the first number: "))
        number2 = float(input("Enter the second number: "))

        answer = number1 - number2
        print("The answer is:", answer)

    except ValueError:
        print("Please enter numbers only.")


# Function for multiplication
def multiplication_help(name):
    print("\n" + name + ", let's practice multiplication!")

    try:
        number1 = float(input("Enter the first number: "))
        number2 = float(input("Enter the second number: "))

        answer = number1 * number2
        print("The answer is:", answer)

    except ValueError:
        print("Please enter numbers only.")


# Function for division
def division_help(name):
    print("\n" + name + ", let's practice division!")

    try:
        number1 = float(input("Enter the first number: "))
        number2 = float(input("Enter the second number: "))

        if number2 == 0:
            print("You cannot divide by zero.")
        else:
            answer = number1 / number2
            print("The answer is:", answer)

    except ValueError:
        print("Please enter numbers only.")


# Function for a simple math fact
def math_fact(name):
    print("\n" + name + ", here is a math fact:")
    print("Any number multiplied by zero equals zero.")


# Function that handles the user's request
def handle_request(name):
    request = input(
        "\n" + name +
        ", what would you like to practice? "
        "Choose addition, subtraction, multiplication, division, fact, or quit: "
    ).lower().strip()

    if "addition" in request or "add" in request:
        addition_help(name)

    elif "subtraction" in request or "subtract" in request:
        subtraction_help(name)

    elif "multiplication" in request or "multiply" in request:
        multiplication_help(name)

    elif "division" in request or "divide" in request:
        division_help(name)

    elif "fact" in request:
        math_fact(name)

    elif "quit" in request or "exit" in request:
        return False

    else:
        print("Sorry, I don't understand that request.")
        print("Please choose addition, subtraction, multiplication, division, fact, or quit.")

    return True


# Main section of the chatbot
print("====================================")
print("        MATH TUTOR CHATBOT")
print("====================================")

# Ask for the user's name
name = input("Hi! What is your name? ").strip()

# Handle an empty name
if name == "":
    name = "Student"

print("\nHello, " + name + "!")
print("I can help you practice basic math.")

# Keep the chatbot running until the user chooses to quit
running = True

while running:
    running = handle_request(name)

# Goodbye message
print("\nThanks for using the Math Tutor Chatbot, " + name + "!")
print("Keep practicing and keep improving!")
