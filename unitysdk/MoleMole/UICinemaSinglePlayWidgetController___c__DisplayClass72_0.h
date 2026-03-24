#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Tuple_2.h"
#include "unitysdk/MoleMole/CinemaSingleBeatMapConfig_BeatMap_BeatItem.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_153;
class Class_2_7341BF3E408F4DA8_Class_2_5F3C14FED1CE4C5F;
namespace MoleMole { class UICinemaSinglePlayWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDDD69D0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__0_OFFSET UNITYSDK_OFFSET(0xDDD69E0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__1_OFFSET UNITYSDK_OFFSET(0xDDD6C70)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__2_OFFSET UNITYSDK_OFFSET(0xDDD6D70)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__3_OFFSET UNITYSDK_OFFSET(0xDDD6BF0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__4_OFFSET UNITYSDK_OFFSET(0xDDD6D20)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__5_OFFSET UNITYSDK_OFFSET(0xDDD7140)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSinglePlayWidgetController___c__DisplayClass72_0_TypeDefinitionIndex = 38055;

	class UICinemaSinglePlayWidgetController___c__DisplayClass72_0 : public ::System::Object
	{
	public:
		::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>* onClick; // 0x10
		::Class_0_16E4307DCC419505_153* bubbleWidget; // 0x18
		::System::Action* __9__5; // 0x20
		::MoleMole::UICinemaSinglePlayWidgetController* __4__this; // 0x28
		::System::Action* __9__3; // 0x30
		::Class_2_7341BF3E408F4DA8_Class_2_5F3C14FED1CE4C5F* locationView; // 0x38
		::System::Action* __9__4; // 0x40
		::System::Boolean isRightSide; // 0x48
		::System::Int32 bubbleLocation; // 0x4C
		::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem item; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _ShowNormalBubble_b__0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__0_OFFSET))(this);
		}

		::System::Void _ShowNormalBubble_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__3_OFFSET))(this);
		}

		::System::Void _ShowNormalBubble_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__1_OFFSET))(this);
		}

		::System::Void _ShowNormalBubble_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__4_OFFSET))(this);
		}

		::System::Void _ShowNormalBubble_b__2(::System::Boolean _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__2_OFFSET))(this, _);
		}

		::System::Void _ShowNormalBubble_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__5_OFFSET))(this);
		}
	};
}
