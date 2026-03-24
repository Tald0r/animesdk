#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_3_282D83545C02E3D1_1_METHOD_3_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xA264A40)
#define CLASS_3_282D83545C02E3D1_1_METHOD_3_AA6A73448047A840_OFFSET UNITYSDK_OFFSET(0xA264880)
#define CLASS_3_282D83545C02E3D1_1_METHOD_3_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0xA264B00)
#define CLASS_3_282D83545C02E3D1_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA264CC0)

inline static constexpr unsigned int Class_3_282D83545C02E3D1_1_TypeDefinitionIndex = 78256;

class Class_3_282D83545C02E3D1_1 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_3_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_2; // 0x30
	::Class_2_60DDD9C206686F44* Field_3_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_282D83545C02E3D1_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_AA6A73448047A840(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_282D83545C02E3D1_1_METHOD_3_AA6A73448047A840_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_282D83545C02E3D1_1_METHOD_3_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_3_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_282D83545C02E3D1_1_METHOD_3_DDA8A2337932DF10_OFFSET))(this);
	}
};
