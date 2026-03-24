#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_BCA11629035BC7F2_2_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x75E5B50)
#define CLASS_2_BCA11629035BC7F2_2_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x75E5D20)
#define CLASS_2_BCA11629035BC7F2_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x75E5DF0)
#define CLASS_2_BCA11629035BC7F2_2__CTOR_OFFSET UNITYSDK_OFFSET(0x75E5DE0)

inline static constexpr unsigned int Class_2_BCA11629035BC7F2_2_TypeDefinitionIndex = 66046;

class Class_2_BCA11629035BC7F2_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_3; // 0x20
	::UnityEngine::RectTransform* Field_2_2; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCA11629035BC7F2_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BCA11629035BC7F2_2_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCA11629035BC7F2_2_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BCA11629035BC7F2_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
