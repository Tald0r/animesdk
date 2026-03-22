#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_13A5931509EDD2A6;
class Class_2_208CC9941471731A_194;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER_ISCOLLECT_OFFSET UNITYSDK_OFFSET(0xBAFF4F0)
#define MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER_ONCLICK_OFFSET UNITYSDK_OFFSET(0xBAFF830)
#define MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBAFEF80)
#define MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xBAFFA80)
#define MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xBAFF100)
#define MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBAFF020)
#define MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBAFEEE0)
#define MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER_REFRESHNEW_OFFSET UNITYSDK_OFFSET(0xBAFF660)
#define MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBAFFB10)
#define MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBAFFB20)
#define MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xBAFFB90)
#define MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xBAFFC00)
#define MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBAFFC80)
#define MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBAFFD00)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooUAVWeaponWidgetController_TypeDefinitionIndex = 72521;

	class UIBangBooUAVWeaponWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_13A5931509EDD2A6* _view; // 0x2D0
		::Class_2_208CC9941471731A_194* m_cfg; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER_REFRESHNEW_OFFSET))(this);
		}

		::System::Void OnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER_ONCLICK_OFFSET))(this);
		}

		::System::Boolean IsCollect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER_ISCOLLECT_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVWEAPONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
