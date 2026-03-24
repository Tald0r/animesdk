#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBattlePortal_HadalZoneV2PageController_CurrentStatus.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"

#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_UIBATTLEPORTAL_HADALZONEV2PAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xAC3C890)

namespace MoleMole
{
	inline static constexpr unsigned int UIBattlePortal_HadalZoneV2PageController_UIBattlePortal_HadalZoneV2PageContext_TypeDefinitionIndex = 59779;

	class UIBattlePortal_HadalZoneV2PageController_UIBattlePortal_HadalZoneV2PageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Nullable_1<::System::Int32> OverrideLayerIndex; // 0x28
		::MoleMole::UIBattlePortal_HadalZoneV2PageController_CurrentStatus CurrentStatus; // 0x30
		::System::Nullable_1<::System::Int32> OverrideSubLayerIndex; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_UIBATTLEPORTAL_HADALZONEV2PAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
