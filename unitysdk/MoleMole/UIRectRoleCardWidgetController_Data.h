#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_D89CCC627A66D0AD;

#define MOLEMOLE_UIRECTROLECARDWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA23B150)

namespace MoleMole
{
	inline static constexpr unsigned int UIRectRoleCardWidgetController_Data_TypeDefinitionIndex = 72377;

	class UIRectRoleCardWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_D89CCC627A66D0AD* avatarItem; // 0x10
		::System::Boolean IsDefault; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECTROLECARDWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
