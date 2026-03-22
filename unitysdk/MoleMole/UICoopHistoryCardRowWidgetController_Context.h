#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_1CED8A7C86CF2D5E;
template <typename T> class Class_0_16E4307DCC419505_102;

#define MOLEMOLE_UICOOPHISTORYCARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x8BE5020)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopHistoryCardRowWidgetController_Context_TypeDefinitionIndex = 47749;

	class UICoopHistoryCardRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_102<::Class_3_1CED8A7C86CF2D5E*>* DisplayInfo; // 0x28
		::Class_0_16E4307DCC419505_102<::System::Boolean>* ShowPlatformNameButtonHolding; // 0x30
		::System::Int32 Index; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYCARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
