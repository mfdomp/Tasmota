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

// Modo AP padrão quando sem WiFi configurado
#ifdef WIFI_CONFIG_TOOL
#undef WIFI_CONFIG_TOOL
#endif
#define WIFI_CONFIG_TOOL WIFI_MANAGER

// Desativa tentativas de conexão indefinidas
#ifdef WIFI_CONFIG_NO_MQTT
#undef WIFI_CONFIG_NO_MQTT
#endif

#endif
