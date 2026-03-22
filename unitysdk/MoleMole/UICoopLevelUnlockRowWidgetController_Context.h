#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_835;
class Class_2_8F61B9A09E64A3EA;
namespace System { class String; }

#define MOLEMOLE_UICOOPLEVELUNLOCKROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA26DD90)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopLevelUnlockRowWidgetController_Context_TypeDefinitionIndex = 58663;

	class UICoopLevelUnlockRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_835* CoopQuestTemplate; // 0x28
		::Class_2_8F61B9A09E64A3EA* QuestTemplate; // 0x30
		::System::String* TextKey; // 0x38
		::System::Boolean ShowNightmare; // 0x40
		::System::Boolean ShowNormal; // 0x41
		::System::Boolean ShowChallenge; // 0x42
		::System::Boolean ShowStudy; // 0x43

		::System::Void _ctor(::System::Int32 questId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELUNLOCKROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this, questId);
		}
	};
}
