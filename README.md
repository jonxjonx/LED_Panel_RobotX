RobotX LED Panel
==================================================

Documentation of the Hardware and Software to produce the LED Panel for testing of Monocular Vision System.

Hardware
--------
* 4 x Adafruit Medium 16x32 RGB LED Matrix Panel https://www.mouser.sg/ProductDetail/485-420

* 1 x Adafruit 5V 10A Power Supply https://www.mouser.sg/ProductDetail/485-658

* 1 x Adafruit Female DC Power Adapter https://www.mouser.sg/ProductDetail/485-368

* 14 x Female-Female Jumper Wires

* 1 x Raspberry Pi 4B 2GB

Front and Back View of LED Panel 

![image](https://github.com/user-attachments/assets/c963c021-2c68-4a52-9a01-77f1927f46d3)

Zoomed in View of LED Panel

![image](https://github.com/user-attachments/assets/174ef13a-6dd9-4bdc-92b3-a4c4e26b226f)

Wire to the top LED Matrix Panel through 14 GPIO pins

![image](https://github.com/jonxjonx/rpi-rgb-led-matrix/assets/142519124/605c07d9-cb40-4b98-9cc5-a01049b7bc54)

Software
--------
Navigate to [examples-api-use/](./examples-api-use) directory.
```
make
sudo ./minimal-example --led-no-hardware-pulse
```
Change RGB to whichever light sequence to be tested

Images
--------

https://github.com/jonxjonx/rpi-rgb-led-matrix/assets/142519124/43e879cc-6a9c-4ec6-9d2f-6fe983340bf8

![photo_6109523754188127373_y](https://github.com/jonxjonx/rpi-rgb-led-matrix/assets/142519124/49064c2f-ac69-4f85-8d6d-b841241f2194)


