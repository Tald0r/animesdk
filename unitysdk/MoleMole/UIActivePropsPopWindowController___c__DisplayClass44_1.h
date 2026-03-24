#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F51BBF303F6FB2C0;

#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS44_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD22CD00)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS44_1__GETBUDDYLISTBYMODE_B__1_OFFSET UNITYSDK_OFFSET(0xD22CD10)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivePropsPopWindowController___c__DisplayClass44_1_TypeDefinitionIndex = 74522;

	class UIActivePropsPopWindowController___c__DisplayClass44_1 : public ::System::Object
	{
	public:
		::Class_2_F51BBF303F6FB2C0* previewBuddy; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS44_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBuddyListByMode_b__1(::Class_2_F51BBF303F6FB2C0* match)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_F51BBF303F6FB2C0*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS44_1__GETBUDDYLISTBYMODE_B__1_OFFSET))(this, match);
		}
	};
}
