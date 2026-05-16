#pragma once

#include "quantum.h"

#define MY_CONFIG_VERSION 4u
#define MY_CONFIG_LED_COUNT 4u
#define MY_CONFIG_INDICATOR_SOURCE_MAX IND_LAYER3

typedef enum {
    IND_NONE = 0,
    IND_SCROLL = 1,
    IND_CAPS = 2,
    IND_NUM = 3,
    IND_KANA = 4,
    IND_LAYER0 = 5,
    IND_LAYER1,
    IND_LAYER2,
    IND_LAYER3,
} my_indicator_source_t;

typedef struct __attribute__((packed)) {
    uint8_t version;
    uint8_t led_flags[MY_CONFIG_LED_COUNT];
    uint8_t indicator_source[MY_CONFIG_LED_COUNT];
} my_config_t;

extern my_config_t g_my_config;

void my_config_save(void);

#ifdef VIA_ENABLE
enum custom_value_id {
    // VIA 커스텀 값: LED 0/1/2 이펙트
    id_custom_led_flags_0 = 1,
    id_custom_led_flags_1 = 2,
    id_custom_led_flags_2 = 3,
    id_custom_led_flags_3 = 4,
    // VIA 커스텀 값: LED 0/1/2/3 인디케이터 선택
    id_custom_indicator_0 = 5,
    id_custom_indicator_1 = 6,
    id_custom_indicator_2 = 7,
    id_custom_indicator_3 = 8,
};
#endif

// LED 인덱스 순서 사용: 0:B0(LED1), 1:B1(LED2), 2:B5(LED3), 3:B6(LED4)
uint8_t my_config_get_led_flags(uint8_t idx);
void my_config_set_led_flags(uint8_t idx, uint8_t flags);

// 인디케이터 get/set
uint8_t my_config_get_indicator(uint8_t idx);
void my_config_set_indicator(uint8_t idx, uint8_t indicator);
