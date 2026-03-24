#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_410E84DCFF746137_6_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x7E3F810)
#define CLASS_2_410E84DCFF746137_6_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x7E3FA00)
#define CLASS_2_410E84DCFF746137_6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7E3FAF0)
#define CLASS_2_410E84DCFF746137_6__CTOR_OFFSET UNITYSDK_OFFSET(0x7E3FAE0)

inline static constexpr unsigned int Class_2_410E84DCFF746137_6_TypeDefinitionIndex = 78894;

class Class_2_410E84DCFF746137_6 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_1; // 0x18
	::UnityEngine::RectTransform* Field_2_0; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_5; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x38
	::UnityEngine::RectTransform* Field_2_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410E84DCFF746137_6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_410E84DCFF746137_6_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410E84DCFF746137_6_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_410E84DCFF746137_6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
