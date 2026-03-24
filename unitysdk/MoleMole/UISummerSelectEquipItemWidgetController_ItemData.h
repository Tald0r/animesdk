#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_325;

#define MOLEMOLE_UISUMMERSELECTEQUIPITEMWIDGETCONTROLLER_ITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9EE3020)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerSelectEquipItemWidgetController_ItemData_TypeDefinitionIndex = 49282;

	class UISummerSelectEquipItemWidgetController_ItemData : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_325* LevelInfo; // 0x10
		::System::Int32 MaxEquipCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTEQUIPITEMWIDGETCONTROLLER_ITEMDATA__CTOR_OFFSET))(this);
		}
	};
}
