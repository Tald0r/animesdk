#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_888829D5F4E4EBE0_Class_1_AA3AA9145D9EE846;
class Class_2_9E3E3CDA608A4F58;
class Class_2_ECCEC4DD7813147F;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_CLEARRARITYITEMLIST_OFFSET UNITYSDK_OFFSET(0xAAAC9D0)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xAAAC570)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAAAC700)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xAAAC7A0)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAAAC8E0)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAAAC4C0)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAAAC650)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xAAACC50)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_SETSUITDATA_OFFSET UNITYSDK_OFFSET(0xAAACB70)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAAAD590)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAAAD640)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xAAAD6B0)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAAAD720)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAAAD7A0)
#define MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAAAD800)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoSetDetailWidgetController_TypeDefinitionIndex = 49819;

	class UIVideoSetDetailWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::String* SwitchAnimName; // 0x0
		::Class_2_ECCEC4DD7813147F* _view; // 0x2A0
		::Class_2_888829D5F4E4EBE0_Class_1_AA3AA9145D9EE846* _suitData; // 0x2A8
		::Class_2_9E3E3CDA608A4F58* _controlAnimation; // 0x2B0
		::System::Boolean _firstTimeShow; // 0x2B8
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _rarityItemList; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetSuitData(::Class_2_888829D5F4E4EBE0_Class_1_AA3AA9145D9EE846* suitData, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_888829D5F4E4EBE0_Class_1_AA3AA9145D9EE846*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_SETSUITDATA_OFFSET))(this, suitData, force);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void ClearRarityItemList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_CLEARRARITYITEMLIST_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSETDETAILWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
