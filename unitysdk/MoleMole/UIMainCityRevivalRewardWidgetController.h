#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_674;
class Class_2_6799DB8DC5EF3EFE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER_CLEARREWARDS_OFFSET UNITYSDK_OFFSET(0xA82A3D0)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER_GET_CURRENTID_OFFSET UNITYSDK_OFFSET(0xA8296F0)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA8298C0)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xA82A2E0)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xA829A40)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA829960)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA829770)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA829810)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER_SETCLICKCB_OFFSET UNITYSDK_OFFSET(0xA82A360)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0xA829C50)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER_SETREWARDS_OFFSET UNITYSDK_OFFSET(0xA829FB0)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA82A570)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA82A600)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xA82A670)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xA82A6E0)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA82A760)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA82A7E0)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA82A840)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityRevivalRewardWidgetController_TypeDefinitionIndex = 57182;

	class UIMainCityRevivalRewardWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::Int32 REWARDS_SLOT_COUNT = 0x6; // 0x0
		::Class_2_6799DB8DC5EF3EFE* _view; // 0x2D0
		::Class_2_208CC9941471731A_674* _template; // 0x2D8
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* _rewardIconList; // 0x2E0
		::System::Action_1<::MoleMole::UIMainCityRevivalRewardWidgetController*>* _clickCb; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_CurrentID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER_GET_CURRENTID_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetData(::Class_2_208CC9941471731A_674* template_, ::System::Boolean rewarded)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_674*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER_SETDATA_OFFSET))(this, template_, rewarded);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void SetClickCb(::System::Action_1<::MoleMole::UIMainCityRevivalRewardWidgetController*>* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIMainCityRevivalRewardWidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER_SETCLICKCB_OFFSET))(this, cb);
		}

		::System::Void ClearRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER_CLEARREWARDS_OFFSET))(this);
		}

		::System::Void SetRewards(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* rewardPreview)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER_SETREWARDS_OFFSET))(this, rewardPreview);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
