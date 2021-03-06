#pragma once

#include "Json/JsonParser.h"
#include "Variable.h"
#include <vector>
#include <string>

class Game;

namespace Parser
{
	Variable getVarOrObjectProperty(const Game& game, const std::string& str);

	std::vector<std::pair<std::string, Variable>> getVariables(const rapidjson::Value& elem);

	void parseVariable(Game& game, const rapidjson::Value& elem);
}
