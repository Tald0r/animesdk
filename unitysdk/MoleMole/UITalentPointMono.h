#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_UITALENTPOINTMONO__CTOR_OFFSET UNITYSDK_OFFSET(0x7C48730)

namespace MoleMole
{
	inline static constexpr unsigned int UITalentPointMono_TypeDefinitionIndex = 78164;

	class UITalentPointMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 PointID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITALENTPOINTMONO__CTOR_OFFSET))(this);
		}
	};
}
