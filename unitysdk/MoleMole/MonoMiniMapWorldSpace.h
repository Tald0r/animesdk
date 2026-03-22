#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOMINIMAPWORLDSPACE__CTOR_OFFSET UNITYSDK_OFFSET(0x67C0380)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMiniMapWorldSpace_TypeDefinitionIndex = 63843;

	class MonoMiniMapWorldSpace : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMINIMAPWORLDSPACE__CTOR_OFFSET))(this);
		}
	};
}
