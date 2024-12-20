/*! @file TypeLittleFS.h
 *  @version 1.0.0
*/

#pragma once

#include <Arduino.h>
#include <FS.h>
#include <LittleFS.h>

extern "C" {
    #define LFS LittleFS
    #define lfsAvailable LittleFS.available
    #define lfsisExists LittleFS.exists
    #define lfsremove LittleFS.remove
    #define openfile LittleFS.open
    #define opendir LittleFS.openDir
    #define removeitem LittleFS.remove
    #define LFS_READ "r"
    #define LFS_WRITE "w"
}
