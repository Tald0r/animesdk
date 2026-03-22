#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralShopLevelInfoWidgetController.h"

class Class_2_208CC9941471731A_576;
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIVIDEOSHOPLEVELINFOWIDGETCONTROLLER_SETBYTEMPLATE_OFFSET UNITYSDK_OFFSET(0x9A312C0)
#define MOLEMOLE_UIVIDEOSHOPLEVELINFOWIDGETCONTROLLER_SETUPDESCTEXT_OFFSET UNITYSDK_OFFSET(0x9A31A00)
#define MOLEMOLE_UIVIDEOSHOPLEVELINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9A31DA0)
#define MOLEMOLE_UIVIDEOSHOPLEVELINFOWIDGETCONTROLLER___BASE_SETBYTEMPLATE_OFFSET UNITYSDK_OFFSET(0x9A31E20)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoshopLevelInfoWidgetController_TypeDefinitionIndex = 50727;

	class UIVideoshopLevelInfoWidgetController : public ::MoleMole::UIGeneralShopLevelInfoWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPLEVELINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetByTemplate(::System::Object* template_, ::System::Single curLevelData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPLEVELINFOWIDGETCONTROLLER_SETBYTEMPLATE_OFFSET))(this, template_, curLevelData);
		}

		static ::System::Void SetupDescText(::UnityEngine::UI::Extension::UILocalizationText* text, ::Class_2_208CC9941471731A_576* template_, ::System::Single curLevelData)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::UILocalizationText*, ::Class_2_208CC9941471731A_576*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPLEVELINFOWIDGETCONTROLLER_SETUPDESCTEXT_OFFSET))(text, template_, curLevelData);
		}

		::System::Void __base_SetByTemplate(::System::Object* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPLEVELINFOWIDGETCONTROLLER___BASE_SETBYTEMPLATE_OFFSET))(this, P0, P1);
		}
	};
}
