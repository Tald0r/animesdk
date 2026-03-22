#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_8127D35606966C67_31_METHOD_2_445108444CB6DC1F_OFFSET UNITYSDK_OFFSET(0xB87A1E0)
#define CLASS_2_8127D35606966C67_31_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB87A2A0)
#define CLASS_2_8127D35606966C67_31__CTOR_OFFSET UNITYSDK_OFFSET(0xB87A290)

inline static constexpr unsigned int Class_2_8127D35606966C67_31_TypeDefinitionIndex = 64093;

class Class_2_8127D35606966C67_31 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8127D35606966C67_31__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_445108444CB6DC1F(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8127D35606966C67_31_METHOD_2_445108444CB6DC1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8127D35606966C67_31_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
