#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UILevelResultDialogPopWindowController.h"

class Class_1_2A09C8C0CD4D6ED4_1;
namespace MoleMole { class UIBigSceneResultDialogPopWindowControllerContext; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER_CREATEDATA_OFFSET UNITYSDK_OFFSET(0xDC614B0)
#define MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xDC609C0)
#define MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xDC607B0)
#define MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xDC608F0)
#define MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xDC60B00)
#define MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDC62D50)
#define MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER___BASE_CREATEDATA_OFFSET UNITYSDK_OFFSET(0xDC62D60)
#define MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xDC62D70)
#define MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xDC62D80)
#define MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xDC62D90)
#define MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER___BASE_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xDC62DA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBigSceneResultDialogPopWindowController_TypeDefinitionIndex = 59023;

	class UIBigSceneResultDialogPopWindowController : public ::MoleMole::UILevelResultDialogPopWindowController
	{
	public:
		::MoleMole::UIBigSceneResultDialogPopWindowControllerContext* _context; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void PrepareData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER_PREPAREDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_2A09C8C0CD4D6ED4_1*>* CreateData(::System::UInt32 avatarid)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_2A09C8C0CD4D6ED4_1*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER_CREATEDATA_OFFSET))(this, avatarid);
		}

		::System::Collections::Generic::List_1<::Class_1_2A09C8C0CD4D6ED4_1*>* __base_CreateData(::System::UInt32 P0)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_2A09C8C0CD4D6ED4_1*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER___BASE_CREATEDATA_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_PrepareData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER___BASE_PREPAREDATA_OFFSET))(this);
		}
	};
}
