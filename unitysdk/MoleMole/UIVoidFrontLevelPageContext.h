#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_121CF606CB7E9CD1_1.h"
#include "unitysdk/Enum_3_D39CEE6C882CC2A0.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTEXT_GENTONODEDETAILCONTEXT_OFFSET UNITYSDK_OFFSET(0xAE9D980)
#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTEXT_GENTONODELISTCONTEXT_OFFSET UNITYSDK_OFFSET(0xAE9D8C0)
#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTEXT_RESETCONTEXT_OFFSET UNITYSDK_OFFSET(0xAE9D850)
#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xAE9D970)

namespace MoleMole
{
	inline static constexpr unsigned int UIVoidFrontLevelPageContext_TypeDefinitionIndex = 54840;

	class UIVoidFrontLevelPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 nodeId; // 0x28
		::System::Int32 battleId; // 0x2C
		::Enum_3_D39CEE6C882CC2A0 widgetType; // 0x30
		::Enum_3_121CF606CB7E9CD1_1 difficulty; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void ResetContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTEXT_RESETCONTEXT_OFFSET))(this);
		}

		static ::MoleMole::UIVoidFrontLevelPageContext* GenToNodeListContext(::Enum_3_121CF606CB7E9CD1_1 difficulty, ::System::Int32 focusNodeId)
		{
			return ((::MoleMole::UIVoidFrontLevelPageContext*(*)(::Enum_3_121CF606CB7E9CD1_1, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTEXT_GENTONODELISTCONTEXT_OFFSET))(difficulty, focusNodeId);
		}

		static ::MoleMole::UIVoidFrontLevelPageContext* GenToNodeDetailContext(::System::Int32 openNodeId, ::System::Int32 openBattleId)
		{
			return ((::MoleMole::UIVoidFrontLevelPageContext*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTEXT_GENTONODEDETAILCONTEXT_OFFSET))(openNodeId, openBattleId);
		}
	};
}
