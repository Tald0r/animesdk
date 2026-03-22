#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMindscapeCutBgController; }

#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9450C50)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER___C__DISPLAYCLASS40_0__SETMASKBGSTATE_G__SETSTATE_0_OFFSET UNITYSDK_OFFSET(0x9450C60)

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeCutBgController___c__DisplayClass40_0_TypeDefinitionIndex = 40784;

	class UIMindscapeCutBgController___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Boolean>* tabState; // 0x10
		::MoleMole::UIMindscapeCutBgController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetMaskBgState_g__SetState_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER___C__DISPLAYCLASS40_0__SETMASKBGSTATE_G__SETSTATE_0_OFFSET))(this);
		}
	};
}
