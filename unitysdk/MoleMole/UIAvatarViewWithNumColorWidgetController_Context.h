#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_CA81EEAA0E1B3609_Class_1_431CA56DE0945A7C;
class Class_3_21B05F71874D603A;
class Class_3_4666E61F66433B1E_1;
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_CONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0xC2A4070)
#define MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_CONTEXT__CTOR_2_OFFSET UNITYSDK_OFFSET(0xC2A42E0)
#define MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC2A4060)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarViewWithNumColorWidgetController_Context_TypeDefinitionIndex = 48399;

	class UIAvatarViewWithNumColorWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Foundation::AssetPath HeadPortraitFullPath; // 0x28
		::Class_3_4666E61F66433B1E_1* PlayerBrief; // 0x38
		::Class_1_BE6BF7909AD9D940* briefInfo; // 0x40
		::System::Action* OnClickInvite; // 0x48
		::System::String* PlayerName; // 0x50
		::System::String* UpTipKey; // 0x58
		::System::String* AttributePath; // 0x60
		::System::Boolean EnableWait; // 0x68
		::System::Boolean ShowSelf; // 0x69
		::System::Boolean IsReady; // 0x6A
		::System::Boolean IsShowText; // 0x6B
		::System::Boolean IsPowerEnough; // 0x6C
		::System::Boolean IsLeader; // 0x6D
		::System::Boolean EnableKick; // 0x6E
		::System::Boolean EnableTips; // 0x6F
		::System::Boolean ShowLoading; // 0x70
		::System::Boolean HideName; // 0x71
		::System::Int32 index; // 0x74
		::System::Single ShowTextTimer; // 0x78
		::System::Int32 SelfMessageID; // 0x7C
		::System::Boolean EnableInfoBtn; // 0x80
		::System::Boolean EnableInvite; // 0x81
		::System::Boolean IsRealPlayer; // 0x82
		::System::Boolean EnableAdd; // 0x83
		::System::Boolean ShowAttribute; // 0x84
		::System::Boolean ShowPower; // 0x85
		::System::Boolean IsReject; // 0x86
		::System::Int32 OtherMessageID; // 0x88
		::System::Int32 PowerNum; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Class_2_CA81EEAA0E1B3609_Class_1_431CA56DE0945A7C* coopPlayerInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_CA81EEAA0E1B3609_Class_1_431CA56DE0945A7C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_CONTEXT__CTOR_1_OFFSET))(this, coopPlayerInfo);
		}

		::System::Void _ctor_2(::Class_3_21B05F71874D603A* embattleFightInfo, ::System::Boolean showPlayerIcon)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_21B05F71874D603A*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_CONTEXT__CTOR_2_OFFSET))(this, embattleFightInfo, showPlayerIcon);
		}
	};
}
