#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205E43D40B9E7AEA.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_48D56DACBE4271BC;
class Class_2_8A63B61964F5D521;
namespace MoleMole { class RepelPrepPageContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET UNITYSDK_OFFSET(0x73B2070)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_CHECKNEWITEM_OFFSET UNITYSDK_OFFSET(0x73B2400)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_CHECKSLOT_OFFSET UNITYSDK_OFFSET(0x73B2600)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_CLOSE_OFFSET UNITYSDK_OFFSET(0x73B2A90)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0x73B1650)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x73B1660)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x73B1670)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x73B1930)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x73B1830)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x73B29E0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x73B16E0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x73B1B20)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x73B1A30)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x73B2B50)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x73B2B40)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_CLOSE_OFFSET UNITYSDK_OFFSET(0x73B2B90)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x73B2BA0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x73B2C00)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x73B2C70)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x73B2CE0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x73B2CF0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x73B2D00)

namespace MoleMole
{
	inline static constexpr unsigned int UIRepelPrepPageController_TypeDefinitionIndex = 46948;

	class UIRepelPrepPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		static ::System::Int32* StaticGet_StoreID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIRepelPrepPageController_TypeDefinitionIndex)->GetStaticField(0xDB60);
		}
		::Class_1_48D56DACBE4271BC* _syncHelper; // 0x308
		::MoleMole::RepelPrepPageContext* _context; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_205E43D40B9E7AEA get_MessageMatchPage()
		{
			return ((::Enum_3_205E43D40B9E7AEA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_8A63B61964F5D521* get__viewModel()
		{
			return ((::Class_2_8A63B61964F5D521*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void BuildViewModelDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET))(this);
		}

		::System::Void CheckNewItem(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_CHECKNEWITEM_OFFSET))(this, args);
		}

		::System::Void CheckSlot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_CHECKSLOT_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_CLOSE_OFFSET))(this);
		}

		::System::Void __base_Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_CLOSE_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
