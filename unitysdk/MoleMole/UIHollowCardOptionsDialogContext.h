#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_15A8EF2824547B27.h"
#include "unitysdk/Enum_3_629D4F26795DE047.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_F092F61C50FB9E29.h"
#include "unitysdk/Struct_2_F25142AAEFFBD401.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_658;
class Class_1_0D6706375CDAAE8C;
class Class_1_14671E1C01F5FAC8;
class Class_1_3ACFABBD8F118E93;
class Class_1_4F9417780723166C;
class Class_1_661077F66F5DB866;
class Class_1_77D255857CC40452;
class Class_1_83665B095F1535B5_6;
class Class_1_ED8EA8A424D45C15;
class Class_2_A8B97606E71328D6;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGCONTEXT_CONTAINSCHOICE_OFFSET UNITYSDK_OFFSET(0xC013CE0)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC013EB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionsDialogContext_TypeDefinitionIndex = 67842;

	class UIHollowCardOptionsDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Action*>* refreshAction; // 0x28
		::System::Collections::Generic::List_1<::Class_1_77D255857CC40452*>* CombineCards; // 0x30
		::Class_1_14671E1C01F5FAC8* pureData; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* cardIndexMap; // 0x40
		::Class_1_ED8EA8A424D45C15* ChoiceNode; // 0x48
		::System::Collections::Generic::List_1<::Class_1_4F9417780723166C*>* RewardCards; // 0x50
		::Struct_2_F092F61C50FB9E29 GiveInfo; // 0x58
		::System::Action_1<::System::Action*>* cancelAction; // 0x68
		::Class_2_A8B97606E71328D6* graph; // 0x70
		::System::Action* onGiveUp; // 0x78
		::Class_0_16E4307DCC419505_658* RefreshInfo; // 0x80
		::System::Action_3<::System::Int32, ::System::Int32, ::System::Action*>* chooseAction; // 0x88
		::System::Action_2<::Class_1_661077F66F5DB866*, ::Class_1_3ACFABBD8F118E93*>* onConfirm; // 0x90
		::System::Func_1<::System::String*>* SelectTipsInfoOverride; // 0x98
		::Class_1_83665B095F1535B5_6* Config; // 0xA0
		::Class_1_0D6706375CDAAE8C* pureOldCard; // 0xA8
		::Class_1_0D6706375CDAAE8C* pureNewCard; // 0xB0
		::Struct_2_F25142AAEFFBD401 OptionInfo; // 0xB8
		::System::Nullable_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>> giveUpItem; // 0xC0
		::Enum_3_629D4F26795DE047 ChoiceUIType; // 0xCC
		::Enum_3_15A8EF2824547B27 ShowType; // 0xD0
		::System::UInt32 initialRelicUID; // 0xD4
		::System::Boolean ShowBottomPanel; // 0xD8
		::System::Boolean showCancel; // 0xD9
		::System::Boolean add; // 0xDA
		::System::Boolean ShowBG; // 0xDB
		::System::Boolean PlaySpecialFade; // 0xDC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean ContainsChoice(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGCONTEXT_CONTAINSCHOICE_OFFSET))(this, index);
		}
	};
}
