#pragma once

#include "utils.hpp"
#include "api.hpp"

ModID ID;

extern "C" Mod init(ModID p_modId);

void initFunctions(ApiFunctions &p_api);
void initItems();
void initBlocks();
