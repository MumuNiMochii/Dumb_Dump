# Note: Warning! This program should be run only within the Python's terminal or in an external console!
#       After build and run, immediately click the Python's terminal or the external console.
import pyautogui
import time

print("\nInitializing...")
# Acts as timer 'before' starting other program line:
time.sleep(1.5)

initial1 = ["Hello,", "I", "am", "a", "nameless", "bot."]
time.sleep(1)
for a in range(0, 6):
    pyautogui.typewrite(initial1[a])
    pyautogui.typewrite(" ")
    # Waiting time of 'next word within the list 'initial1''.
    time.sleep(0.1)

initial2 = ["Are,", "you", "going", "to", "call", "me", "with", "a", "name?"]
time.sleep(1)
for a in range(0, 9):
    pyautogui.typewrite(initial2[a])
    pyautogui.typewrite(" ")
    time.sleep(0.1)
# This can either be a 'yes' or 'no' regardless of alphanumeric case.
botIntro = str(input("\n-> "))
# Note: Both functions 'str.lower()' and 'str.upper()' does not work, so I have to resort to this instead:
if botIntro == str("Yes") or botIntro == str("yes") or botIntro == str("YES") or botIntro == str("yEs") or botIntro == str("yeS") or botIntro == str("YeS") or botIntro == str("yES") or botIntro == str("YEs") and not (str("No") or botIntro == str("no") or botIntro == str("nO")):
    question1 = ["Then,", "what", "will", "be", "my", "name?"]
    time.sleep(1)
    for a in range(0, 6):
        pyautogui.typewrite(question1[a])
        pyautogui.typewrite(" ")
        time.sleep(0.1)
    # Bot's name:
    botName = str(input("\n-> "))

    state1 = ["Thank", "you."]
    time.sleep(1)
    for a in range(0, 2):
        pyautogui.typewrite(state1[a])
        pyautogui.typewrite(" ")
        time.sleep(0.1)

    state2 = ["I", "see,", "so", "from", "now", "on", "I", "will", "be", "called", "as", botName+"."]
    time.sleep(1)
    for a in range(0, 12):
        pyautogui.typewrite(state2[a])
        pyautogui.typewrite(" ")
        time.sleep(0.1)
    # A sentence within a new line.
    state3 = ["\nMmm", "I", botName+","]
    time.sleep(1)
    for a in range(0, 3):
        pyautogui.typewrite(state3[a])
        pyautogui.typewrite(" ")
        time.sleep(0.1)
    state4 = ["as", "your", "bot,"]
    time.sleep(1)
    for a in range(0, 3):
        pyautogui.typewrite(state4[a])
        pyautogui.typewrite(" ")
        time.sleep(0.1)
    state5 = ["should", "know", "your", "name", "as", "well."]
    time.sleep(1)
    for a in range(0, 6):
        pyautogui.typewrite(state5[a])
        pyautogui.typewrite(" ")
        time.sleep(0.1)
    if botName == str("") or botName == str(" "):
        print("Error. Provide a valid name.")
    else:
        question2 = ["\nWhat", "is", "your", "name?"]
        time.sleep(1)
        for a in range(0, 4):
            pyautogui.typewrite(question2[a])
            pyautogui.typewrite(" ")
            time.sleep(0.1)
        # User's name:
        uName = str(input("\n-> "))
elif botIntro == str("No") or botIntro == str("no") or botIntro == str("nO") and not (botIntro == str("Yes") or botIntro == str("yes") or botIntro == str("YES") or botIntro == str("yEs") or botIntro == str("yeS") or botIntro == str("YeS") or botIntro == str("yES") or botIntro == str("YEs")):
    comments = ["Very", "well", "then", "goodbye."]
    time.sleep(1)
    for y in range(0, 4):
        pyautogui.typewrite(comments[y])
        pyautogui.typewrite(" ")
        time.sleep(0.1)
else:
    print("Pardon. My system does not recognize the input.")
