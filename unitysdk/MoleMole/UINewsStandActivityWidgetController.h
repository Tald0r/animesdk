#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_208CC9941471731A_581;
class Class_2_75FB4A09078427E5_3;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC81D900)
#define MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC81D9A0)
#define MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER_UPDATEHEADLINE_OFFSET UNITYSDK_OFFSET(0xC81D6D0)
#define MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC81DA80)
#define MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC81DAB0)
#define MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC81DB20)

namespace MoleMole
{
	inline static constexpr unsigned int UINewsStandActivityWidgetController_TypeDefinitionIndex = 48887;

	class UINewsStandActivityWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_75FB4A09078427E5_3* _view; // 0x2A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateHeadLine(::Class_2_208CC9941471731A_581* config)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_581*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER_UPDATEHEADLINE_OFFSET))(this, config);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDACTIVITYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
