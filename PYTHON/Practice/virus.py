import subprocess
from time import sleep
while True:
    subprocess.Popen('notepad')
    subprocess.Popen('calc')
    subprocess.Popen('mspaint')
    subprocess.Popen('explorer')
    subprocess.Popen('write')
    sleep(.05)