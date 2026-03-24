#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_D89CCC627A66D0AD;

#define MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xBFC0800)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSpecialAwakenPageControllerContext_TypeDefinitionIndex = 49189;

	class UIAvatarSpecialAwakenPageControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_D89CCC627A66D0AD* AvatarData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
