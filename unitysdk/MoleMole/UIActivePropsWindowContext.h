#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2187E7700BED0850.h"
#include "unitysdk/Enum_3_32F22BA3DADD2A84.h"
#include "unitysdk/Enum_3_F4E08D0E9B554572.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_8F61B9A09E64A3EA;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVEPROPSWINDOWCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB5D4B10)
#define MOLEMOLE_UIACTIVEPROPSWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB5D4AE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivePropsWindowContext_TypeDefinitionIndex = 58685;

	class UIActivePropsWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Il2CppArray<::System::Int32>* multiBuddySelects; // 0x28
		::System::Collections::Generic::HashSet_1<::System::Int32>* whitelist; // 0x30
		::System::String* TitleText; // 0x38
		::System::Collections::Generic::HashSet_1<::System::Int32>* blacklist; // 0x40
		::System::Func_2<::System::Int32, ::System::ValueTuple_2<::System::Boolean, ::System::String*>>* CheckCustomSelectStr; // 0x48
		::Il2CppArray<::Enum_3_2187E7700BED0850>* sortTypes; // 0x50
		::System::String* buddyLockTipTextMapId; // 0x58
		::System::Collections::Generic::List_1<::System::Int32>* InsertBuddys; // 0x60
		::System::Func_2<::System::Int32, ::System::Boolean>* buddyLockCheckFunc; // 0x68
		::Il2CppArray<::Enum_3_2187E7700BED0850>* highPrioritySortTypes; // 0x70
		::Class_2_8F61B9A09E64A3EA* QuestCfg; // 0x78
		::System::Collections::Generic::List_1<::System::Int32>* hideBuddy; // 0x80
		::Enum_3_F4E08D0E9B554572 SelectType; // 0x88
		::System::Int32 OpenSelectBuddyID; // 0x8C
		::System::Int32 GachaID; // 0x90
		::System::Boolean IsGachaOptionalSelect; // 0x94
		::System::Boolean selectIsEmpty; // 0x95
		::System::Boolean IsPreview; // 0x96
		::System::Int32 GachaOptionalSelectItemID; // 0x98
		::Enum_3_32F22BA3DADD2A84 ShowBuddyMode; // 0x9C

		::System::Void _ctor(::System::Int32 buddySelectCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSWINDOWCONTEXT__CTOR_OFFSET))(this, buddySelectCount);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSWINDOWCONTEXT__CTOR_1_OFFSET))(this);
		}
	};
}
