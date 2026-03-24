#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_F2F58FC08BDC2A85_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0xAF54870)
#define CLASS_2_F2F58FC08BDC2A85_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0xAF54A40)
#define CLASS_2_F2F58FC08BDC2A85_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xAF54B80)
#define CLASS_2_F2F58FC08BDC2A85__CTOR_OFFSET UNITYSDK_OFFSET(0xAF54B70)

inline static constexpr unsigned int Class_2_F2F58FC08BDC2A85_TypeDefinitionIndex = 78356;

class Class_2_F2F58FC08BDC2A85 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Animation* Field_2_3; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x30
	::UnityEngine::GameObject* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2F58FC08BDC2A85__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F2F58FC08BDC2A85_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F2F58FC08BDC2A85_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2F58FC08BDC2A85_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
