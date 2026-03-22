#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B89683A15B3B0C43_Enum_3_55DEA7760B94F1B2.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_451601B8BB62C38C_11;
class Class_1_D31D2263E849A1B4;
class Class_2_B89683A15B3B0C43;
class Class_2_E3B74E53F7AC003C_5;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER_ONCLICKSELECTITEM_OFFSET UNITYSDK_OFFSET(0xCA81280)
#define MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCA82270)
#define MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xCA81090)
#define MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCA82310)
#define MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCA80DB0)
#define MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER_REFRESHTOPTIP_OFFSET UNITYSDK_OFFSET(0xCA82470)
#define MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xCA82580)
#define MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0xCA823F0)
#define MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER_SHOWRIGHTEMPTYDESC_OFFSET UNITYSDK_OFFSET(0xCA81140)
#define MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER_SHOWSAMENAME_OFFSET UNITYSDK_OFFSET(0xCA81A40)
#define MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCA82E20)
#define MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCA82EA0)
#define MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xCA82F10)
#define MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCA82F80)
#define MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCA83000)

namespace MoleMole
{
	inline static constexpr unsigned int UITriDiceItemCollectWidgetController_TypeDefinitionIndex = 70010;

	class UITriDiceItemCollectWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::String* oracleCollectNumText; // 0x0
		::Class_2_E3B74E53F7AC003C_5* _view; // 0x2A0
		::Class_2_B89683A15B3B0C43* _dataModel; // 0x2A8
		::System::Collections::Generic::List_1<::Class_1_451601B8BB62C38C_11*>* _currentDataList; // 0x2B0
		::UnityEngine::UI::Extension::UILocalizationText* collectText; // 0x2B8
		::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* sameNameCtrls; // 0x2C0
		::Class_2_B89683A15B3B0C43_Enum_3_55DEA7760B94F1B2 _lastLuckType; // 0x2C8
		::Class_2_B89683A15B3B0C43_Enum_3_55DEA7760B94F1B2 _curLuckType; // 0x2CC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void ShowRightEmptyDesc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER_SHOWRIGHTEMPTYDESC_OFFSET))(this);
		}

		::System::Void OnClickSelectItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER_ONCLICKSELECTITEM_OFFSET))(this, index);
		}

		::System::Void ShowSameName(::System::Int32 index, ::System::Boolean isLocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER_SHOWSAMENAME_OFFSET))(this, index, isLocked);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetData(::Class_1_D31D2263E849A1B4* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D31D2263E849A1B4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER_SETDATA_OFFSET))(this, context);
		}

		::System::Void RefreshTopTip(::System::Int32 leftNum, ::System::Int32 rightNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER_REFRESHTOPTIP_OFFSET))(this, leftNum, rightNum);
		}

		::System::Void RefreshView(::Class_2_B89683A15B3B0C43_Enum_3_55DEA7760B94F1B2 luckType)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_B89683A15B3B0C43_Enum_3_55DEA7760B94F1B2))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, luckType);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEITEMCOLLECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
