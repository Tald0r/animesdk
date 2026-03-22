#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_14.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"
#include "unitysdk/MoleMole/UIGeneralIntimacyUpPopWindowController_Context_Type.h"
#include "unitysdk/System/Nullable_1.h"

#define MOLEMOLE_UIINTIMACYUPV2_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xB2280F0)
#define MOLEMOLE_UIINTIMACYUPV2_ONPROCESS_OFFSET UNITYSDK_OFFSET(0xB228210)
#define MOLEMOLE_UIINTIMACYUPV2_SHOWUI_OFFSET UNITYSDK_OFFSET(0xB228280)
#define MOLEMOLE_UIINTIMACYUPV2__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB2281C0)
#define MOLEMOLE_UIINTIMACYUPV2__CTOR_OFFSET UNITYSDK_OFFSET(0xB228100)

namespace MoleMole
{
	inline static constexpr unsigned int UIIntimacyUpV2_TypeDefinitionIndex = 73382;

	class UIIntimacyUpV2 : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Nullable_1<::System::Int32> curTrustLevel; // 0x28
		::MoleMole::UIGeneralIntimacyUpPopWindowController_Context_Type modTrustType; // 0x30
		::System::Int32 partnerID; // 0x34

		::System::Void _ctor(::System::Int32 partnerID, ::System::Nullable_1<::System::Int32> curTrustLevel, ::Enum_3_DB663931210BBC27_14 partnerModTrustType, ::System::Boolean isUpGrade)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Int32>, ::Enum_3_DB663931210BBC27_14, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTIMACYUPV2__CTOR_OFFSET))(this, partnerID, curTrustLevel, partnerModTrustType, isUpGrade);
		}

		::System::Void _ctor_1(::System::Int32 partnerID, ::System::Nullable_1<::System::Int32> curTrustLevel, ::MoleMole::UIGeneralIntimacyUpPopWindowController_Context_Type modTrustType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Int32>, ::MoleMole::UIGeneralIntimacyUpPopWindowController_Context_Type))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTIMACYUPV2__CTOR_1_OFFSET))(this, partnerID, curTrustLevel, modTrustType);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTIMACYUPV2_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTIMACYUPV2_ONPROCESS_OFFSET))(this);
		}

		::System::Void ShowUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTIMACYUPV2_SHOWUI_OFFSET))(this);
		}
	};
}
