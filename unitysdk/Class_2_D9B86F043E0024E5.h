#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_D9B86F043E0024E5_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x79745F0)
#define CLASS_2_D9B86F043E0024E5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x79746C0)
#define CLASS_2_D9B86F043E0024E5_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x7974430)
#define CLASS_2_D9B86F043E0024E5__CTOR_OFFSET UNITYSDK_OFFSET(0x79746B0)

inline static constexpr unsigned int Class_2_D9B86F043E0024E5_TypeDefinitionIndex = 66544;

class Class_2_D9B86F043E0024E5 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_2; // 0x18
	::UnityEngine::Transform* Field_2_4; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x28
	::UnityEngine::RectTransform* Field_2_1; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9B86F043E0024E5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D9B86F043E0024E5_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D9B86F043E0024E5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9B86F043E0024E5_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
