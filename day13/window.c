/*
** EPITECH PROJECT, 2019
** window
** File description:
** make a window
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>

int main(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode;

    video_mode.width = 800;
    video_mode.height = 600;
    video_mode.bitsPerPixel = 32;
    window = sfRenderWindow_create(video_mode,
                                   "MyWindow",
                                   sfDefaultStyle,
                                   NULL);
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_display(window);
    }
return (0);
}
