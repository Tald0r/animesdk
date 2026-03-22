#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_D06919D0930604DE_Enum_3_ABEED6B2F204867D.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIVOIDFRONTLEVELRESULTROWWIDGETCONTROLLER_RECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8821940)

namespace MoleMole
{
	inline static constexpr unsigned int UIVoidFrontLevelResultRowWidgetController_RecordData_TypeDefinitionIndex = 70666;

	class UIVoidFrontLevelResultRowWidgetController_RecordData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* nameKey; // 0x28
		::System::String* valueStr; // 0x30
		::Class_4_D06919D0930604DE_Enum_3_ABEED6B2F204867D medalRank; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELRESULTROWWIDGETCONTROLLER_RECORDDATA__CTOR_OFFSET))(this);
		}
	};
}
