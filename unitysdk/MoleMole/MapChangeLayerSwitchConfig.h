#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_MAPCHANGELAYERSWITCHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB19D670)

namespace MoleMole
{
	inline static constexpr unsigned int MapChangeLayerSwitchConfig_TypeDefinitionIndex = 77929;

	class MapChangeLayerSwitchConfig : public ::System::Object
	{
	public:
		::System::Int32 FromLayer; // 0x10
		::System::Int32 ToLayer; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAPCHANGELAYERSWITCHCONFIG__CTOR_OFFSET))(this);
		}
	};
}
