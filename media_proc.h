/* media_proc.h
 * ----------------------
 * Author:  Michal Repcik
 * Date:    06.04.2024
*/
#ifndef MEDIA_PROC_H__
#define MEDIA_PROC_H__

#include <ncurses.h>    // Lib for terminal operations

#include "avpl_sem.h"

/* Function: play_video
 * --------------------
 * Separates video into frames and passes them to ascii_conv function
 * 
 * Parameters
 * ----------
 * vid_title - path to the video that should be played
 * main_win - window where video should be displayed
 * sems - struct containing semaphores
 * 
 * Return value
 * ------------
 * void
*/
void play_video(char *vid_title, WINDOW *main_win, sems_t *sems);

/* Function: display_error
 * -----------------------
 * Displays error message on specified window
 * 
 * Parameters
 * ----------
 * win - pointer to a window where the message should be displayed
 * msg - message that should be displayed
 * 
 * Return value
 * ------------
 * void
*/
void display_error(WINDOW *win, const char *msg);

#endif // MEDIA_PROC_H__