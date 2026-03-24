#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIGACHAPAGECONTEXT_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0xF1EC4A0)
#define MOLEMOLE_UIGACHAPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xF1EC630)
#define MOLEMOLE_UIGACHAPAGECONTEXT___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0xF1EC640)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageContext_TypeDefinitionIndex = 51286;

	class UIGachaPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean openRoleSelect; // 0x28
		::System::Int32 defaultSelectRoleIndex; // 0x2C
		::System::Int32 GachaID; // 0x30
		::System::Int32 GachaScheduleIdForUIGroup; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTEXT_APPLYJUMPPARAS_OFFSET))(this);
		}

		::System::Void __base_ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTEXT___BASE_APPLYJUMPPARAS_OFFSET))(this);
		}
	};
}
