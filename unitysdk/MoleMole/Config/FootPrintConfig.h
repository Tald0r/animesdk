#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterSize.h"
#include "unitysdk/MoleMole/Config/ShoesType.h"
#include "unitysdk/MoleMole/Config/TerrainMatType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_FOOTPRINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x62529A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FootPrintConfig_TypeDefinitionIndex = 69354;

	class FootPrintConfig : public ::System::Object
	{
	public:
		::System::String* MoveType; // 0x10
		::System::String* RoleType; // 0x18
		::System::String* Value; // 0x20
		::System::String* FootType; // 0x28
		::System::String* MoveState; // 0x30
		::System::String* Des; // 0x38
		::MoleMole::Config::CharacterSize Size; // 0x40
		::MoleMole::Config::ShoesType Shoes; // 0x44
		::MoleMole::Config::TerrainMatType Terrain; // 0x48
		::System::Boolean AnyShoes; // 0x4C
		::System::Boolean AnySize; // 0x4D
		::System::Boolean AnyRoleType; // 0x4E
		::System::Boolean AnyMoveType; // 0x4F
		::System::Boolean AnyTerrain; // 0x50
		::System::Boolean AnyMoveState; // 0x51
		::System::Boolean AnyFootType; // 0x52

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOOTPRINTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
