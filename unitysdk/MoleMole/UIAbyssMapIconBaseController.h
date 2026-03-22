#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAbyssMapIconBaseController_Style.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSSMAPICONBASECONTROLLER_SETAFFIXICON_OFFSET UNITYSDK_OFFSET(0xD1B5A60)
#define MOLEMOLE_UIABYSSMAPICONBASECONTROLLER_SETICON_OFFSET UNITYSDK_OFFSET(0xD1B5960)
#define MOLEMOLE_UIABYSSMAPICONBASECONTROLLER_SETMUTEICONINTERNAL_OFFSET UNITYSDK_OFFSET(0xD1B5AE0)
#define MOLEMOLE_UIABYSSMAPICONBASECONTROLLER_SETMUTEICON_OFFSET UNITYSDK_OFFSET(0xD1B59E0)
#define MOLEMOLE_UIABYSSMAPICONBASECONTROLLER_SWITCHSTYLE_OFFSET UNITYSDK_OFFSET(0xD1B58C0)
#define MOLEMOLE_UIABYSSMAPICONBASECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD1B56D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssMapIconBaseController_TypeDefinitionIndex = 44132;

	class UIAbyssMapIconBaseController : public ::MoleMole::UIWidgetController
	{
	public:
		::MoleMole::UIAbyssMapIconBaseController_Style _style; // 0x2A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPICONBASECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SwitchStyle(::MoleMole::UIAbyssMapIconBaseController_Style style, ::UnityEngine::Color baseColor)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAbyssMapIconBaseController_Style, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPICONBASECONTROLLER_SWITCHSTYLE_OFFSET))(this, style, baseColor);
		}

		::System::Void SetIcon(::System::String* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPICONBASECONTROLLER_SETICON_OFFSET))(this, iconPath);
		}

		::System::Void SetMuteIcon(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::UnityEngine::Color>>* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::UnityEngine::Color>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPICONBASECONTROLLER_SETMUTEICON_OFFSET))(this, iconPath);
		}

		::System::Void SetAffixIcon(::System::String* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPICONBASECONTROLLER_SETAFFIXICON_OFFSET))(this, iconPath);
		}

		::System::Void SetMuteIconInternal(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::UnityEngine::Color>>* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::UnityEngine::Color>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPICONBASECONTROLLER_SETMUTEICONINTERNAL_OFFSET))(this, iconPath);
		}
	};
}
