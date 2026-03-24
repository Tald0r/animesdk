#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOMINIMAPITEMSCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0xB1A9DE0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMiniMapItemsContainer_TypeDefinitionIndex = 72641;

	class MonoMiniMapItemsContainer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMINIMAPITEMSCONTAINER__CTOR_OFFSET))(this);
		}
	};
}
