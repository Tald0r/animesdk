#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOIGNOREGROUNDCHECK__CTOR_OFFSET UNITYSDK_OFFSET(0xA472CF0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoIgnoreGroundCheck_TypeDefinitionIndex = 41383;

	class MonoIgnoreGroundCheck : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOIGNOREGROUNDCHECK__CTOR_OFFSET))(this);
		}
	};
}
