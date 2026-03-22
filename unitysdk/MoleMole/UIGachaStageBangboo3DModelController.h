#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGachaStageBangboo3DModelControllerBase.h"

class Class_2_E3B74E53F7AC003C_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLER_APPLYITEMREF2BASECTRLER_OFFSET UNITYSDK_OFFSET(0x7A39E20)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7A39CF0)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7A39D90)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7A39BD0)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x7A39C80)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x7A3A540)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7A3A5B0)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7A3A620)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7A3A630)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x7A3A6A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaStageBangboo3DModelController_TypeDefinitionIndex = 58824;

	class UIGachaStageBangboo3DModelController : public ::MoleMole::UIGachaStageBangboo3DModelControllerBase
	{
	public:
		::Class_2_E3B74E53F7AC003C_2* _view; // 0x6D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ApplyItemRef2BaseCtrler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLER_APPLYITEMREF2BASECTRLER_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
