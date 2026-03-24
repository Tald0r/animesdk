#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapRightTastListWidget02WidgetContext.h"

class Class_1_2BA8CE33B4CFFE77;
template <typename T> class Class_1_634159F7561ADAA0;

#define MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTEXT_QUEST__CTOR_OFFSET UNITYSDK_OFFSET(0xABBFC10)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightStreetInfoContext_Quest_TypeDefinitionIndex = 48905;

	class UIUrbanMapRightStreetInfoContext_Quest : public ::MoleMole::UIUrbanMapRightTastListWidget02WidgetContext
	{
	public:
		::Class_1_634159F7561ADAA0<::Class_1_2BA8CE33B4CFFE77*>* QuestDatas; // 0x30
		::System::Int32 MapAreaId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTEXT_QUEST__CTOR_OFFSET))(this);
		}
	};
}
