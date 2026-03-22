#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_037D21AC29ED1130.h"

class Class_1_7807B2B04302CD7B_10;
class Class_1_8BABEB2BC6365EFE;
class Class_2_79AE422BA06F6D26_142;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_CREATEACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0xB901C10)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_GETARCADEGAMEPARAMS_OFFSET UNITYSDK_OFFSET(0xB8FFD00)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xB8FF820)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_ONACHIEVEMENTUPDATE_OFFSET UNITYSDK_OFFSET(0xB901BA0)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0xB901910)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB900EE0)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_ONDROPDOWNCHANGE_OFFSET UNITYSDK_OFFSET(0xB901CF0)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_ONRECEIVEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0xB901980)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB900F80)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB8FF830)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB8FFA70)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xB9002F0)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_SETTITLE_OFFSET UNITYSDK_OFFSET(0xB9011C0)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB901DA0)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB901D90)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB901DF0)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB901E60)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB901E70)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB901E80)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeAchievementPopWindowController_TypeDefinitionIndex = 50082;

	class UIArcadeAchievementPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::String** StaticGet__iconPath2()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeAchievementPopWindowController_TypeDefinitionIndex)->GetStaticField(0x3C2C0);
		}
		static ::System::String** StaticGet__iconPath1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeAchievementPopWindowController_TypeDefinitionIndex)->GetStaticField(0x3C2C8);
		}
		::Class_2_79AE422BA06F6D26_142* _view; // 0x2F8
		::System::Int32 _arcadeGameID; // 0x300
		::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_10*>* _achievementIDList; // 0x308
		::System::Int32 _lockNum; // 0x310
		::Class_1_8BABEB2BC6365EFE* _dropDown; // 0x318
		::System::Collections::Generic::List_1<::System::Int32>* _dropDownIds; // 0x320
		::MoleMole::UIItemIconBtnSmallWidgetController* _titleItemWidget; // 0x328
		::System::Int32 oldNotifyId; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnCloseBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_ONCLOSEBTNCLICKED_OFFSET))(this);
		}

		::System::Void OnReceiveBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_ONRECEIVEBTNCLICKED_OFFSET))(this);
		}

		::System::Void OnAchievementUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_ONACHIEVEMENTUPDATE_OFFSET))(this, args);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateAchievement(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_CREATEACHIEVEMENT_OFFSET))(this, arg);
		}

		::System::Void OnDropDownChange(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_ONDROPDOWNCHANGE_OFFSET))(this, idx);
		}

		::Il2CppArray<::Struct_2_037D21AC29ED1130>* GetArcadeGameParams()
		{
			return ((::Il2CppArray<::Struct_2_037D21AC29ED1130>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_GETARCADEGAMEPARAMS_OFFSET))(this);
		}

		::System::Void SetTitle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER_SETTITLE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
