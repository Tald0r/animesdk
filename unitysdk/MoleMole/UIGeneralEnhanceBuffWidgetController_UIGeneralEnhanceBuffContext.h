#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5A585DEB704A07E2;

#define MOLEMOLE_UIGENERALENHANCEBUFFWIDGETCONTROLLER_UIGENERALENHANCEBUFFCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB2B9610)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralEnhanceBuffWidgetController_UIGeneralEnhanceBuffContext_TypeDefinitionIndex = 53132;

	class UIGeneralEnhanceBuffWidgetController_UIGeneralEnhanceBuffContext : public ::System::Object
	{
	public:
		::Class_1_5A585DEB704A07E2* BindNode; // 0x10
		::System::Boolean IsRecommend; // 0x18
		::System::Boolean IsEmpty; // 0x19
		::System::Boolean IsLock; // 0x1A
		::System::Boolean IsAdd; // 0x1B
		::System::Int32 ItemId; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALENHANCEBUFFWIDGETCONTROLLER_UIGENERALENHANCEBUFFCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
