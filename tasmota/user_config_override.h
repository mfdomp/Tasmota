#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

#ifdef USE_SCD40
#undef USE_SCD40
#endif
#define USE_SCD40

#ifdef USE_SPI
#undef USE_SPI
#endif
#define USE_SPI

#ifdef USE_SDCARD
#undef USE_SDCARD
#endif
#define USE_SDCARD

#ifndef USE_UFILESYS
#define USE_UFILESYS
#endif

#ifndef SDC_CS
#define SDC_CS 5
#endif

// Manter AP ativo permanentemente, sem restart por timeout
#ifndef USE_ALWAYS_AP
#define USE_ALWAYS_AP
#endif

#define STA_SSID1 "co2sensor-offline"
#define STA_PASS1 "co2sensor"
#define USE_AHT2x

// WiFi: tenta conectar, falha silenciosamente e mantém AP ativo
#ifdef WIFI_CONFIG_TOOL
#undef WIFI_CONFIG_TOOL
#endif
#define WIFI_CONFIG_TOOL WIFI_RETRY

#endif
