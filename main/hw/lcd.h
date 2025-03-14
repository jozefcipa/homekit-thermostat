#include <esp_lcd_ili9341.h>
#include <esp_lcd_panel_io.h>
#include <esp_lcd_touch_xpt2046.h>
#include <lvgl.h>

#define LCD_HOST SPI2_HOST
#define LCD_PIXEL_CLOCK_HZ (20 * 1000 * 1000)
#define LCD_BK_LIGHT_ON_LEVEL 1
#define LCD_HORIZONTAL_RES 240
#define LCD_VERTICAL_RES 320

// Bit number used to represent command and parameter
#define LCD_CMD_BITS 8
#define LCD_PARAM_BITS 8

extern esp_lcd_panel_handle_t lcd_panel_handle;
extern esp_lcd_touch_handle_t lcd_touch_handle;

void lcd_init();