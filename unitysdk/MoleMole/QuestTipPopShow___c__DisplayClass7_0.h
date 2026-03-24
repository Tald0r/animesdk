#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class QuestTipPopShow; }
namespace MoleMole { class UIMainCityPageController; }
namespace System { class Action; }

#define MOLEMOLE_QUESTTIPPOPSHOW___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA658AF0)
#define MOLEMOLE_QUESTTIPPOPSHOW___C__DISPLAYCLASS7_0__ONPROCESS_B__0_OFFSET UNITYSDK_OFFSET(0xA658B00)
#define MOLEMOLE_QUESTTIPPOPSHOW___C__DISPLAYCLASS7_0__ONPROCESS_B__1_OFFSET UNITYSDK_OFFSET(0xA659050)
#define MOLEMOLE_QUESTTIPPOPSHOW___C__DISPLAYCLASS7_0__ONPROCESS_B__2_OFFSET UNITYSDK_OFFSET(0xA659100)
#define MOLEMOLE_QUESTTIPPOPSHOW___C__DISPLAYCLASS7_0__ONPROCESS_B__3_OFFSET UNITYSDK_OFFSET(0xA659130)
#define MOLEMOLE_QUESTTIPPOPSHOW___C__DISPLAYCLASS7_0__ONPROCESS_B__4_OFFSET UNITYSDK_OFFSET(0xA6591E0)

namespace MoleMole
{
	inline static constexpr unsigned int QuestTipPopShow___c__DisplayClass7_0_TypeDefinitionIndex = 69328;

	class QuestTipPopShow___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityPageController* mainPage; // 0x10
		::System::Action* __9__1; // 0x18
		::MoleMole::QuestTipPopShow* __4__this; // 0x20
		::System::Action* __9__3; // 0x28
		::System::Action* __9__2; // 0x30
		::System::Action* __9__4; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUESTTIPPOPSHOW___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnProcess_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUESTTIPPOPSHOW___C__DISPLAYCLASS7_0__ONPROCESS_B__0_OFFSET))(this);
		}

		::System::Void _OnProcess_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUESTTIPPOPSHOW___C__DISPLAYCLASS7_0__ONPROCESS_B__1_OFFSET))(this);
		}

		::System::Void _OnProcess_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUESTTIPPOPSHOW___C__DISPLAYCLASS7_0__ONPROCESS_B__2_OFFSET))(this);
		}

		::System::Void _OnProcess_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUESTTIPPOPSHOW___C__DISPLAYCLASS7_0__ONPROCESS_B__3_OFFSET))(this);
		}

		::System::Void _OnProcess_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUESTTIPPOPSHOW___C__DISPLAYCLASS7_0__ONPROCESS_B__4_OFFSET))(this);
		}
	};
}
