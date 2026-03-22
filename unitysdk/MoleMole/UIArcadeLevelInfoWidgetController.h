#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralShopLevelInfoWidgetController.h"

class Class_2_208CC9941471731A_740;
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIARCADELEVELINFOWIDGETCONTROLLER_SETBYTEMPLATE_OFFSET UNITYSDK_OFFSET(0xDC40570)
#define MOLEMOLE_UIARCADELEVELINFOWIDGETCONTROLLER_SETUPDESCTEXT_OFFSET UNITYSDK_OFFSET(0xDC40CD0)
#define MOLEMOLE_UIARCADELEVELINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDC40F10)
#define MOLEMOLE_UIARCADELEVELINFOWIDGETCONTROLLER___BASE_SETBYTEMPLATE_OFFSET UNITYSDK_OFFSET(0xDC40F90)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeLevelInfoWidgetController_TypeDefinitionIndex = 65545;

	class UIArcadeLevelInfoWidgetController : public ::MoleMole::UIGeneralShopLevelInfoWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADELEVELINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetByTemplate(::System::Object* template_, ::System::Single curLevelData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADELEVELINFOWIDGETCONTROLLER_SETBYTEMPLATE_OFFSET))(this, template_, curLevelData);
		}

		static ::System::Void SetupDescText(::UnityEngine::UI::Extension::UILocalizationText* text, ::Class_2_208CC9941471731A_740* template_, ::System::Single curLevelData)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::UILocalizationText*, ::Class_2_208CC9941471731A_740*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADELEVELINFOWIDGETCONTROLLER_SETUPDESCTEXT_OFFSET))(text, template_, curLevelData);
		}

		::System::Void __base_SetByTemplate(::System::Object* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADELEVELINFOWIDGETCONTROLLER___BASE_SETBYTEMPLATE_OFFSET))(this, P0, P1);
		}
	};
}
