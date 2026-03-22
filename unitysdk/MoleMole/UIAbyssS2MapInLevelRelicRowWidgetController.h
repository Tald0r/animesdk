#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_205;
class Class_2_208CC9941471731A_240;
class Class_2_208CC9941471731A_620;
class Class_2_22F360303C414CB0;
class Class_2_AC1B1CB16C488BEC;
class Class_3_8073069F10AF85F5;
namespace MoleMole { class GradientColor; }
namespace MoleMole { class UIAbyssS2GeneralItemIconWidgetController; }
namespace MoleMole { class UIAbyssS2InLevelMapDialogPageController_IUIInLevelItemPackageInfoBase; }
namespace MoleMole { class UIAbyssS2InLevelMapDialogPageController_UIInLevelRelicPackageInfo; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralIconCardRarityWidgetController; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_BUILDLEVELDESC_OFFSET UNITYSDK_OFFSET(0xB31A3D0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_CHANGEEXPAND_OFFSET UNITYSDK_OFFSET(0xB318420)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_CLEANDYNAMICINFO_OFFSET UNITYSDK_OFFSET(0xB319300)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_INITBACKAGEROLEVIEW_OFFSET UNITYSDK_OFFSET(0xB31AB90)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_INITICONVIEW_OFFSET UNITYSDK_OFFSET(0xB31AAB0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_INITRELICVIEW_OFFSET UNITYSDK_OFFSET(0xB318730)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_INSERTRELICLEVELVIEW_OFFSET UNITYSDK_OFFSET(0xB319B00)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_INSERTRELICSKILLVIEW_OFFSET UNITYSDK_OFFSET(0xB3195E0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONBTNCLICKED_OFFSET UNITYSDK_OFFSET(0xB3182F0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONCLICK_OFFSET UNITYSDK_OFFSET(0xB31B3D0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB317DB0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xB317F30)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONSELECT_OFFSET UNITYSDK_OFFSET(0xB31B130)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB317E50)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB317BA0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_REFRESHICONVIEW_OFFSET UNITYSDK_OFFSET(0xB31B1D0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0xB317FF0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_SETEXPAND_OFFSET UNITYSDK_OFFSET(0xB3184A0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB31B440)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB31B6B0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xB31B720)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB31B7A0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB31B820)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2MapInLevelRelicRowWidgetController_TypeDefinitionIndex = 74591;

	class UIAbyssS2MapInLevelRelicRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::String* RelicNormalLevelColor; // 0x0
		// static const ::System::String* RelicCurLevelLevelColor; // 0x0
		// static const ::System::String* RelicCurLevelTextColor; // 0x0
		::Class_2_22F360303C414CB0* _view; // 0x2D0
		::MoleMole::UIGeneralIconCardRarityWidgetController* _cardIcon; // 0x2D8
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _cacheDynamic; // 0x2E0
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _cacheText; // 0x2E8
		::System::Int32 _cardCount; // 0x2F0
		::System::Action_1<::MoleMole::UIAbyssS2MapInLevelRelicRowWidgetController*>* ClickHandle; // 0x2F8
		::MoleMole::UIAbyssS2InLevelMapDialogPageController_UIInLevelRelicPackageInfo* _info; // 0x300
		::Class_3_8073069F10AF85F5* _relicData; // 0x308
		::Class_2_208CC9941471731A_205* _relicConfig; // 0x310
		::Class_2_208CC9941471731A_240* _itemConfig; // 0x318
		::MoleMole::UIAbyssS2GeneralItemIconWidgetController* _iconWidget; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONBTNCLICKED_OFFSET))(this);
		}

		::System::Void ChangeExpand()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_CHANGEEXPAND_OFFSET))(this);
		}

		::System::Void SetExpand(::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_SETEXPAND_OFFSET))(this, b);
		}

		::System::Void InitRelicView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_INITRELICVIEW_OFFSET))(this);
		}

		::System::Void InsertRelicSkillView(::System::String* toString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_INSERTRELICSKILLVIEW_OFFSET))(this, toString);
		}

		::System::Void CleanDynamicInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_CLEANDYNAMICINFO_OFFSET))(this);
		}

		::System::Void InsertRelicLevelView(::Class_2_208CC9941471731A_620* levelConfig, ::System::Boolean divide, ::System::Boolean light, ::System::Boolean hideLevel, ::System::Int32 upgradeCardCount, ::System::String* cardIconPath, ::System::Boolean briefDesc)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_620*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_INSERTRELICLEVELVIEW_OFFSET))(this, levelConfig, divide, light, hideLevel, upgradeCardCount, cardIconPath, briefDesc);
		}

		::System::String* BuildLevelDesc(::Class_2_208CC9941471731A_620* levelConfig, ::MoleMole::GradientColor* gradientColor, ::System::Boolean light, ::System::Boolean hideLevel, ::System::Boolean briefDesc)
		{
			return ((::System::String*(*)(::PVOID, ::Class_2_208CC9941471731A_620*, ::MoleMole::GradientColor*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_BUILDLEVELDESC_OFFSET))(this, levelConfig, gradientColor, light, hideLevel, briefDesc);
		}

		::System::Void RefreshInfo(::MoleMole::UIAbyssS2InLevelMapDialogPageController_IUIInLevelItemPackageInfoBase* info)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAbyssS2InLevelMapDialogPageController_IUIInLevelItemPackageInfoBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_REFRESHINFO_OFFSET))(this, info);
		}

		::System::Void InitIconView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_INITICONVIEW_OFFSET))(this);
		}

		::System::Void InitBackageRoleView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_INITBACKAGEROLEVIEW_OFFSET))(this);
		}

		::System::Void RefreshIconView(::Class_2_AC1B1CB16C488BEC* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_AC1B1CB16C488BEC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_REFRESHICONVIEW_OFFSET))(this, data);
		}

		::System::Void OnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONCLICK_OFFSET))(this);
		}

		::System::Void OnSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONSELECT_OFFSET))(this, isSelect);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
