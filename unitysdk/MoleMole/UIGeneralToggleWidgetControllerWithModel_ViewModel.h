#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

namespace MoleMole { class UIGeneralToggleWidgetController_OnClickCallback; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
template <typename T> class Class_0_16E4307DCC419505_103;

#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xBFB1F30)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xBFB1FD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralToggleWidgetControllerWithModel_ViewModel_TypeDefinitionIndex = 49996;

	class UIGeneralToggleWidgetControllerWithModel_ViewModel : public ::Class_1_F57C3EEEB03201AF
	{
	public:
		::MoleMole::UIGeneralToggleWidgetController_OnClickCallback* callback; // 0x60
		::System::Func_1<::System::Boolean>* CheckCanToggle; // 0x68
		::System::Action_1<::System::Boolean>* OnStateChangeCallback; // 0x70
		::System::Action_1<::System::Action*>* doubleCheckAction; // 0x78
		::Class_0_16E4307DCC419505_103<::System::Boolean>* isOn; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_VIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
