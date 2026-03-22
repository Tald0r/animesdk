#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_7C53FD4CE5E60563;
namespace MoleMole { class UIActivityFightUI_RewardGroup_ItemWidgetController_Data; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }

#define MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD1D0970)
#define MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD1D09E0)
#define MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_ONSCROLLITEMREUSE_OFFSET UNITYSDK_OFFSET(0xD1D0CD0)
#define MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xD1D0AE0)
#define MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xD1D0E80)
#define MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xD1D0F90)
#define MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD1D1000)
#define MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD1D1010)
#define MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMREUSE_OFFSET UNITYSDK_OFFSET(0xD1D1080)
#define MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xD1D10E0)
#define MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xD1D1160)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFightUI_RewardGroup_ItemWidgetController_TypeDefinitionIndex = 43680;

	class UIActivityFightUI_RewardGroup_ItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_7C53FD4CE5E60563* get__viewModel()
		{
			return ((::Class_2_7C53FD4CE5E60563*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnScrollItemReUse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_ONSCROLLITEMREUSE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RefreshView(::MoleMole::UIActivityFightUI_RewardGroup_ItemWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityFightUI_RewardGroup_ItemWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemReUse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMREUSE_OFFSET))(this);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
