#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_FFD2BFBAA17829FB;
class Class_2_6DE5FBED45BCAC88;
class Class_2_79AE422BA06F6D26_74;
namespace MoleMole { class UIActivityReturnPageController; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_BACKFLOWWIDGET_GET_PARENTVIEW_OFFSET UNITYSDK_OFFSET(0x6BD67D0)
#define MOLEMOLE_BACKFLOWWIDGET_GET_TABINDEX_OFFSET UNITYSDK_OFFSET(0x6BD67B0)
#define MOLEMOLE_BACKFLOWWIDGET_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x6BD67F0)
#define MOLEMOLE_BACKFLOWWIDGET_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x6BD6970)
#define MOLEMOLE_BACKFLOWWIDGET_SET_PARENTVIEW_OFFSET UNITYSDK_OFFSET(0x6BD67E0)
#define MOLEMOLE_BACKFLOWWIDGET_SET_TABINDEX_OFFSET UNITYSDK_OFFSET(0x6BD67C0)
#define MOLEMOLE_BACKFLOWWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x6BD6B20)
#define MOLEMOLE_BACKFLOWWIDGET___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x6BD6B50)
#define MOLEMOLE_BACKFLOWWIDGET___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x6BD6BB0)

namespace MoleMole
{
	inline static constexpr unsigned int BackFlowWidget_TypeDefinitionIndex = 46189;

	class BackFlowWidget : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Int32 _TabIndex_k__BackingField; // 0x2A0
		::MoleMole::UIActivityReturnPageController* parentController; // 0x2A8
		::Class_2_79AE422BA06F6D26_74* _parentView_k__BackingField; // 0x2B0
		::Class_2_6DE5FBED45BCAC88* uiBackFlowModel; // 0x2B8
		::Class_1_FFD2BFBAA17829FB* backFlowActivityData; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWWIDGET__CTOR_OFFSET))(this);
		}

		::System::Int32 get_TabIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWWIDGET_GET_TABINDEX_OFFSET))(this);
		}

		::System::Void set_TabIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWWIDGET_SET_TABINDEX_OFFSET))(this, value);
		}

		::Class_2_79AE422BA06F6D26_74* get_parentView()
		{
			return ((::Class_2_79AE422BA06F6D26_74*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWWIDGET_GET_PARENTVIEW_OFFSET))(this);
		}

		::System::Void set_parentView(::Class_2_79AE422BA06F6D26_74* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_79AE422BA06F6D26_74*))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWWIDGET_SET_PARENTVIEW_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWWIDGET_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWWIDGET_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWWIDGET___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWWIDGET___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
