#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityTeamTrialBuffRowWidgetController; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_ROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA5112C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTeamTrialBuffRowWidgetController_RowData_TypeDefinitionIndex = 37582;

	class UIActivityTeamTrialBuffRowWidgetController_RowData : public ::System::Object
	{
	public:
		::System::Action_1<::MoleMole::UIActivityTeamTrialBuffRowWidgetController*>* onClickOption; // 0x10
		::System::Action_2<::System::Boolean, ::MoleMole::UIActivityTeamTrialBuffRowWidgetController_RowData*>* onOptionSelectChange; // 0x18
		::System::Collections::Generic::HashSet_1<::System::String*>* btnInteractFalseFlags; // 0x20
		::System::Int32 index; // 0x28
		::System::Boolean isSelect; // 0x2C
		::System::Boolean enable; // 0x2D
		::System::Boolean isShowSelect; // 0x2E
		::System::Int32 questID; // 0x30
		::System::Int32 conditionActivityAbilityID; // 0x34
		::System::Int32 effectActivityAbilityID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_ROWDATA__CTOR_OFFSET))(this);
		}
	};
}
