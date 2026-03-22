#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_814741BDEE96A7A7_METHOD_2_37917191637BFFF4_OFFSET UNITYSDK_OFFSET(0x7CCF700)
#define CLASS_2_814741BDEE96A7A7_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x7CCF870)
#define CLASS_2_814741BDEE96A7A7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7CCF960)
#define CLASS_2_814741BDEE96A7A7__CTOR_OFFSET UNITYSDK_OFFSET(0x7CCF950)

inline static constexpr unsigned int Class_2_814741BDEE96A7A7_TypeDefinitionIndex = 47841;

class Class_2_814741BDEE96A7A7 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_0; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_814741BDEE96A7A7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_37917191637BFFF4(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_814741BDEE96A7A7_METHOD_2_37917191637BFFF4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_814741BDEE96A7A7_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_814741BDEE96A7A7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
