#Import Libraries
import twitter
import serial
import time

#Authenticate with Twitter API
api = twitter.Api(consumer_key='your key here', consumer_secret='your key here', access_token_key='your key here', access_token_secret='your key here') 

#Configure Serial Port
arduino = serial.Serial('/dev/cu.usbserial-FTT3JNCK', 9600)


while 1:  #Infinite Loop
	status = arduino.readline() #Wait for new line to come across Serial
	api.PostUpdate(status) #Post message to Twitter
	time.sleep(100) #Wait 100 seconds
	del status	#Clear status
