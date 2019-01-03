#pragma once

#include <string>
#include "valve_sdk/Misc/Color.hpp"

#define OPTION(type, var, val) type var = val

class Config
{
public:
  bool boundingboxON =false;
  bool enemiesonlyON = false;
  bool espON = false;
  bool bhopON = false;
  Color color_esp_ally_visible = Color(0, 128, 255);
  Color color_esp_ally_occluded = Color(255, 255, 0);
  Color color_esp_enemy_occluded = Color(53, 224, 63);
  Color color_esp_enemy_visible = Color(0, 0, 255);
  Color tempcolor = Color(255, 255, 255);

};

extern Config g_Options;
extern bool   g_Unload;
