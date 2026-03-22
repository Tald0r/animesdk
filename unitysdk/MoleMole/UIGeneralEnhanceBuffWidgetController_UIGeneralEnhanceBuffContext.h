#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_79526D80B8F6897C;

#define MOLEMOLE_UIGENERALENHANCEBUFFWIDGETCONTROLLER_UIGENERALENHANCEBUFFCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x8A13130)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralEnhanceBuffWidgetController_UIGeneralEnhanceBuffContext_TypeDefinitionIndex = 53949;

	class UIGeneralEnhanceBuffWidgetController_UIGeneralEnhanceBuffContext : public ::System::Object
	{
	public:
		::Class_1_79526D80B8F6897C* BindNode; // 0x10
		::System::Int32 ItemId; // 0x18
		::System::Boolean IsLock; // 0x1C
		::System::Boolean IsEmpty; // 0x1D
		::System::Boolean IsRecommend; // 0x1E
		::System::Boolean IsAdd; // 0x1F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALENHANCEBUFFWIDGETCONTROLLER_UIGENERALENHANCEBUFFCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
