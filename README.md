## PY32F0xx IAR 8.4.x Template

[GitHub: markr1961 PY32F0xx_IAR_template](https://github.com/markr1961/PY32F0xx_IAR_template)

This project is a clone of [Jay Carlson's py32 template](https://github.com/jaydcarlson/py32-template) rebuilt for IAR v8.4.x or later.

The code uses the same CMSIS and HAL driver structure with an IAR project wrapped around it.  
Note: the 'HAL driver' directory includes drivers for both HAL and Low-Level libraries.  

The debug, linker and programming files are needed from the Puya files to be copied to your IAR install.  

- [Jay's article with links to the Puya SDK files](https://jaycarlson.net/2023/02/04/the-cheapest-flash-microcontroller-you-can-buy-is-actually-an-arm-cortex-m0/)
- [PY32F0xx at PuyaSemi](https://www.puyasemi.com/cpzx3/info_271_aid_247_kid_246.html)

## -- commit notes --

05/23/2023 MAR
basic 'blinky' project builds, runs and debugs on PY32F030K18T6 using a "PY32F030_Start Kit V1.3"  
works with ST-Link (returns x453 "unknown CPU") and even runs on the wrong CPU (PY32F002Ax5) ¯\\_(ツ)_/¯  
