#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_80DF1DB3FC47B2D6;
class Class_2_7BEEB90214042948_2;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_ONCLICKJUMP_OFFSET UNITYSDK_OFFSET(0x86EE710)
#define MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x86EE230)
#define MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x86EE520)
#define MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x86EE3B0)
#define MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x86EE2D0)
#define MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x86EE120)
#define MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_SETJUMPACCESSDATA_OFFSET UNITYSDK_OFFSET(0x86EE660)
#define MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x86EE960)
#define MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x86EE970)
#define MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x86EE9E0)
#define MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x86EEA60)
#define MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x86EEA70)
#define MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x86EEAF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIJumpButtonItemWidgetController_TypeDefinitionIndex = 41091;

	class UIJumpButtonItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_7BEEB90214042948_2* _view; // 0x2D0
		::Class_1_80DF1DB3FC47B2D6* _jumpAccessData; // 0x2D8
		::System::UInt32 _soundItemJumpScopeId; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetJumpAccessData(::Class_1_80DF1DB3FC47B2D6* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_80DF1DB3FC47B2D6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_SETJUMPACCESSDATA_OFFSET))(this, data);
		}

		::System::Void OnClickJump()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER_ONCLICKJUMP_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJUMPBUTTONITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
