#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_763;
class Class_2_724B3079070B9259;
class Class_2_787A64751D1D3DEF;
namespace MoleMole { class UIAbyssS2MapInLevelItemRowWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_CHANGEEXPAND_OFFSET UNITYSDK_OFFSET(0xBE8E7C0)
#define MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_GET_MODEL_OFFSET UNITYSDK_OFFSET(0xBE8E6F0)
#define MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_ONBTNCLICKED_OFFSET UNITYSDK_OFFSET(0xBE8E310)
#define MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBE8E8F0)
#define MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xBE8EA70)
#define MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBE8E990)
#define MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBE8E130)
#define MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_SETEXPAND_OFFSET UNITYSDK_OFFSET(0xBE8E880)
#define MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBE8EC50)
#define MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBE8EC60)
#define MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xBE8ECD0)
#define MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBE8ED50)
#define MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBE8EDD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooBuffRowWidgetController_TypeDefinitionIndex = 38488;

	class UIRidusGotBooBuffRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Action_1<::MoleMole::UIAbyssS2MapInLevelItemRowWidgetController*>* ClickHandle; // 0x2D0
		::System::Boolean m_expand; // 0x2D8
		::Class_2_787A64751D1D3DEF* model; // 0x2E0
		::Class_2_724B3079070B9259* _view; // 0x2E8
		::Class_2_208CC9941471731A_763* m_levelBuffCfg; // 0x2F0
		::System::Int32 m_levelID; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_ONBTNCLICKED_OFFSET))(this);
		}

		::System::Void ChangeExpand()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_CHANGEEXPAND_OFFSET))(this);
		}

		::System::Void SetExpand(::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_SETEXPAND_OFFSET))(this, b);
		}

		::Class_2_787A64751D1D3DEF* get_Model()
		{
			return ((::Class_2_787A64751D1D3DEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_GET_MODEL_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
