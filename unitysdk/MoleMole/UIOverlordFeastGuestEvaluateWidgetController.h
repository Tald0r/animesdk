#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_04BCD6E1EE335F38;
class Class_2_B1555FA59A3F87CE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIOverlordFeastGuestEvaluateWidgetContext; }
namespace System { class Object; }

#define MOLEMOLE_UIOVERLORDFEASTGUESTEVALUATEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAF8CDC0)
#define MOLEMOLE_UIOVERLORDFEASTGUESTEVALUATEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xAF8CE60)
#define MOLEMOLE_UIOVERLORDFEASTGUESTEVALUATEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAF8D490)
#define MOLEMOLE_UIOVERLORDFEASTGUESTEVALUATEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAF8CC10)
#define MOLEMOLE_UIOVERLORDFEASTGUESTEVALUATEWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xAF8CFB0)
#define MOLEMOLE_UIOVERLORDFEASTGUESTEVALUATEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAF8D570)
#define MOLEMOLE_UIOVERLORDFEASTGUESTEVALUATEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAF8D580)
#define MOLEMOLE_UIOVERLORDFEASTGUESTEVALUATEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xAF8D5F0)
#define MOLEMOLE_UIOVERLORDFEASTGUESTEVALUATEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAF8D670)
#define MOLEMOLE_UIOVERLORDFEASTGUESTEVALUATEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAF8D6F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastGuestEvaluateWidgetController_TypeDefinitionIndex = 66181;

	class UIOverlordFeastGuestEvaluateWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_04BCD6E1EE335F38* _view; // 0x2D0
		::MoleMole::UIOverlordFeastGuestEvaluateWidgetContext* _context; // 0x2D8
		::Class_2_B1555FA59A3F87CE* _model; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTGUESTEVALUATEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTGUESTEVALUATEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTGUESTEVALUATEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTGUESTEVALUATEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTGUESTEVALUATEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTGUESTEVALUATEWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTGUESTEVALUATEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTGUESTEVALUATEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTGUESTEVALUATEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTGUESTEVALUATEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
