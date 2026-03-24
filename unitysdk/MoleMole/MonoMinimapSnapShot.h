#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOMINIMAPSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0xB1A9E00)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMinimapSnapShot_TypeDefinitionIndex = 49934;

	class MonoMinimapSnapShot : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMINIMAPSNAPSHOT__CTOR_OFFSET))(this);
		}
	};
}
