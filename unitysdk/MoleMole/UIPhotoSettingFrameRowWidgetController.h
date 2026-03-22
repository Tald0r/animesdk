#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_0534849F53467236;
class Class_2_7BF1241850A94308;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIPHOTOSETTINGFRAMEROWWIDGETCONTROLLER_ISUSING_OFFSET UNITYSDK_OFFSET(0xA3DEF50)
#define MOLEMOLE_UIPHOTOSETTINGFRAMEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA3DE8F0)
#define MOLEMOLE_UIPHOTOSETTINGFRAMEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xA3DEA70)
#define MOLEMOLE_UIPHOTOSETTINGFRAMEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA3DE990)
#define MOLEMOLE_UIPHOTOSETTINGFRAMEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA3DE6D0)
#define MOLEMOLE_UIPHOTOSETTINGFRAMEROWWIDGETCONTROLLER_SHOWFILTERROW_OFFSET UNITYSDK_OFFSET(0xA3DEBF0)
#define MOLEMOLE_UIPHOTOSETTINGFRAMEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA3DEFD0)
#define MOLEMOLE_UIPHOTOSETTINGFRAMEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA3DEFE0)
#define MOLEMOLE_UIPHOTOSETTINGFRAMEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xA3DF050)
#define MOLEMOLE_UIPHOTOSETTINGFRAMEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA3DF0D0)
#define MOLEMOLE_UIPHOTOSETTINGFRAMEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA3DF150)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoSettingFrameRowWidgetController_TypeDefinitionIndex = 67017;

	class UIPhotoSettingFrameRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_7BF1241850A94308* _view; // 0x2D0
		::Class_1_0534849F53467236* _frame; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGFRAMEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGFRAMEROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGFRAMEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGFRAMEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGFRAMEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Boolean IsUsing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGFRAMEROWWIDGETCONTROLLER_ISUSING_OFFSET))(this);
		}

		::System::Void ShowFilterRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGFRAMEROWWIDGETCONTROLLER_SHOWFILTERROW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGFRAMEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGFRAMEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGFRAMEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGFRAMEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
