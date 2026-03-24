#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define CLASS_2_30699CF8F6AD2FA0_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0x65DE0E0)
#define CLASS_2_30699CF8F6AD2FA0_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x65DE1F0)
#define CLASS_2_30699CF8F6AD2FA0__CTOR_OFFSET UNITYSDK_OFFSET(0x65DE1E0)

inline static constexpr unsigned int Class_2_30699CF8F6AD2FA0_TypeDefinitionIndex = 57125;

class Class_2_30699CF8F6AD2FA0 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_1; // 0x18
	::Class_2_9E3E3CDA608A4F58* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30699CF8F6AD2FA0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_30699CF8F6AD2FA0_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_30699CF8F6AD2FA0_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
