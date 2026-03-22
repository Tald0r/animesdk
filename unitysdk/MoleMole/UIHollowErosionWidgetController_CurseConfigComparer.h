#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1F5CE9F6C8A6F157;
namespace System { class String; }

#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_CURSECONFIGCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0xA36EBC0)
#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_CURSECONFIGCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0xA36ED50)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowErosionWidgetController_CurseConfigComparer_TypeDefinitionIndex = 64142;

	class UIHollowErosionWidgetController_CurseConfigComparer : public ::System::Object
	{
	public:
		// static const ::System::String* SPECIAL_TAG; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_CURSECONFIGCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::Class_2_1F5CE9F6C8A6F157* x, ::Class_2_1F5CE9F6C8A6F157* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_1F5CE9F6C8A6F157*, ::Class_2_1F5CE9F6C8A6F157*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_CURSECONFIGCOMPARER_COMPARE_OFFSET))(this, x, y);
		}
	};
}
