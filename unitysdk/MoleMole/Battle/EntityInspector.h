#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_BATTLE_ENTITYINSPECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x95C7310)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int EntityInspector_TypeDefinitionIndex = 41308;

	class EntityInspector : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ENTITYINSPECTOR__CTOR_OFFSET))(this);
		}
	};
}
