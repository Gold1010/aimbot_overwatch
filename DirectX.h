#pragma once
#include "Player.h"
void CleanupDX();//���DX
void DirectXInit();
void  DirectXRender();
void GetClosestPlayerToCrossHair(Player player, float aimfov, float &max);
