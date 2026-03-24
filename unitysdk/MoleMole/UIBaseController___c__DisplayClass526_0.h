#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS526_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB7561B0)
#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS526_0__PLAYCLOSEANIM_INTERNAL_B__0_OFFSET UNITYSDK_OFFSET(0xB7561C0)
#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS526_0__PLAYCLOSEANIM_INTERNAL_B__1_OFFSET UNITYSDK_OFFSET(0xB7561E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController___c__DisplayClass526_0_TypeDefinitionIndex = 58439;

	class UIBaseController___c__DisplayClass526_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MoleMole::UIBaseController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS526_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayCloseAnim_Internal_b__0(::System::String* backAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS526_0__PLAYCLOSEANIM_INTERNAL_B__0_OFFSET))(this, backAnim);
		}

		::System::Void _PlayCloseAnim_Internal_b__1(::System::String* backAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS526_0__PLAYCLOSEANIM_INTERNAL_B__1_OFFSET))(this, backAnim);
		}
	};
}
