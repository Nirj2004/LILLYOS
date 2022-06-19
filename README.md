# cyberWatch

Simple OS for [LILYGO® T-WATCH-2020 V3](http://www.lilygo.cn/prod_view.aspx?TypeId=50053&Id=1380&FId=t3:50053:3), based on [ Xinyuan-LilyGO /TTGO_TWatch_Library](https://github.com/Nirj2004/LILLYOS).

![image](https://user-images.githubusercontent.com/75828293/174482821-676c48b1-91d0-4821-9754-003b250828a3.png)
![image](https://user-images.githubusercontent.com/75828293/174482836-8f081b32-b852-4836-af13-c64367f2aed1.png)
![image](https://user-images.githubusercontent.com/75828293/174482848-ce740263-da9c-4444-8fb7-733a0f5c9172.png)
![image](https://user-images.githubusercontent.com/75828293/174482860-88f56390-10c3-4b06-b42e-e5cb0c2710d3.png)
![image](https://user-images.githubusercontent.com/75828293/174482881-7ddbfd81-e4a6-41c5-b38c-fb4bf0c255fa.png)


Free time project to create lightweight and simple OS for smartwatch, with only necessary small functionality (to keep it simple and effective). With strong DIY cyberpunk motivation (don't want to support and pay money to big corporations). And with cool 80' cyberpunk retro design!

## Installation

 - download and install [VS Code](https://code.visualstudio.com/download) and [PlatformIO](https://platformio.org/install/ide?install=vscode) (or any other C/C++ IDE)
    - (use complex IDE; this project is too large fro Arduino IDE)
 - ~~clone~~ download this repository
 - add [TTGO library](https://github.com/Xinyuan-LilyGO/TTGO_TWatch_Library) to the project, following instructions in library's readme
 - connect [LillyGo T_Watch device](http://www.lilygo.cn/prod_view.aspx?TypeId=50053&Id=1380&FId=t3:50053:3) via USB
 - compile and upload via your favorite IDE
 - __have a fun!__

## Code quality & standards
 - [Misra C++ standards](https://www.misra.org.uk/) (98% and still improving)

## Features

 - cool splashscreen and exit screen :-)
 - battery consumption saving
   - turn off display after 5 seconds of inactivity
   - use cpu light sleep mode cycles (200ms) in main loop
   - turn off unused subcomponents (WI-FI chip)
   - set CPU frequency to 40MHz
   - activate by:
   - touching display
   - short press button    
   - "tilt up" maneuver
 - possibility of enabled "display always on" to show cool clockfaces
 - warns (vibrate, turn display on) when battery reach low levels(30% / 20%)
 - shows current time
 - shows current date
 - multiple clock faces - change by swipe vertical on datetime "miniapp"
 - shows battery status
 - step counter
 - horizontal swipe - switching between mainPanel components/miniapps
 - vertical swipe - control components
 - calendar with prev/next month feature
 - simple stop watch
 - for full list of features, see [changelog.txt](changelog.txt)

## Known bugs
 - "tilt up" maneuver sometimes doesn't activate display (maybe will be solved by tuning BMA423 sensor)

## Future features :-)
 - alarm
 - conection vith phone via BT (require app for android)
   - SMS notification icon
   - missed call icon
   - other notifications icon
   - show who's calling
   - ability to reject call
   - show SMS content (and mark as read in phone)
   - show notifications (and mark as read)
 - __many many more__

## Contact

Feel free to contact me via email (nirjharbiswas2021@protonmail.com) if you need some help, want to participate or support me :-)
