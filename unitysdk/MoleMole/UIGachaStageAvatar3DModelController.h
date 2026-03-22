#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGachaStageAvatar3DModelControllerBase.h"

class Class_2_E3B74E53F7AC003C_4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER_APPLYITEMREF2BASECTRLER_OFFSET UNITYSDK_OFFSET(0x7A39430)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7A39300)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7A393A0)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7A39220)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x7A39290)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x7A39A10)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7A39B30)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7A39BA0)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7A39BB0)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x7A39BC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaStageAvatar3DModelController_TypeDefinitionIndex = 78597;

	class UIGachaStageAvatar3DModelController : public ::MoleMole::UIGachaStageAvatar3DModelControllerBase
	{
	public:
		::Class_2_E3B74E53F7AC003C_4* _view; // 0x780

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ApplyItemRef2BaseCtrler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER_APPLYITEMREF2BASECTRLER_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
