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

// WiFi: tenta conectar, falha silenciosamente e mantém AP ativo
#ifdef WIFI_CONFIG_TOOL
#undef WIFI_CONFIG_TOOL
#endif
#define WIFI_CONFIG_TOOL WIFI_RETRY

// SSID fictício para evitar WiFi Manager
#ifdef STA_SSID1
#undef STA_SSID1
#endif
#define STA_SSID1 "co2sensor-ap"

#ifdef STA_PASS1
#undef STA_PASS1
#endif
#define STA_PASS1 "co2sensor"

#endif
