#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_91A4E45FCB86776B_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x64925F0)
#define CLASS_2_91A4E45FCB86776B_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x6492800)
#define CLASS_2_91A4E45FCB86776B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x64928F0)
#define CLASS_2_91A4E45FCB86776B__CTOR_OFFSET UNITYSDK_OFFSET(0x64928E0)

inline static constexpr unsigned int Class_2_91A4E45FCB86776B_TypeDefinitionIndex = 61914;

class Class_2_91A4E45FCB86776B : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_4; // 0x18
	::UnityEngine::GameObject* Field_2_3; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x30
	::UnityEngine::GameObject* Field_2_5; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91A4E45FCB86776B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_91A4E45FCB86776B_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_91A4E45FCB86776B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91A4E45FCB86776B_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
