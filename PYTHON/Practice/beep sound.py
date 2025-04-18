import winsound
import time
frequency = 2600
duration = 500
for i in range(10):
    time.sleep(0.050)
    winsound.Beep(frequency, duration)
