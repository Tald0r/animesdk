#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_445;
class Class_2_D89CCC627A66D0AD;
namespace System { class String; }

#define MOLEMOLE_UIAVATARSPECIALAWAKENBTNROWWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xBECC8A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSpecialAwakenBtnRowWidgetControllerContext_TypeDefinitionIndex = 48430;

	class UIAvatarSpecialAwakenBtnRowWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_445* Cfg; // 0x28
		::System::String* Name; // 0x30
		::Class_2_D89CCC627A66D0AD* AvatarData; // 0x38
		::System::Boolean IsUp; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENBTNROWWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
