#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_0C207F4EE2784F50;
class Class_2_A83F0BD817A71056;
namespace MoleMole { class BuddySelectContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace UnityEngine::UI { class RawImage; }

#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_GETMULTIRAW_OFFSET UNITYSDK_OFFSET(0xACEE970)
#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_INITSLOT_OFFSET UNITYSDK_OFFSET(0xACEEC10)
#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xACEFC70)
#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xACEF550)
#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_ONMULTIBUILDDONE_OFFSET UNITYSDK_OFFSET(0xACEFBB0)
#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_ONMULTISELECT_OFFSET UNITYSDK_OFFSET(0xACEE560)
#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xACEEAD0)
#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_ONSINGLERTBUILDDONE_OFFSET UNITYSDK_OFFSET(0xACEFC10)
#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_ONSINGLESELECT_OFFSET UNITYSDK_OFFSET(0xACEDDD0)
#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xACEFD10)
#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xACEDAF0)
#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xACEEA20)
#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_OPENBUDDYSELECT_OFFSET UNITYSDK_OFFSET(0xACEF760)
#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_PROCESSUIAVATAR_OFFSET UNITYSDK_OFFSET(0xACEDD60)
#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_SETBUDDYSELECTSTATE_OFFSET UNITYSDK_OFFSET(0xACEE370)
#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_SETMULTISELECT_OFFSET UNITYSDK_OFFSET(0xACEE630)
#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_SETSINGLESELECT_OFFSET UNITYSDK_OFFSET(0xACEE000)
#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_SHOWINITBUDDY_OFFSET UNITYSDK_OFFSET(0xACEEE40)
#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xACEFF90)
#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xACEFF60)
#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0xACEFFA0)
#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER__OPENBUDDYSELECT_B__12_0_OFFSET UNITYSDK_OFFSET(0xACF0000)
#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xACF0010)
#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xACF0080)
#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xACF00E0)
#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xACF0150)
#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xACF01D0)
#define MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xACF0230)

namespace MoleMole
{
	inline static constexpr unsigned int UIBuddySelectWidgetController_TypeDefinitionIndex = 41118;

	class UIBuddySelectWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Boolean* StaticGet_editorRefresh()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIBuddySelectWidgetController_TypeDefinitionIndex)->GetStaticField(0xCFC0);
		}
		::Class_2_A83F0BD817A71056* _view; // 0x2A0
		::Class_1_0C207F4EE2784F50* _singleBuddySelect; // 0x2A8
		::Il2CppArray<::Class_1_0C207F4EE2784F50*>* _multiSelects; // 0x2B0
		::MoleMole::BuddySelectContext* _selectContext; // 0x2B8
		::System::Int32 _selectedBuddyID; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void ProcessUIAvatar(::System::Int32 avatarConfig, ::System::Int32 showTypeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_PROCESSUIAVATAR_OFFSET))(this, avatarConfig, showTypeIndex);
		}

		::System::Void OnSingleSelect(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_ONSINGLESELECT_OFFSET))(this, arg);
		}

		::System::Void SetSingleSelect(::System::Int32 uniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_SETSINGLESELECT_OFFSET))(this, uniqueID);
		}

		::System::Void OnMultiSelect(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_ONMULTISELECT_OFFSET))(this, args);
		}

		::System::Void SetMultiSelect(::Il2CppArray<::System::Int32>* uniqueIDs)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_SETMULTISELECT_OFFSET))(this, uniqueIDs);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void SetBuddySelectState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_SETBUDDYSELECTSTATE_OFFSET))(this);
		}

		::System::Void OpenBuddySelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_OPENBUDDYSELECT_OFFSET))(this);
		}

		::System::Void InitSlot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_INITSLOT_OFFSET))(this);
		}

		::UnityEngine::UI::RawImage* GetMultiRaw(::System::Int32 index)
		{
			return ((::UnityEngine::UI::RawImage*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_GETMULTIRAW_OFFSET))(this, index);
		}

		::System::Void ShowInitBuddy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_SHOWINITBUDDY_OFFSET))(this);
		}

		::System::Void OnMultiBuildDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_ONMULTIBUILDDONE_OFFSET))(this);
		}

		::System::Void OnSingleRTBuildDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_ONSINGLERTBUILDDONE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET))(this, args);
		}

		::System::Void _OpenBuddySelect_b__12_0(::System::Int32 buddyId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER__OPENBUDDYSELECT_B__12_0_OFFSET))(this, buddyId);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYSELECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
