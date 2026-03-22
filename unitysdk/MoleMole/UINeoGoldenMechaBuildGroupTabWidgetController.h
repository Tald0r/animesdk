#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_00C447E56FB5F788_1;
class Class_2_208CC9941471731A_585;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UINEOGOLDENMECHABUILDGROUPTABWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xAB7A790)
#define MOLEMOLE_UINEOGOLDENMECHABUILDGROUPTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xAB7A800)
#define MOLEMOLE_UINEOGOLDENMECHABUILDGROUPTABWIDGETCONTROLLER_SETTABCONFIG_OFFSET UNITYSDK_OFFSET(0xAB7A900)
#define MOLEMOLE_UINEOGOLDENMECHABUILDGROUPTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAB7A9D0)
#define MOLEMOLE_UINEOGOLDENMECHABUILDGROUPTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xAB7AA00)

namespace MoleMole
{
	inline static constexpr unsigned int UINeoGoldenMechaBuildGroupTabWidgetController_TypeDefinitionIndex = 67588;

	class UINeoGoldenMechaBuildGroupTabWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHABUILDGROUPTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_00C447E56FB5F788_1* get__viewModel()
		{
			return ((::Class_2_00C447E56FB5F788_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHABUILDGROUPTABWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHABUILDGROUPTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void SetTabConfig(::Class_2_208CC9941471731A_585* config)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_585*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHABUILDGROUPTABWIDGETCONTROLLER_SETTABCONFIG_OFFSET))(this, config);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHABUILDGROUPTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}
