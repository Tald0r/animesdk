#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9FBDB47166F97B2B.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_BDEEA5009A8A636E;
class Class_1_CD990C643F5F60DD;
class Class_2_0495AF03A29D7705;
class Class_2_D4D818D7266F052A_1;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIBangbooDevelopPopWindowController; }
namespace MoleMole { class UIBangbooSkillDataRowWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_CLOSESKILLDETAIL_OFFSET UNITYSDK_OFFSET(0xB2AD0B0)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_GETSKILLDATAROW_OFFSET UNITYSDK_OFFSET(0xB2AE270)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_ONBREAKTHROUGHREWARDBTNCLICK_OFFSET UNITYSDK_OFFSET(0xB2AB670)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_ONBUDDYDATAUPDATEHANDLE_OFFSET UNITYSDK_OFFSET(0xB2AD8B0)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_ONBUDDYUPGRADE_OFFSET UNITYSDK_OFFSET(0xB2AD920)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_ONCLICKLEVELUP_OFFSET UNITYSDK_OFFSET(0xB2AAC30)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_ONCLICKPREVIEW_OFFSET UNITYSDK_OFFSET(0xB2AAF80)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_ONCLICKSTARUP_OFFSET UNITYSDK_OFFSET(0xB2AB220)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB2AA920)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0xB2AD7E0)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB2AA9C0)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB2A9F90)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_OPENBUDDYINFO_OFFSET UNITYSDK_OFFSET(0xB2AE070)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_OPENSKILLDETAIL_OFFSET UNITYSDK_OFFSET(0xB2AD2B0)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_REFRESHBREAKTHROUGHREWARDBTN_OFFSET UNITYSDK_OFFSET(0xB2AB550)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_REGISTERBREAKREWARDPOPUP_OFFSET UNITYSDK_OFFSET(0xB2AD5D0)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_SETLEVEL_OFFSET UNITYSDK_OFFSET(0xB2AC480)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_SETLOSTFOUCSSELECTINDEX_OFFSET UNITYSDK_OFFSET(0xB2AE3C0)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_SETNAME_OFFSET UNITYSDK_OFFSET(0xB2AD000)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_SETSKILLDETAILVALUE_OFFSET UNITYSDK_OFFSET(0xB2ADC00)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_SETSKILL_OFFSET UNITYSDK_OFFSET(0xB2ACE60)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_SETSTAR_OFFSET UNITYSDK_OFFSET(0xB2ABD60)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_UPDATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xB2ACBA0)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_UPDATESKILLDETAIL_OFFSET UNITYSDK_OFFSET(0xB2ADAE0)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0xB2AB910)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER__CLOSESKILLDETAIL_B__22_0_OFFSET UNITYSDK_OFFSET(0xB2AE610)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB2AE500)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER__ONUIINIT_B__2_0_OFFSET UNITYSDK_OFFSET(0xB2AE600)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB2AE650)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0xB2AE6C0)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB2AE730)
#define MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB2AE7B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooUpgradeWidgetController_TypeDefinitionIndex = 71044;

	class UIBangbooUpgradeWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::String* SkillDetail_FadeIn; // 0x0
		// static const ::System::String* SkillDetail_FadeOut; // 0x0
		// static const ::System::String* SkillDetail_Switch; // 0x0
		// static const ::System::String* StarUpAni; // 0x0
		// static const ::System::String* LevelUpAni; // 0x0
		::Class_2_D4D818D7266F052A_1* _view; // 0x2A0
		::System::Int32 ClickSkillIndex; // 0x2A8
		::Class_2_0495AF03A29D7705* _data; // 0x2B0
		::System::Collections::Generic::List_1<::Class_1_BDEEA5009A8A636E*>* _curPropertyItemViews; // 0x2B8
		::Enum_3_9FBDB47166F97B2B currentSelectSkillType; // 0x2C0
		::System::Int32 currentSelectIndex; // 0x2C4
		::System::Collections::Generic::List_1<::Class_1_CD990C643F5F60DD*>* _skills; // 0x2C8
		::System::Boolean IsOpenDetail; // 0x2D0
		::MoleMole::UIBangbooDevelopPopWindowController* developDialog; // 0x2D8
		::System::Collections::Generic::List_1<::MoleMole::UIBangbooSkillDataRowWidgetController*>* skillDataRows; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnClickLevelUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_ONCLICKLEVELUP_OFFSET))(this);
		}

		::System::Void OnClickPreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_ONCLICKPREVIEW_OFFSET))(this);
		}

		::System::Void OnClickStarUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_ONCLICKSTARUP_OFFSET))(this);
		}

		::System::Void RefreshBreakThroughRewardBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_REFRESHBREAKTHROUGHREWARDBTN_OFFSET))(this);
		}

		::System::Void OnBreakThroughRewardBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_ONBREAKTHROUGHREWARDBTNCLICK_OFFSET))(this);
		}

		::System::Void UpdateUI(::Class_2_0495AF03A29D7705* buddyData, ::System::Boolean isAttributeUpdate, ::System::Boolean keepSkillDetail)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0495AF03A29D7705*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_UPDATEUI_OFFSET))(this, buddyData, isAttributeUpdate, keepSkillDetail);
		}

		::System::Void RegisterBreakRewardPopup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_REGISTERBREAKREWARDPOPUP_OFFSET))(this);
		}

		::System::Void UpdateAttribute(::System::Boolean isAttributeUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_UPDATEATTRIBUTE_OFFSET))(this, isAttributeUpdate);
		}

		::System::Void SetName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_SETNAME_OFFSET))(this);
		}

		::System::Void SetSkill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_SETSKILL_OFFSET))(this);
		}

		::System::Void OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnBuddyDataUpdateHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_ONBUDDYDATAUPDATEHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnBuddyUpgrade(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_ONBUDDYUPGRADE_OFFSET))(this, args);
		}

		::System::Void SetStar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_SETSTAR_OFFSET))(this);
		}

		::System::Void SetLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_SETLEVEL_OFFSET))(this);
		}

		::System::Void UpdateSkillDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_UPDATESKILLDETAIL_OFFSET))(this);
		}

		::System::Void OpenSkillDetail(::System::Int32 index, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_OPENSKILLDETAIL_OFFSET))(this, index, force);
		}

		::System::Void CloseSkillDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_CLOSESKILLDETAIL_OFFSET))(this);
		}

		::System::Void OpenBuddyInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_OPENBUDDYINFO_OFFSET))(this);
		}

		::System::Void SetSkillDetailValue(::Class_1_CD990C643F5F60DD* skill)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CD990C643F5F60DD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_SETSKILLDETAILVALUE_OFFSET))(this, skill);
		}

		::MoleMole::UIBangbooSkillDataRowWidgetController* GetSkillDataRow(::System::Int32 index)
		{
			return ((::MoleMole::UIBangbooSkillDataRowWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_GETSKILLDATAROW_OFFSET))(this, index);
		}

		::System::Void SetLostFoucsSelectIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER_SETLOSTFOUCSSELECTINDEX_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__2_0(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER__ONUIINIT_B__2_0_OFFSET))(this, arg);
		}

		::System::Void _CloseSkillDetail_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER__CLOSESKILLDETAIL_B__22_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUPGRADEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
