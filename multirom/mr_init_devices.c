#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{

    "/sys/class/graphics/fb0",
    "/sys/class/graphics/*",

    // fstab configuration
    "/sys/block/mmcblk0",
    "/sys/block/mmcblk0rpmb",
    "/sys/module/mmc_core",
    "/sys/module/mmcblk",

    // for adb
    "/sys/class/misc/android_adb",
    "/sys/class/android_usb/android0/f_adb",
    "/sys/class/tty/ptmx",
    "/sys/bus*",

    // for keys
    "/sys/class/misc/uinput",
    "/sys/devices*",

NULL

};
