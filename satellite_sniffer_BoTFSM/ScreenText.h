#pragma once
#include <string>
#include "Texture.h"

class ScreenText : public Texture {
public:
	ScreenText(std::string& text);
	void setAsRenderTarget() override;
};

