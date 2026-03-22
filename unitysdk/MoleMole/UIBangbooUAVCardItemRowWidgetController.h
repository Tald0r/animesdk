#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_416;
class Class_2_352F950ED9B237CC;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIBANGBOOUAVCARDITEMROWWIDGETCONTROLLER_ISCOLLECT_OFFSET UNITYSDK_OFFSET(0xDC5FF40)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMROWWIDGETCONTROLLER_ONCLICK_OFFSET UNITYSDK_OFFSET(0xDC60280)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xDC5F9B0)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xDC604D0)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xDC5FA50)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMROWWIDGETCONTROLLER_REFRESHNEW_OFFSET UNITYSDK_OFFSET(0xDC600B0)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDC605B0)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xDC605C0)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xDC60630)
#define MOLEMOLE_UIBANGBOOUAVCARDITEMROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xDC606A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooUAVCardItemRowWidgetController_TypeDefinitionIndex = 62022;

	class UIBangbooUAVCardItemRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_352F950ED9B237CC* _view; // 0x2D0
		::Class_2_208CC9941471731A_416* m_cfg; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMROWWIDGETCONTROLLER_ONCLICK_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Boolean IsCollect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMROWWIDGETCONTROLLER_ISCOLLECT_OFFSET))(this);
		}

		::System::Void RefreshNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMROWWIDGETCONTROLLER_REFRESHNEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVCARDITEMROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
