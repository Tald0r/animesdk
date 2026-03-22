#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISocialCircleMemberMoreOptionPopWindowController___c__DisplayClass2_0; }
namespace System { class Action; }

#define MOLEMOLE_UISOCIALCIRCLEMEMBERMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS2_1__CHANGEOWNERCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x9A0F430)
#define MOLEMOLE_UISOCIALCIRCLEMEMBERMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS2_1__CHANGEOWNERCALLBACK_B__1_OFFSET UNITYSDK_OFFSET(0x9A0F720)
#define MOLEMOLE_UISOCIALCIRCLEMEMBERMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9A0F420)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleMemberMoreOptionPopWindowController___c__DisplayClass2_1_TypeDefinitionIndex = 44164;

	class UISocialCircleMemberMoreOptionPopWindowController___c__DisplayClass2_1 : public ::System::Object
	{
	public:
		::MoleMole::UISocialCircleMemberMoreOptionPopWindowController___c__DisplayClass2_0* CS___8__locals1; // 0x10
		::System::Action* __9__1; // 0x18
		::System::UInt32 oldOwnerID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS2_1__CTOR_OFFSET))(this);
		}

		::System::Void _ChangeOwnerCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS2_1__CHANGEOWNERCALLBACK_B__0_OFFSET))(this);
		}

		::System::Void _ChangeOwnerCallback_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS2_1__CHANGEOWNERCALLBACK_B__1_OFFSET))(this);
		}
	};
}
