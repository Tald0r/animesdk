#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_54.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMAINCITYSIDEBARSKINITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC8B6640)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySidebarSkinItemWidgetController_Data_TypeDefinitionIndex = 50263;

	class UIMainCitySidebarSkinItemWidgetController_Data : public ::System::Object
	{
	public:
		::System::Action_1<::MoleMole::UIMainCitySidebarSkinItemWidgetController_Data*>* OnClickButton; // 0x10
		::Enum_3_0A3761FE34514D6C_54 Type; // 0x18
		::System::Int32 DecorationId; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARSKINITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
