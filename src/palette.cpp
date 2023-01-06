#include "palette.h"

// Red,Green,Blue sequence
Color PalRgb_[] = { 0xFF0000, 0x00FF00, 0x0000FF };
Palette PalRgb = { 3, PalRgb_ };

// Rainbow colors
Color PalRainbow_[] =
{
    0xFF0000, 0xAB5500, 0xABAB00, 0x00FF00,
    0x00AB55, 0x0000FF, 0x5500AB, 0xAB0055
};
Palette PalRainbow = { 8, PalRainbow_ };

// Rainbow colors with alternating stripes of black
Color PalRainbowStripe_[] =
{
    0xFF0000, 0x000000, 0xAB5500, 0x000000, 0xABAB00, 0x000000, 0x00FF00, 0x000000,
    0x00AB55, 0x000000, 0x0000FF, 0x000000, 0x5500AB, 0x000000, 0xAB0055, 0x000000
};
Palette PalRainbowStripe = { 16, PalRainbowStripe_ };


// Blue purple ping red orange yellow (and back)
// Basically, everything but the greens.
// This palette is good for lighting at a club or party.
Color PalParty_[] =
{
    0x5500AB, 0x84007C, 0xB5004B, 0xE5001B,
    0xE81700, 0xB84700, 0xAB7700, 0xABAB00,
    0xAB5500, 0xDD2200, 0xF2000E, 0xC2003E,
    0x8F0071, 0x5F00A1, 0x2F00D0, 0x0007F9
};
Palette PalParty = { 16, PalParty_ };


// Approximate "black body radiation" palette, akin to
// the FastLED 'HeatColor' function.
// Recommend that you use values 0-240 rather than
// the usual 0-255, as the last 15 colors will be
// 'wrapping around' from the hot end to the cold end,
// which looks wrong.
Color PalHeat_[] =
{
    0x700070, 0xFF0000, 0xFFFF00, 0xFFFFCC
};
Palette PalHeat = { 4, PalHeat_ };

/*
Color PalFire_[] =
{
    0x000000, 0x440000, 
    0x990000, 0xFF0000, 
    0xFF6600, 0xFFCC00
};
*/
Color PalFire_[] =
{
    0x000000, 0x220000, 
    0x880000, 0xFF0000, 
    0xFF6600, 0xFFCC00
};
Palette PalFire = { 6, PalFire_ };


Color PalBLR_[] = 
{
    0xe0e0e0, 0xf00000, 0xe0e0e0
};
Palette PalBLR = { 3, PalBLR_};

Color PalUA_[] = 
{
    0xffc000, 0x4040ff
};
Palette PalUA = { 2, PalUA_};


// palettes below are taken from http://www.color-hex.com/color-palettes/ (and modified)

Color PalIceBlue_[] = 
{
    0xffffff, 0x0000ff, 0x00ffff
};
Palette PalIceBlue = { 3, PalIceBlue_};

Color PalXMas_[] = 
{
    0xff0000, 0x00ff00
};
Palette PalXMas = { 2, PalXMas_};

Color PalNY_[] = 
{
    0xffe700, 0xc900ff, 0x2f00ff, 0xff00c1, 0xff00c1
};

Palette PalNY = {5, PalNY_};
