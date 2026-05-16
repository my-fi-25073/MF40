#pragma once

// LED Pins: B0(LED1), B1(LED2), B5(LED3), B6(LED4), A5(LED_CAPS)

// // LED Indicators 설정
// #define LED_1_PIN B0
// #define LED_2_PIN B1
// #define LED_3_PIN B5
// #define LED_4_PIN B6
// #define LED_CAPS_PIN A5

// // LED가 켜질 때의 핀 상태 (1: HIGH, 0: LOW)
// #define LED_PIN_ON_STATE 1

/* 백라이트 설정 - 현재 비활성화 */
// #define BACKLIGHT_PIN A6
// #define BACKLIGHT_LEVELS 1

#define DYNAMIC_KEYMAP_LAYER_COUNT 6
#define VIA_EEPROM_CUSTOM_CONFIG_SIZE 32
#define EECONFIG_KB_DATA_SIZE VIA_EEPROM_CUSTOM_CONFIG_SIZE
#define VIA_FIRMWARE_VERSION 0x00000001

#define USB_POLLING_INTERVAL_MS 1
