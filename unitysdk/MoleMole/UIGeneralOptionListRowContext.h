#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_58B2CC1546FE1550.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALOPTIONLISTROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xAD336D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralOptionListRowContext_TypeDefinitionIndex = 77011;

	class UIGeneralOptionListRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* title; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* DropDownContentList; // 0x30
		::System::Action_2<::System::Int32, ::System::Int32>* OnDropDownSelect; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* DropDownContentRedPointPathList; // 0x40
		::System::Collections::Generic::List_1<::System::Boolean>* RedPointStateList; // 0x48
		::System::Boolean IgnoreGamepadLeftStickButtonClose; // 0x50
		::System::Boolean IsDesCenter; // 0x51
		::System::Boolean useLocalYHeight; // 0x52
		::System::Boolean ShowRedPointOnRootButton; // 0x53
		::System::Boolean isUp; // 0x54
		::UnityEngine::Vector3 positionOffset; // 0x58
		::System::Int32 index; // 0x64
		::Enum_3_58B2CC1546FE1550 arrowDirection; // 0x68
		::System::Int32 curSelectIndex; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONLISTROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
