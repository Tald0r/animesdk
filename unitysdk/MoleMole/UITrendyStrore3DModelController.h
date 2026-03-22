#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"

class Class_2_E6A09AD9C43392D8_4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER_INITMAINVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xA41D7E0)
#define MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA41D6B0)
#define MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA41D750)
#define MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA41D1B0)
#define MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA41D220)
#define MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER_SETCAMERA_OFFSET UNITYSDK_OFFSET(0xA41D2F0)
#define MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA41D9A0)
#define MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER___BASE_INITMAINVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xA41DA10)
#define MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA41DA70)
#define MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA41DAE0)
#define MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA41DAF0)
#define MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA41DB00)

namespace MoleMole
{
	inline static constexpr unsigned int UITrendyStrore3DModelController_TypeDefinitionIndex = 52086;

	class UITrendyStrore3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		::Class_2_E6A09AD9C43392D8_4* _view; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitMainVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER_INITMAINVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void SetCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER_SETCAMERA_OFFSET))(this);
		}

		::System::Void __base_InitMainVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER___BASE_INITMAINVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTRORE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
