#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7D127AC1F7DA67EB.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"

class Class_3_4666E61F66433B1E_3;
namespace MoleMole { class UILevelResultPageContext; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIHOLLOWRESULTCONTEXT_ISITEMGETTIPSDUNGEONREWARDOVERFLOW_OFFSET UNITYSDK_OFFSET(0x80B2840)
#define MOLEMOLE_UIHOLLOWRESULTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x80B2A30)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResultContext_TypeDefinitionIndex = 60955;

	class UIHollowResultContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UILevelResultPageContext* levelPageContext; // 0x28
		::Class_3_4666E61F66433B1E_3* dungeonNotify; // 0x30
		::Enum_3_7D127AC1F7DA67EB type; // 0x38
		::System::Int32 missionId; // 0x3C
		::System::Int32 EditorTestFail; // 0x40
		::System::Nullable_1<::System::Int32> NumberResult; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTCONTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsItemGetTipsDungeonRewardOverflow(::System::EventArgs* onItemGetTipsArgs)
		{
			return ((::System::Boolean(*)(::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTCONTEXT_ISITEMGETTIPSDUNGEONREWARDOVERFLOW_OFFSET))(onItemGetTipsArgs);
		}
	};
}
