#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_31D08DC027B35B8F_Enum_3_BCA662D3210575AB.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_E97FB7F54C9FC5B2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIMECHBOOTARGETROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAC07D30)
#define MOLEMOLE_UIMECHBOOTARGETROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAC07DD0)
#define MOLEMOLE_UIMECHBOOTARGETROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAC07BE0)
#define MOLEMOLE_UIMECHBOOTARGETROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAC07C80)
#define MOLEMOLE_UIMECHBOOTARGETROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xAC07EB0)
#define MOLEMOLE_UIMECHBOOTARGETROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAC08160)
#define MOLEMOLE_UIMECHBOOTARGETROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAC08190)
#define MOLEMOLE_UIMECHBOOTARGETROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAC08200)
#define MOLEMOLE_UIMECHBOOTARGETROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAC08280)
#define MOLEMOLE_UIMECHBOOTARGETROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAC082E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooTargetRowWidgetController_TypeDefinitionIndex = 53767;

	class UIMechBooTargetRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_E97FB7F54C9FC5B2* _view; // 0x2A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::Class_2_31D08DC027B35B8F_Enum_3_BCA662D3210575AB propertyType, ::System::Int32 reqNum)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_31D08DC027B35B8F_Enum_3_BCA662D3210575AB, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, propertyType, reqNum);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
