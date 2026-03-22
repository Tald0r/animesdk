#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_58B2CC1546FE1550.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x8C0F2E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralOptionDropDownBoxContext_TypeDefinitionIndex = 44427;

	class UIGeneralOptionDropDownBoxContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Boolean>* RedPointStateList; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* DropDownContentList; // 0x30
		::System::Action_1<::System::Int32>* OnDropDownSelect; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* DropDownContentRedPointPathList; // 0x40
		::System::Boolean ShowRedPointOnRootButton; // 0x48
		::UnityEngine::Vector3 positionOffset; // 0x4C
		::Enum_3_58B2CC1546FE1550 arrowDirection; // 0x58
		::System::Int32 curSelectIndex; // 0x5C
		::System::Boolean IgnoreGamepadLeftStickButtonClose; // 0x60
		::System::Boolean IsDesCenter; // 0x61
		::System::Boolean useLocalYHeight; // 0x62
		::System::Boolean isUp; // 0x63

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
