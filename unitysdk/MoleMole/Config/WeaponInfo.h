#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CONFIG_WEAPONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x10AAB180)

namespace MoleMole::Config
{
	inline static constexpr unsigned int WeaponInfo_TypeDefinitionIndex = 56242;

	class WeaponInfo : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 StartRotation; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WEAPONINFO__CTOR_OFFSET))(this);
		}
	};
}
