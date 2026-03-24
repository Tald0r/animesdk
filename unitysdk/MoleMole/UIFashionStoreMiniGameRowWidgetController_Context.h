#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFASHIONSTOREMINIGAMEROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xF1E5300)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreMiniGameRowWidgetController_Context_TypeDefinitionIndex = 41229;

	class UIFashionStoreMiniGameRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* beatTypes; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* trails; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* beats; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMINIGAMEROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
