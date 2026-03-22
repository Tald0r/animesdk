#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_364;
class Class_2_208CC9941471731A_689;

#define MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER_RIDUBOOOUTFITCONFIGTEMPLATEEXTWITHLEVELCFG__CTOR_OFFSET UNITYSDK_OFFSET(0x9474060)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooChangeClothPageController_RiduBooOutfitConfigTemplateExtWithLevelCfg_TypeDefinitionIndex = 66425;

	class UIRidusGotBooChangeClothPageController_RiduBooOutfitConfigTemplateExtWithLevelCfg : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_689* LevelCfg; // 0x10
		::Class_2_208CC9941471731A_364* ClothCfg; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER_RIDUBOOOUTFITCONFIGTEMPLATEEXTWITHLEVELCFG__CTOR_OFFSET))(this);
		}
	};
}
