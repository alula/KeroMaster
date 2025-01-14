#pragma once

#include <string>
#include <string.h>
#include <raylib.h>
#include "gbin/gfile.h"

using namespace std;

struct Tileset
{
    Texture2D tex;
    u8* tiles = NULL;
    u8 flags;
    u8 textureScale = 2;
    u16 width;
    u16 height;
    static Texture2D attrTex;
    static Texture2D unitType;
    u16 oldWidth; // Editor param.
    u16 oldHeight; // Editor param.

    void Load(string rsc_k, string tilesetName);
    void Unload();
    void Write(string rsc_k, string tilesetName);
    u8 GetTilesetAttr(u8 index);
    u8 GetTilesetAttr(u8 x, u8 y);
    const char* GetAttributeName(u8 index);
    void Draw(u8 index, Vector2 origin, s32 xOff, s32 yOff, f32 mapScale, bool showAttr, bool allowDrawIndex0 = false, bool overrideWidth = false, s8 xOffPixels = 0, s8 yOffPixels = 0, Color tint = WHITE);
    void Draw(u16 x, u16 y, Vector2 origin, s32 xOff, s32 yOff, f32 mapScale, bool showAttr, bool overrideWidth = false, s8 xOffPixels = 0, s8 yOffPixels = 0, Color tint = WHITE);
};