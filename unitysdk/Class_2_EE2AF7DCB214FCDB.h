#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_EE2AF7DCB214FCDB_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x6766C10)
#define CLASS_2_EE2AF7DCB214FCDB_METHOD_2_9B59B42BE13F39B8_OFFSET UNITYSDK_OFFSET(0x6766A80)
#define CLASS_2_EE2AF7DCB214FCDB_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6766CC0)
#define CLASS_2_EE2AF7DCB214FCDB__CTOR_OFFSET UNITYSDK_OFFSET(0x6766CB0)

inline static constexpr unsigned int Class_2_EE2AF7DCB214FCDB_TypeDefinitionIndex = 70635;

class Class_2_EE2AF7DCB214FCDB : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x18
	::Class_3_647A206587033F4E<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE2AF7DCB214FCDB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9B59B42BE13F39B8(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_EE2AF7DCB214FCDB_METHOD_2_9B59B42BE13F39B8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_EE2AF7DCB214FCDB_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE2AF7DCB214FCDB_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
