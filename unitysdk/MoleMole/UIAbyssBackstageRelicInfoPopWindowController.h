#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_3BBFBFA80E3DB6CF;
class Class_2_541EA3F0D78A7596;
class Class_2_DD0C18373FC569C0;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIYorozuyaAbyssS3RoleBigItemRowWidgetController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xA4E6530)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_GET__RELICDIC_OFFSET UNITYSDK_OFFSET(0xA4E8860)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_GET__RELICLIST_OFFSET UNITYSDK_OFFSET(0xA4E8B30)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_INITTAB_OFFSET UNITYSDK_OFFSET(0xA4E67D0)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA4E7FF0)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_ONLEFTTABCLICK_OFFSET UNITYSDK_OFFSET(0xA4E8120)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_ONRIGHTBTNCLICK_OFFSET UNITYSDK_OFFSET(0xA4E8900)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA4E8090)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA4E6540)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA4E6710)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA4E8C90)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER__ONLEFTTABCLICK_B__8_0_OFFSET UNITYSDK_OFFSET(0xA4E8DD0)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA4E8DF0)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA4E8E60)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA4E8E70)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA4E8E80)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssBackstageRelicInfoPopWindowController_TypeDefinitionIndex = 46572;

	class UIAbyssBackstageRelicInfoPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_DD0C18373FC569C0* _view; // 0x2F8
		::System::Int32 _leftTabIndex; // 0x300
		::System::Int32 _rightTabIndex; // 0x304
		::System::Collections::Generic::List_1<::Class_2_541EA3F0D78A7596*>* _genreList; // 0x308
		::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>*>* _relicDicList; // 0x310
		::System::Collections::Generic::List_1<::System::Int32>* _avatarList; // 0x318
		::System::Collections::Generic::List_1<::MoleMole::UIYorozuyaAbyssS3RoleBigItemRowWidgetController*>* _avatarBtnList; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_INITTAB_OFFSET))(this);
		}

		::System::Void OnLeftTabClick(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_ONLEFTTABCLICK_OFFSET))(this, index);
		}

		::System::Void OnRightBtnClick(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_ONRIGHTBTNCLICK_OFFSET))(this, index);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* get__relicDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_GET__RELICDIC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get__relicList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_GET__RELICLIST_OFFSET))(this);
		}

		::System::Void _OnLeftTabClick_b__8_0(::Class_1_3BBFBFA80E3DB6CF* _data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3BBFBFA80E3DB6CF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER__ONLEFTTABCLICK_B__8_0_OFFSET))(this, _data);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
