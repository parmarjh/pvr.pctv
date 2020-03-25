/*
 *  Copyright (C) 2005-2020 Team Kodi
 *  Copyright (C) 2010 Marcel Groothuis
 *  https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSE.md for more information.
 */

#pragma once

#include "client.h"
#include <string>
#include <json/json.h>

#define E_SUCCESS 0
#define E_FAILED -1
#define E_EMPTYRESPONSE -2

class cRest
{
public:
	cRest(void) {};
	~cRest(void) {};

	int Get(const std::string& command, const std::string& arguments, Json::Value& json_response);
	int Post(const std::string& command, const std::string& arguments, Json::Value& json_response);
};



int httpRequest(const std::string& command, const std::string& arguments, const bool write, std::string& json_response);


