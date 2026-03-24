#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_58D6E6CBE8DF407A.h"
#include "unitysdk/Enum_3_D97372C4EB93BA22.h"

class Class_1_A9AA6EB96ECB0DFA;
namespace UnityEngine { class Transform; }

#define CLASS_2_628AB21DA8A62A15_METHOD_2_2809962C17A1C69C_OFFSET UNITYSDK_OFFSET(0x742BF50)
#define CLASS_2_628AB21DA8A62A15_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x742C390)
#define CLASS_2_628AB21DA8A62A15_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x742BF30)
#define CLASS_2_628AB21DA8A62A15__CTOR_OFFSET UNITYSDK_OFFSET(0x742BF40)

inline static constexpr unsigned int Class_2_628AB21DA8A62A15_TypeDefinitionIndex = 38884;

class Class_2_628AB21DA8A62A15 : public ::Class_1_58D6E6CBE8DF407A
{
public:
	::UnityEngine::Transform* Field_2_2; // 0x28
	::Class_1_A9AA6EB96ECB0DFA* Field_2_0; // 0x30
	::UnityEngine::Transform* Field_2_1; // 0x38
	::System::Single Field_2_6; // 0x40
	::System::Single Field_2_3; // 0x44
	::System::Single Field_2_5; // 0x48
	::System::Boolean Field_2_4; // 0x4C

	::System::Void _ctor(::Class_1_A9AA6EB96ECB0DFA* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A9AA6EB96ECB0DFA*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_628AB21DA8A62A15__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Enum_3_D97372C4EB93BA22 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D97372C4EB93BA22(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_628AB21DA8A62A15_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Boolean Method_2_2809962C17A1C69C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_628AB21DA8A62A15_METHOD_2_2809962C17A1C69C_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_628AB21DA8A62A15_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
