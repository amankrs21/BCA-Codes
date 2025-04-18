import pyttsx3

engine = pyttsx3.init('sapi5')
voices= engine.getProperty('voices')
rate = engine.getProperty('rate')
volume = engine.getProperty('volume')
engine.setProperty('voice',voices[1].id)    # We can use '0' for male voice and '1' for female voice
engine.setProperty('rate', 125)             # we can set speed/rate according to our need
engine.setProperty('volume',1.0)            # we can set volume 0 or 1
def speak(audio):
    engine.say(audio)
    engine.runAndWait()

speak("Hello I am Aman Singh and Currently I'm studying in Parul University")
