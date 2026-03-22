#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_266E760D880E5A4D_METHOD_2_8CE71901D76EEEA9_OFFSET UNITYSDK_OFFSET(0x90D1D20)
#define CLASS_2_266E760D880E5A4D_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x90D1F60)
#define CLASS_2_266E760D880E5A4D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x90D20C0)
#define CLASS_2_266E760D880E5A4D__CTOR_OFFSET UNITYSDK_OFFSET(0x90D20B0)

inline static constexpr unsigned int Class_2_266E760D880E5A4D_TypeDefinitionIndex = 47388;

class Class_2_266E760D880E5A4D : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_7; // 0x20
	::UnityEngine::Transform* Field_2_0; // 0x28
	::UnityEngine::Transform* Field_2_1; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x48
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_266E760D880E5A4D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE71901D76EEEA9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_266E760D880E5A4D_METHOD_2_8CE71901D76EEEA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_266E760D880E5A4D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_266E760D880E5A4D_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
