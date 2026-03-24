#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1F76884FC39FD584;
class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_EE300689B208177B_METHOD_2_6C6C02341A6C6B8A_OFFSET UNITYSDK_OFFSET(0xD427BF0)
#define CLASS_2_EE300689B208177B_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xD427DE0)
#define CLASS_2_EE300689B208177B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xD427EB0)
#define CLASS_2_EE300689B208177B__CTOR_OFFSET UNITYSDK_OFFSET(0xD427EA0)

inline static constexpr unsigned int Class_2_EE300689B208177B_TypeDefinitionIndex = 66656;

class Class_2_EE300689B208177B : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_4; // 0x18
	::Class_2_1F76884FC39FD584* Field_2_3; // 0x20
	::MonoUITableScrollV2* Field_2_2; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE300689B208177B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6C6C02341A6C6B8A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_EE300689B208177B_METHOD_2_6C6C02341A6C6B8A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE300689B208177B_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_EE300689B208177B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
