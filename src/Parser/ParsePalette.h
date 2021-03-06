#pragma once

#include "Game.h"
#include "Json/JsonParser.h"

namespace Parser
{
	void parsePalette(Game& game, const rapidjson::Value& elem);
}
