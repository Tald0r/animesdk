#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_D89CCC627A66D0AD;

#define MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB2CDFA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookRoleCardWidgetController_Context_TypeDefinitionIndex = 37779;

	class UIHandBookRoleCardWidgetController_Context : public ::System::Object
	{
	public:
		::Class_2_D89CCC627A66D0AD* AvatarData; // 0x10
		::System::Boolean IsPromoted; // 0x18
		::System::Boolean IsShowWishListTarget; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
