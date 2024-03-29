## PY32F0xx IAR 8.4.x Template

[GitHub: markr1961 PY32F0xx_IAR_template](https://github.com/markr1961/PY32F0xx_IAR_template)

This project is based on the work from [Jay Carlson's py32 template](https://github.com/jaydcarlson/py32-template)  
It has been adapted for IAR v8.4.x or later. An effort was made to build using IAR v7.8. 
While it builds w/o issue, the Puya flash loader appears to be incompatible with IAR 7.8

The project was updated to more recent CMSIS and HAL/LL drivers from Puya firmware v1.1.2. 
Note: the 'HAL driver' directory includes drivers for both HAL and Low-Level libraries.  

The debug, linker and programming files are needed from the Puya files to be copied to your IAR install.  

- [Jay's article with links to the Puya SDK files](https://jaycarlson.net/2023/02/04/the-cheapest-flash-microcontroller-you-can-buy-is-actually-an-arm-cortex-m0/)
- [PY32F0xx at PuyaSemi](https://www.puyasemi.com/cpzx3/info_271_aid_247_kid_246.html)

## -- commit notes --

05/23/2023 MAR
basic 'blinky' project builds, runs and debugs on PY32F030K18T6 using a "PY32F030_Start Kit V1.3"  
works with ST-Link (returns x453 "unknown CPU") and even runs on the wrong CPU (PY32F002Ax5) ¯\\_(ツ)_/¯  

05/25/2023 MAR
existing project blinks LED @ 10Hz, with EXTI handling button(key). When pressed the main loop halts  while it turns LED on for 1 second then off for one second.  
fixed issues with compiling both HAL and LL in the same project.  
Notes: 
- Both LL_Flash and HAL_Flash cannot be compiled in the same project.
- There are still compile issues if HAL DMA is enabled in py32f0xx_hal_conf.h. Needs to be resolved.
