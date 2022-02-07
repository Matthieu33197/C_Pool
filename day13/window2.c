/*
** EPITECH PROJECT, 2019
** window
** File description:
** pixel
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <SFML/Audio.h>
#include "display_framebuffer.h"


int main(void)
{
    int wridth;
    int height;
    int bitsPerPixel;
    sfUint8 *pixels;

    wridth = 800;
    height = 600;
    bitsPerPixel = 32;
    pixels = malloc(wridth * height * bitsPerPixel / 8);
    pixels[0] = 255;
    pixels[1] = 125;
    pixels[2] = 0;
    pixels[3] = 255;
    display_framebuffer(pixels, wridth, height);
    
    return (0);
}
