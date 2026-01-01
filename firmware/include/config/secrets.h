#pragma once

/**
 * Definitions for the firmware section of the Frekvens project.
 * https://github.com/VIPnytt/Frekvens/wiki
 */

/**
 * IKEA Frekvens
 */
// #define PIN_CS 1   // LAK
// #define PIN_SCLK 2 // CLK
// #define PIN_MOSI 3 // DA
// #define PIN_OE 4   // EN
// #define PIN_SW1 5  // SW1
// #define PIN_SW2 6  // SW
// #define PIN_MIC 7  // U3 pin 7

/**
 * IKEA Obegränsad
 */
// #define PIN_SW2 D3  // 4: SW
#define PIN_OE D4   // 5: EN
#define PIN_CS SCL   // 6 (D5): CLA
#define PIN_SCLK SCK // 7 (D6): CLK
#define PIN_MOSI MOSI // 9 (D8): DI

/**
 * Wi-Fi credentials
 */
// #define WIFI_SSID "name"
// #define WIFI_KEY "secret"

/**
 * Weather (optional)
 */
// #define LATITUDE "0.000"  // °
// #define LONGITUDE "0.000" // °
// #define LOCATION "city"
// #define TEMPERATURE_CELSIUS true    // °C
// #define TEMPERATURE_FAHRENHEIT true // °F
