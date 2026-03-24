#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterSize.h"
#include "unitysdk/MoleMole/Config/ShoesType.h"
#include "unitysdk/MoleMole/Config/TerrainMatType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_FOOTPRINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC240410)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FootPrintConfig_TypeDefinitionIndex = 44840;

	class FootPrintConfig : public ::System::Object
	{
	public:
		::System::String* Value; // 0x10
		::System::String* MoveType; // 0x18
		::System::String* MoveState; // 0x20
		::System::String* FootType; // 0x28
		::System::String* RoleType; // 0x30
		::System::String* Des; // 0x38
		::MoleMole::Config::CharacterSize Size; // 0x40
		::MoleMole::Config::TerrainMatType Terrain; // 0x44
		::System::Boolean AnyFootType; // 0x48
		::System::Boolean AnyTerrain; // 0x49
		::System::Boolean AnyRoleType; // 0x4A
		::System::Boolean AnyMoveType; // 0x4B
		::System::Boolean AnyMoveState; // 0x4C
		::System::Boolean AnyShoes; // 0x4D
		::System::Boolean AnySize; // 0x4E
		::MoleMole::Config::ShoesType Shoes; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOOTPRINTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
