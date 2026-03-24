#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONONPCLOOKIKPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0xA3B7F10)

namespace MoleMole
{
	inline static constexpr unsigned int MonoNpcLookIKParameter_TypeDefinitionIndex = 44272;

	class MonoNpcLookIKParameter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single OverrideDistance; // 0x18
		::System::Single OverrideAngle; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCLOOKIKPARAMETER__CTOR_OFFSET))(this);
		}
	};
}
