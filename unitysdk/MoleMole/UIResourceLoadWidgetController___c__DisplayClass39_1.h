#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ILoader; }

#define MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS39_1__CTOR_OFFSET UNITYSDK_OFFSET(0xAE51C20)
#define MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS39_1__STARTLOADGAMECONFIGASSETSBYLOADER_B__1_OFFSET UNITYSDK_OFFSET(0xAE51C30)

namespace MoleMole
{
	inline static constexpr unsigned int UIResourceLoadWidgetController___c__DisplayClass39_1_TypeDefinitionIndex = 47576;

	class UIResourceLoadWidgetController___c__DisplayClass39_1 : public ::System::Object
	{
	public:
		::Foundation::ILoader* loader; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS39_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _StartLoadGameConfigAssetsByLoader_b__1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS39_1__STARTLOADGAMECONFIGASSETSBYLOADER_B__1_OFFSET))(this);
		}
	};
}
