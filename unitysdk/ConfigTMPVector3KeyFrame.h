#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigTMPKeyFrameBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CONFIGTMPVECTOR3KEYFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x65D8820)

inline static constexpr unsigned int ConfigTMPVector3KeyFrame_TypeDefinitionIndex = 55066;

class ConfigTMPVector3KeyFrame : public ::ConfigTMPKeyFrameBase
{
public:
	::UnityEngine::Vector3 Vec; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTMPVECTOR3KEYFRAME__CTOR_OFFSET))(this);
	}
};
