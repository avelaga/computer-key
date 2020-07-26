#!/bin/bash

while true; do
	if [ ! -c  /dev/tty.usbmodemHIDPC1 ]; then
		echo "LOCKING DOWN"
		pmset sleepnow
	fi
	sleep 5
done
