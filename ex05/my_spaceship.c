#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_spaceship(char *param_1)
{
    int x = 0;
    int y = 0;

    int *pos_x = (int *)malloc(sizeof(int));
    int *pos_y = (int *)malloc(sizeof(int));
    char *direction = (char *)malloc(sizeof(char));

    direction = "up";
    *pos_x = 0;
    *pos_y = 0;

    size_t lenparam_1 = strlen(param_1),
           sz = 0;

    while (*param_1)
    {
        if (*param_1 == 'A')
        {
            if (direction == "up")
                *pos_y -= 1;
            else if (direction == "down")
                *pos_y += 1;
            else if (direction == "right")
                *pos_x += 1;
            else if (direction == "left")
                *pos_x -= 1;
        }

        if (*param_1 == 'L')
        {
            if (direction == "up")
                direction = "left";
            else if (direction == "left")
                direction = "down";
            else if (direction == "down")
                direction = "right";
            else if (direction == "right")
                direction = "up";
        }

        if (*param_1 == 'R')
        {
            if (direction == "up")
                direction = "right";
            else if (direction == "right")
                direction = "down";
            else if (direction == "down")
                direction = "left";
            else if (direction == "left")
                direction = "up";
        }
        *param_1++;
    }
    char *retString = malloc(50 * sizeof(char));

    sprintf((char *)retString, "{x: %d, y: %d, direction: '%s'}", *pos_x, *pos_y, direction);
    return (char *)retString;
}

// int main()
// {
//     my_spaceship("");        // x: 0, y: 0, direction: 'Up'
//     my_spaceship("RRRRR");   // x: 0, y: 0, direction: 'Right'
//     my_spaceship("LLLLL");   // x: 0, y: 0, direction: 'Left'
//     my_spaceship("AAAA");    // x = 0, y = -4, direction: 'up'
//     my_spaceship("RAALALL"); // x = 2, y = -1, direction: 'down'
//     my_spaceship("RAARARR"); // x = 2, y = 1, direction: 'down'

//     return 0;
// }