#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_410E84DCFF746137_2_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x8B62B80)
#define CLASS_2_410E84DCFF746137_2_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x8B62DB0)
#define CLASS_2_410E84DCFF746137_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8B62E80)
#define CLASS_2_410E84DCFF746137_2__CTOR_OFFSET UNITYSDK_OFFSET(0x8B62E70)

inline static constexpr unsigned int Class_2_410E84DCFF746137_2_TypeDefinitionIndex = 45880;

class Class_2_410E84DCFF746137_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_9E3E3CDA608A4F58* Field_2_4; // 0x18
	::Class_2_9E3E3CDA608A4F58* Field_2_3; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_5; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x30
	::UnityEngine::RectTransform* Field_2_2; // 0x38
	::UnityEngine::RectTransform* Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410E84DCFF746137_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_410E84DCFF746137_2_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_410E84DCFF746137_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410E84DCFF746137_2_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
