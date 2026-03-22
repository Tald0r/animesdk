#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SmallTitleSettingEntry.h"

#define MOLEMOLE_PCDX12GRAPHICSMALLTITLESETTINGENTRY_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x67C8770)
#define MOLEMOLE_PCDX12GRAPHICSMALLTITLESETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x67C87D0)
#define MOLEMOLE_PCDX12GRAPHICSMALLTITLESETTINGENTRY___BASE_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x67C87F0)

namespace MoleMole
{
	inline static constexpr unsigned int PCDX12GraphicSmallTitleSettingEntry_TypeDefinitionIndex = 49587;

	class PCDX12GraphicSmallTitleSettingEntry : public ::MoleMole::SmallTitleSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCDX12GRAPHICSMALLTITLESETTINGENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCDX12GRAPHICSMALLTITLESETTINGENTRY_ISSHOWONUIINNER_OFFSET))(this);
		}

		::System::Boolean __base_IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCDX12GRAPHICSMALLTITLESETTINGENTRY___BASE_ISSHOWONUIINNER_OFFSET))(this);
		}
	};
}
