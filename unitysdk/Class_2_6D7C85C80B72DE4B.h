#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_6D7C85C80B72DE4B_METHOD_2_069F531B53CCE944_OFFSET UNITYSDK_OFFSET(0xA3E4240)
#define CLASS_2_6D7C85C80B72DE4B_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0xA3E44A0)
#define CLASS_2_6D7C85C80B72DE4B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA3E4610)
#define CLASS_2_6D7C85C80B72DE4B__CTOR_OFFSET UNITYSDK_OFFSET(0xA3E4600)

inline static constexpr unsigned int Class_2_6D7C85C80B72DE4B_TypeDefinitionIndex = 62409;

class Class_2_6D7C85C80B72DE4B : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_1; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x20
	::UnityEngine::RectTransform* Field_2_0; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x48
	::Class_2_A8F5ABF31E066ED4* Field_2_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D7C85C80B72DE4B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_069F531B53CCE944(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6D7C85C80B72DE4B_METHOD_2_069F531B53CCE944_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6D7C85C80B72DE4B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D7C85C80B72DE4B_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}
};
