#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPlayerAccessoryPageController; }
namespace MoleMole { class UIPlayerAccessoryPageControllerContext; }

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS71_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB25EAE0)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS71_0__ONSHOW_B__0_OFFSET UNITYSDK_OFFSET(0xB25EAF0)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS71_0__ONSHOW_B__1_OFFSET UNITYSDK_OFFSET(0xB25EB10)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageController___c__DisplayClass71_0_TypeDefinitionIndex = 77136;

	class UIPlayerAccessoryPageController___c__DisplayClass71_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPlayerAccessoryPageController* __4__this; // 0x10
		::MoleMole::UIPlayerAccessoryPageControllerContext* ctx; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS71_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnShow_b__0(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS71_0__ONSHOW_B__0_OFFSET))(this, index);
		}

		::System::Boolean _OnShow_b__1(::System::Int32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS71_0__ONSHOW_B__1_OFFSET))(this, x);
		}
	};
}
