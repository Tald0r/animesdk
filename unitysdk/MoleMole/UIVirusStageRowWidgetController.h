#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_79AE422BA06F6D26_98;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace MoleMole { class UIVirusStageRowWidgetController_Data; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xACF67F0)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xACF7560)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xACF6AA0)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xACF69B0)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_READNEW_OFFSET UNITYSDK_OFFSET(0xACF7790)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_REFRESHANIM_OFFSET UNITYSDK_OFFSET(0xACF7610)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_REFRESHNEW_OFFSET UNITYSDK_OFFSET(0xACF7910)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_REFRESHTRACK_OFFSET UNITYSDK_OFFSET(0xACF7C30)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_REFRESHWIDGET_OFFSET UNITYSDK_OFFSET(0xACF6B80)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xACF7DF0)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER__REFRESHWIDGET_B__11_0_OFFSET UNITYSDK_OFFSET(0xACF7E00)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xACF7EC0)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xACF7F30)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xACF7FA0)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xACF8020)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusStageRowWidgetController_TypeDefinitionIndex = 45431;

	class UIVirusStageRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::String* SelectAnim; // 0x0
		// static const ::System::String* UnselectAnim; // 0x0
		::Class_2_79AE422BA06F6D26_98* _view; // 0x2D0
		::MoleMole::UIVirusStageRowWidgetController_Data* _data; // 0x2D8
		::MoleMole::UIGeneralNewHintWidgetController* _newHintCtrl; // 0x2E0
		::System::Boolean _lastIsSelect; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void RefreshWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_REFRESHWIDGET_OFFSET))(this);
		}

		::System::Void RefreshAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_REFRESHANIM_OFFSET))(this);
		}

		::System::Void RefreshNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_REFRESHNEW_OFFSET))(this);
		}

		::System::Void ReadNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_READNEW_OFFSET))(this);
		}

		::System::Void RefreshTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_REFRESHTRACK_OFFSET))(this);
		}

		::System::Void _RefreshWidget_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER__REFRESHWIDGET_B__11_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
