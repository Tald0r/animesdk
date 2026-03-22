#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_6B13270EB20C5C7E;
class Class_2_A5A7A6F10C2C8A88;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x68EB640)
#define MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x68EB6B0)
#define MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER_SETFREEDOMDATA_OFFSET UNITYSDK_OFFSET(0x68EB7B0)
#define MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x68EB820)
#define MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x68EB850)

namespace MoleMole
{
	inline static constexpr unsigned int UIRepelPrepFreedomWidgetController_TypeDefinitionIndex = 56228;

	class UIRepelPrepFreedomWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_A5A7A6F10C2C8A88* get__viewModel()
		{
			return ((::Class_2_A5A7A6F10C2C8A88*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void SetFreedomData(::Class_2_6B13270EB20C5C7E* freedomData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_6B13270EB20C5C7E*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER_SETFREEDOMDATA_OFFSET))(this, freedomData);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}
