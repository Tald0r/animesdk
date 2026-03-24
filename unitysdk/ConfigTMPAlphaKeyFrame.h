#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigTMPKeyFrameBase.h"

#define CONFIGTMPALPHAKEYFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x6F6CF40)

inline static constexpr unsigned int ConfigTMPAlphaKeyFrame_TypeDefinitionIndex = 41521;

class ConfigTMPAlphaKeyFrame : public ::ConfigTMPKeyFrameBase
{
public:
	::System::Byte Alpha; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTMPALPHAKEYFRAME__CTOR_OFFSET))(this);
	}
};
