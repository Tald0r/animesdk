#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_80E90D6D04CD4C89_METHOD_2_445108444CB6DC1F_OFFSET UNITYSDK_OFFSET(0x9FC1E10)
#define CLASS_2_80E90D6D04CD4C89_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9FC1F60)
#define CLASS_2_80E90D6D04CD4C89__CTOR_OFFSET UNITYSDK_OFFSET(0x9FC1F50)

inline static constexpr unsigned int Class_2_80E90D6D04CD4C89_TypeDefinitionIndex = 50166;

class Class_2_80E90D6D04CD4C89 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_0; // 0x18
	::UnityEngine::UI::Text* Field_2_5; // 0x20
	::UnityEngine::UI::Text* Field_2_1; // 0x28
	::UnityEngine::UI::Text* Field_2_4; // 0x30
	::UnityEngine::UI::Text* Field_2_3; // 0x38
	::UnityEngine::UI::Text* Field_2_6; // 0x40
	::UnityEngine::UI::Text* Field_2_2; // 0x48
	::MonoUITableScrollV2* Field_2_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80E90D6D04CD4C89__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_445108444CB6DC1F(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_80E90D6D04CD4C89_METHOD_2_445108444CB6DC1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_80E90D6D04CD4C89_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
