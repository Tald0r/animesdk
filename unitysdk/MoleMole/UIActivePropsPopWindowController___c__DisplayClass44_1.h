#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_0495AF03A29D7705;

#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS44_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA4B6CC0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS44_1__GETBUDDYLISTBYMODE_B__1_OFFSET UNITYSDK_OFFSET(0xA4B6CD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivePropsPopWindowController___c__DisplayClass44_1_TypeDefinitionIndex = 78900;

	class UIActivePropsPopWindowController___c__DisplayClass44_1 : public ::System::Object
	{
	public:
		::Class_2_0495AF03A29D7705* previewBuddy; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS44_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBuddyListByMode_b__1(::Class_2_0495AF03A29D7705* match)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_0495AF03A29D7705*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS44_1__GETBUDDYLISTBYMODE_B__1_OFFSET))(this, match);
		}
	};
}
