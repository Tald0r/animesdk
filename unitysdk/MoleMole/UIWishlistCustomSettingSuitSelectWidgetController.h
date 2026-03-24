#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_451601B8BB62C38C_11;
class Class_2_888829D5F4E4EBE0_Class_1_AA3AA9145D9EE846;
class Class_2_B90CB9D82BD51720;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER_CREATESUITITEM_OFFSET UNITYSDK_OFFSET(0xA6DAE10)
#define MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA6DAB90)
#define MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0xA6DAD10)
#define MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER_ONITEMCLICK_OFFSET UNITYSDK_OFFSET(0xA6DAF30)
#define MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA6DAC30)
#define MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA6DA860)
#define MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA6DA900)
#define MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER_RESET_OFFSET UNITYSDK_OFFSET(0xA6DB210)
#define MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER_UPDATEDETAIL_OFFSET UNITYSDK_OFFSET(0xA6D3E40)
#define MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA6DB430)
#define MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER__ONUIOPEN_B__6_0_OFFSET UNITYSDK_OFFSET(0xA6DB510)
#define MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA6DB640)
#define MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0xA6DB6B0)
#define MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA6DB730)
#define MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA6DB7B0)
#define MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA6DB810)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistCustomSettingSuitSelectWidgetController_TypeDefinitionIndex = 75841;

	class UIWishlistCustomSettingSuitSelectWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_B90CB9D82BD51720* _view; // 0x2A0
		::System::Collections::Generic::List_1<::System::UInt32>* _curSuitIds; // 0x2A8
		::System::Action_1<::System::Collections::Generic::List_1<::System::UInt32>*>* _OnSuitSelect; // 0x2B0
		::System::Collections::Generic::List_1<::Class_1_451601B8BB62C38C_11*>* _suitData; // 0x2B8
		::System::Int32 MaxSuitNum; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateSuitItem(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER_CREATESUITITEM_OFFSET))(this, arg);
		}

		::System::Void OnItemClick(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER_ONITEMCLICK_OFFSET))(this, index);
		}

		::System::Void UpdateDetail(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER_UPDATEDETAIL_OFFSET))(this, index);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER_RESET_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__6_0(::Class_2_888829D5F4E4EBE0_Class_1_AA3AA9145D9EE846* suit)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_888829D5F4E4EBE0_Class_1_AA3AA9145D9EE846*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER__ONUIOPEN_B__6_0_OFFSET))(this, suit);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
