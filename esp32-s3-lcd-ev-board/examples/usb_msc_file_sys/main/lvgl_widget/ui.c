// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: image_display

#include <stdio.h>
#include "ui.h"
#include "ui_helpers.h"
#include "app_ui_control.h"

///////////////////// VARIABLES ////////////////////

// SCREEN: ui_StartPage
void ui_StartPage_screen_init(void);
lv_obj_t * ui_StartPage;
void ui_event_imageMSC(lv_event_t * e);
lv_obj_t * ui_imageMSC;
lv_obj_t * ui_startLable;

// SCREEN: ui_HomePage
void ui_HomePage_screen_init(void);
lv_obj_t * ui_HomePage;

// SCREEN: ui_displayPage
void ui_displayPage_screen_init(void);
lv_obj_t * ui_displayPage;
void ui_event_leftBtn(lv_event_t * e);
lv_obj_t * ui_leftBtn;
void ui_event_rightBtn(lv_event_t * e);
lv_obj_t * ui_rightBtn;
lv_obj_t * ui_Filename;
lv_obj_t * ui_Label2;
lv_obj_t * ui_Label1;
lv_obj_t * ui_Label4;
lv_obj_t * ui_displayObj;
void ui_event_Image3(lv_event_t * e);
lv_obj_t * ui_Image3;
lv_obj_t * ui____initial_actions0;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_imageMSC(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_image_set_property(ui_imageMSC, _UI_IMAGE_PROPERTY_IMAGE, (uint8_t *)& ui_img_pushmscbig_png);
        _ui_label_set_property(ui_startLable, _UI_LABEL_PROPERTY_TEXT, "The USB stick is ready");
    }
}
void ui_event_leftBtn(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    if(event_code == LV_EVENT_CLICKED) {
        leftReviewCB(e);
    }
}
void ui_event_rightBtn(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    if(event_code == LV_EVENT_CLICKED) {
        rightReviewCB(e);
    }
}
void ui_event_displayObj(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    if(event_code == LV_EVENT_CLICKED) {
        displayObj_clicked_cb(e);
    }
}
void ui_event_Image3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    if(event_code == LV_EVENT_CLICKED) {
        ui_displayObj_clear();
        _ui_screen_change(ui_HomePage, LV_SCR_LOAD_ANIM_OVER_RIGHT, 500, 0);
        ui_control_audio_control_stop();
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_StartPage_screen_init();
    ui_HomePage_screen_init();
    ui_displayPage_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_StartPage);
}
