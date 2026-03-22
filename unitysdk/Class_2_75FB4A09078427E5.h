#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_75FB4A09078427E5_METHOD_2_21D544786F2D43F4_OFFSET UNITYSDK_OFFSET(0xB842620)
#define CLASS_2_75FB4A09078427E5_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0xB8427B0)
#define CLASS_2_75FB4A09078427E5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB8428A0)
#define CLASS_2_75FB4A09078427E5__CTOR_OFFSET UNITYSDK_OFFSET(0xB842890)

inline static constexpr unsigned int Class_2_75FB4A09078427E5_TypeDefinitionIndex = 42139;

class Class_2_75FB4A09078427E5 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75FB4A09078427E5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_21D544786F2D43F4(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_75FB4A09078427E5_METHOD_2_21D544786F2D43F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_75FB4A09078427E5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75FB4A09078427E5_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
