#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole { class UIMainCityChatPlayWidgetController___c__DisplayClass69_0; }
namespace MoleMole::Battle { class AnimatorParamControl; }

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS69_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC126700)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS69_1__INLEVELPLAYSTORYNODE_B__1_OFFSET UNITYSDK_OFFSET(0xC126710)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController___c__DisplayClass69_1_TypeDefinitionIndex = 53833;

	class UIMainCityChatPlayWidgetController___c__DisplayClass69_1 : public ::System::Object
	{
	public:
		::MoleMole::Battle::AnimatorParamControl* animatorParamControl; // 0x10
		::Class_3_F33F9DC5F4112336* animatorComponent; // 0x18
		::MoleMole::UIMainCityChatPlayWidgetController___c__DisplayClass69_0* CS___8__locals1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS69_1__CTOR_OFFSET))(this);
		}

		::System::Void _InLevelPlayStoryNode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS69_1__INLEVELPLAYSTORYNODE_B__1_OFFSET))(this);
		}
	};
}
