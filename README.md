# Computer Key
### A system to unlock and lock your mac automatically depending on the presence of a key (arduino)
A bash script continously runs to periodically confirm the presence of the key and locks the computer if it doesn't find it. 
The arduino sends in keystrokes with the password to wake and unlock the computer when connected.
Together these ensure the computer is only unlocked when the arduino with the programmed password is connected.

![img](https://github.com/avelaga/computer-key/blob/master/demo.gif)

*Note: You need to use a 32u4 or SAMD based arduino as those are the only ones capable of being recognized as a USB device. I'm using an arduino pro micro in this.* 
