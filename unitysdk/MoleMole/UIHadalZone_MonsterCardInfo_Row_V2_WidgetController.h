#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_837569F131F63A57.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_60638234271CCDB8_68;
class Class_2_84CEDCEF739506C1_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIMonsterCardInfoPopWindowController_MonsterInfoOverAll; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x7A5FE80)
#define MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER_GET_CURMONSTER_OFFSET UNITYSDK_OFFSET(0x7A5FDC0)
#define MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7A60030)
#define MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x7A60570)
#define MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x7A601B0)
#define MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7A600D0)
#define MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7A5FDD0)
#define MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER_REFRESHCARDIMG_OFFSET UNITYSDK_OFFSET(0x7A60930)
#define MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER_REFRESHEMPTYSTATE_OFFSET UNITYSDK_OFFSET(0x7A60750)
#define MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x7A602B0)
#define MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER_SETCLICKENABLE_OFFSET UNITYSDK_OFFSET(0x7A60640)
#define MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER_USELOCKUI_OFFSET UNITYSDK_OFFSET(0x7A60EB0)
#define MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x7A61420)
#define MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER__UPDATEWEAKS_OFFSET UNITYSDK_OFFSET(0x7A61070)
#define MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER__UPDATEWEAK_OFFSET UNITYSDK_OFFSET(0x7A61230)
#define MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7A61430)
#define MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x7A614A0)
#define MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x7A61510)
#define MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7A61590)
#define MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7A61610)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_MonsterCardInfo_Row_V2_WidgetController_TypeDefinitionIndex = 51428;

	class UIHadalZone_MonsterCardInfo_Row_V2_WidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_60638234271CCDB8_68* _view; // 0x2D0
		::Class_2_84CEDCEF739506C1_2* monsterConfigTemplate; // 0x2D8
		::MoleMole::UIMonsterCardInfoPopWindowController_MonsterInfoOverAll* monsterData; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_84CEDCEF739506C1_2* get_CurMonster()
		{
			return ((::Class_2_84CEDCEF739506C1_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER_GET_CURMONSTER_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER_BINDEVENT_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void SetClickEnable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER_SETCLICKENABLE_OFFSET))(this, value);
		}

		::System::Void RefreshEmptyState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER_REFRESHEMPTYSTATE_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Boolean UseLockUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER_USELOCKUI_OFFSET))(this);
		}

		::System::Void _UpdateWeaks(::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* weaks)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER__UPDATEWEAKS_OFFSET))(this, weaks);
		}

		::System::Void _UpdateWeak(::MoleMole::Config::DamageElementType weakEleID, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DamageElementType, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER__UPDATEWEAK_OFFSET))(this, weakEleID, index);
		}

		::System::Void RefreshCardImg(::System::String* path, ::Foundation::AssetPath raceImg, ::Enum_3_837569F131F63A57 type, ::System::Boolean useFrontMask)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::AssetPath, ::Enum_3_837569F131F63A57, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER_REFRESHCARDIMG_OFFSET))(this, path, raceImg, type, useFrontMask);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_MONSTERCARDINFO_ROW_V2_WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
