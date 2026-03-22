#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_953339A75F81ED52_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x9F170D0)
#define CLASS_2_953339A75F81ED52_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x9F172D0)
#define CLASS_2_953339A75F81ED52_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9F174C0)
#define CLASS_2_953339A75F81ED52_METHOD_2_E171F3958EB08A5E_OFFSET UNITYSDK_OFFSET(0x9F17400)
#define CLASS_2_953339A75F81ED52_METHOD_2_F9D756242E9FCFE7_OFFSET UNITYSDK_OFFSET(0x9F17530)
#define CLASS_2_953339A75F81ED52__CTOR_OFFSET UNITYSDK_OFFSET(0x9F174B0)

inline static constexpr unsigned int Class_2_953339A75F81ED52_TypeDefinitionIndex = 69903;

class Class_2_953339A75F81ED52 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x20
	::UIControllerExtensionData* Field_2_6; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_953339A75F81ED52__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_953339A75F81ED52_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E171F3958EB08A5E(::MoleMole::UIControlCollection* a1, ::Class_2_777A5D016ADC7368* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_777A5D016ADC7368*))((::PBYTE)hIl2Cpp + CLASS_2_953339A75F81ED52_METHOD_2_E171F3958EB08A5E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_953339A75F81ED52_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_953339A75F81ED52_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F9D756242E9FCFE7(::MoleMole::UIControlCollection* a1, ::Class_2_777A5D016ADC7368* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_777A5D016ADC7368*))((::PBYTE)hIl2Cpp + CLASS_2_953339A75F81ED52_METHOD_2_F9D756242E9FCFE7_OFFSET))(this, a1, a2);
	}
};
