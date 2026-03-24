#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_58B2CC1546FE1550.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x6C68350)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralOptionDropDownBoxContext_TypeDefinitionIndex = 74238;

	class UIGeneralOptionDropDownBoxContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* OnDropDownSelect; // 0x28
		::System::Collections::Generic::List_1<::System::Boolean>* RedPointStateList; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* DropDownContentList; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* DropDownContentRedPointPathList; // 0x40
		::System::Int32 curSelectIndex; // 0x48
		::System::Boolean IsDesCenter; // 0x4C
		::System::Boolean isUp; // 0x4D
		::System::Boolean useLocalYHeight; // 0x4E
		::UnityEngine::Vector3 positionOffset; // 0x50
		::Enum_3_58B2CC1546FE1550 arrowDirection; // 0x5C
		::System::Boolean IgnoreGamepadLeftStickButtonClose; // 0x60
		::System::Boolean ShowRedPointOnRootButton; // 0x61

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
