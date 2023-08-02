// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: image_display

#ifndef _IMAGE_DISPLAY_UI_H
#define _IMAGE_DISPLAY_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"

typedef enum {
    UI_FILE_TYPE_JPG = 0,
    UI_FILE_TYPE_PNG,
    UI_FILE_TYPE_BMP,
    UI_FILE_TYPE_GIF,
    UI_FILE_TYPE_MP3,
    UI_FILE_TYPE_UNKNOWN,
    UI_FILE_TYPE_MAX,
} ui_file_type_t;

// SCREEN: ui_StartPage
void ui_StartPage_screen_init(void);
extern lv_obj_t * ui_StartPage;
void ui_event_imageMSC(lv_event_t * e);
extern lv_obj_t * ui_imageMSC;
extern lv_obj_t * ui_startLable;
// SCREEN: ui_HomePage
void ui_HomePage_screen_init(void);
extern lv_obj_t * ui_HomePage;
// SCREEN: ui_displayPage
void ui_displayPage_screen_init(void);
void ui_displayObj_clear(void);
void ui_displayObj_hidden(void);
bool ui_displayPage_create_dispalyObj(ui_file_type_t type);
extern lv_obj_t * ui_displayPage;
void ui_event_leftBtn(lv_event_t * e);
extern lv_obj_t * ui_leftBtn;
void ui_event_rightBtn(lv_event_t * e);
extern lv_obj_t * ui_rightBtn;
extern lv_obj_t * ui_Filename;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_Label1;
extern lv_obj_t * ui_Label4;
void ui_event_displayObj(lv_event_t * e);
extern lv_obj_t * ui_displayObj;
void ui_event_Image3(lv_event_t * e);
extern lv_obj_t * ui_Image3;
extern lv_obj_t * ui____initial_actions0;

LV_IMG_DECLARE(ui_gif_music_gif);    // assets\music.gif
LV_IMG_DECLARE(ui_img_pullmscbig_png);    // assets\pullMSCBig.png
LV_IMG_DECLARE(ui_img_pushmscbig_png);    // assets\pushMSCBig.png
LV_IMG_DECLARE(ui_img_arrow_png);    // assets\arrow.png
LV_IMG_DECLARE(ui_img_return_png);    // assets\return.png

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
