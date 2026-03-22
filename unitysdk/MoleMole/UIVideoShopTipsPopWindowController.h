#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CFD622191BF76048_Struct_2_680BF1744D60EED9.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_79AE422BA06F6D26_24;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIVideoShopTipsPopWindowContext; }

#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x7C5A8D0)
#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x7C5AAD0)
#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7C5B940)
#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x7C5BA70)
#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7C5B9E0)
#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x7C5A8E0)
#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_SORTFUNC_OFFSET UNITYSDK_OFFSET(0x7C5BB70)
#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x7C5BC80)
#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER__INITVIEW_B__8_0_OFFSET UNITYSDK_OFFSET(0x7C5BDC0)
#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER__INITVIEW_B__8_1_OFFSET UNITYSDK_OFFSET(0x7C5BC90)
#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7C5BE00)
#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x7C5BE70)
#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7C5BEA0)
#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x7C5BEB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoShopTipsPopWindowController_TypeDefinitionIndex = 39259;

	class UIVideoShopTipsPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79AE422BA06F6D26_24* _view; // 0x2F8
		::MoleMole::UIVideoShopTipsPopWindowContext* _context; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Int32 SortFunc(::Class_2_CFD622191BF76048_Struct_2_680BF1744D60EED9 lhs, ::Class_2_CFD622191BF76048_Struct_2_680BF1744D60EED9 rhs)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_CFD622191BF76048_Struct_2_680BF1744D60EED9, ::Class_2_CFD622191BF76048_Struct_2_680BF1744D60EED9))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_SORTFUNC_OFFSET))(this, lhs, rhs);
		}

		::System::Void _InitView_b__8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER__INITVIEW_B__8_1_OFFSET))(this);
		}

		::System::Void _InitView_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER__INITVIEW_B__8_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
