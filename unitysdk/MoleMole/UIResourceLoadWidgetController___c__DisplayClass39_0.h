#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ILoader; }

#define MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x7508C00)
#define MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS39_0__STARTLOADGAMECONFIGASSETSBYLOADER_B__0_OFFSET UNITYSDK_OFFSET(0x7508C10)

namespace MoleMole
{
	inline static constexpr unsigned int UIResourceLoadWidgetController___c__DisplayClass39_0_TypeDefinitionIndex = 47577;

	class UIResourceLoadWidgetController___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::Foundation::ILoader* loader; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _StartLoadGameConfigAssetsByLoader_b__0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS39_0__STARTLOADGAMECONFIGASSETSBYLOADER_B__0_OFFSET))(this);
		}
	};
}
