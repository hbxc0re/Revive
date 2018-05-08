#pragma once

#define REV_MAKESTR(x) #x
#define REV_STRINGIFY(x) REV_MAKESTR(x)

#define REV_MAJOR_VERSION 1
#define REV_MINOR_VERSION 3
#define REV_PATCH_VERSION 1
#define REV_BUILD_NUMBER 0

#define REV_VERSION_STRING REV_STRINGIFY(REV_MAJOR_VERSION.REV_MINOR_VERSION.REV_PATCH_VERSION.REV_BUILD_NUMBER)
