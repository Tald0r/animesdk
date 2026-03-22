#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_9760011945436DFC_2;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }

#define MOLEMOLE_UIBANGBOOSKILLDATAROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC909800)
#define MOLEMOLE_UIBANGBOOSKILLDATAROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC9098A0)
#define MOLEMOLE_UIBANGBOOSKILLDATAROWWIDGETCONTROLLER_SETINFO_OFFSET UNITYSDK_OFFSET(0xC909980)
#define MOLEMOLE_UIBANGBOOSKILLDATAROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC909A60)
#define MOLEMOLE_UIBANGBOOSKILLDATAROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC909A90)
#define MOLEMOLE_UIBANGBOOSKILLDATAROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC909B00)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooSkillDataRowWidgetController_TypeDefinitionIndex = 73105;

	class UIBangbooSkillDataRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_9760011945436DFC_2* _view; // 0x2A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSKILLDATAROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSKILLDATAROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSKILLDATAROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetInfo(::System::String* des, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSKILLDATAROWWIDGETCONTROLLER_SETINFO_OFFSET))(this, des, value);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSKILLDATAROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOSKILLDATAROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
