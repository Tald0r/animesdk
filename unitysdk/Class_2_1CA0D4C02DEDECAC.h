#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define CLASS_2_1CA0D4C02DEDECAC_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xA0EFED0)
#define CLASS_2_1CA0D4C02DEDECAC__CTOR_OFFSET UNITYSDK_OFFSET(0xA0EFEC0)

inline static constexpr unsigned int Class_2_1CA0D4C02DEDECAC_TypeDefinitionIndex = 40754;

class Class_2_1CA0D4C02DEDECAC : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Cinemachine::CinemachineVirtualCameraBase* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CA0D4C02DEDECAC__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CA0D4C02DEDECAC_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}
};
