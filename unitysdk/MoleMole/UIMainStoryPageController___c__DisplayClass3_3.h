#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainStoryPageController___c__DisplayClass3_0; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS3_3__CTOR_OFFSET UNITYSDK_OFFSET(0xCFCD310)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS3_3__ONSHOW_B__5_OFFSET UNITYSDK_OFFSET(0xCFCD320)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS3_3__ONSHOW_B__6_OFFSET UNITYSDK_OFFSET(0xCFCD8B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController___c__DisplayClass3_3_TypeDefinitionIndex = 71457;

	class UIMainStoryPageController___c__DisplayClass3_3 : public ::System::Object
	{
	public:
		::System::Action* __9__6; // 0x10
		::MoleMole::UIMainStoryPageController___c__DisplayClass3_0* CS___8__locals1; // 0x18
		::System::Action* sceneTask; // 0x20
		::System::Boolean playAnim; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS3_3__CTOR_OFFSET))(this);
		}

		::System::Void _OnShow_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS3_3__ONSHOW_B__5_OFFSET))(this);
		}

		::System::Void _OnShow_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS3_3__ONSHOW_B__6_OFFSET))(this);
		}
	};
}
