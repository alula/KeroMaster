#pragma once
#include <imgui.h>
#include <string>
#include "../types.h"
using namespace std;

// Edit a number with arrows on the side.
void ImGuiNumEdit(string name, s64& data, size_t min, size_t max, string format = "%d");

// Show a tooltip if hovered.
void ImGuiTooltip(string tip);

// Edit a string.
bool ImGuiStringEdit(const char* label, string* toEdit);

// Edit a color.
void ImGuiColorEdit(const char* label, u8* toEdit);