#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS85_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC87FE90)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS85_0__SETENABLEEMPTYCLICK_B__0_OFFSET UNITYSDK_OFFSET(0xC87FEA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIItemIconBtnWidgetController___c__DisplayClass85_0_TypeDefinitionIndex = 53178;

	class UIItemIconBtnWidgetController___c__DisplayClass85_0 : public ::System::Object
	{
	public:
		::MoleMole::UIItemIconBtnWidgetController* __4__this; // 0x10
		::UnityEngine::Events::UnityAction_1<::System::Int32>* onClickEmpty; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS85_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetEnableEmptyClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS85_0__SETENABLEEMPTYCLICK_B__0_OFFSET))(this);
		}
	};
}
