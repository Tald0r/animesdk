#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_CB16B2445EEE09CD_1_METHOD_2_445108444CB6DC1F_OFFSET UNITYSDK_OFFSET(0x18173840)
#define CLASS_2_CB16B2445EEE09CD_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x18173930)
#define CLASS_2_CB16B2445EEE09CD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18173920)

inline static constexpr unsigned int Class_2_CB16B2445EEE09CD_1_TypeDefinitionIndex = 64543;

class Class_2_CB16B2445EEE09CD_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Text* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_3; // 0x20
	::UnityEngine::RectTransform* Field_2_1; // 0x28
	::UnityEngine::RectTransform* Field_2_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB16B2445EEE09CD_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_445108444CB6DC1F(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CB16B2445EEE09CD_1_METHOD_2_445108444CB6DC1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CB16B2445EEE09CD_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
