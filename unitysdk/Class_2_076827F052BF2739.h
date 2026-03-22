#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_58D6E6CBE8DF407A.h"
#include "unitysdk/Enum_3_D97372C4EB93BA22.h"

class Class_1_A9AA6EB96ECB0DFA;
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_076827F052BF2739_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x69FBCE0)
#define CLASS_2_076827F052BF2739_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x69FB740)
#define CLASS_2_076827F052BF2739_METHOD_2_DFEC4E3A703FA3C0_OFFSET UNITYSDK_OFFSET(0x69FB760)
#define CLASS_2_076827F052BF2739__CTOR_OFFSET UNITYSDK_OFFSET(0x69FB750)

inline static constexpr unsigned int Class_2_076827F052BF2739_TypeDefinitionIndex = 78484;

class Class_2_076827F052BF2739 : public ::Class_1_58D6E6CBE8DF407A
{
public:
	::Class_1_A9AA6EB96ECB0DFA* Field_2_1; // 0x28
	::UnityEngine::RectTransform* Field_2_0; // 0x30
	::UnityEngine::Transform* Field_2_2; // 0x38

	::System::Void _ctor(::Class_1_A9AA6EB96ECB0DFA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A9AA6EB96ECB0DFA*))((::PBYTE)hIl2Cpp + CLASS_2_076827F052BF2739__CTOR_OFFSET))(this, a1);
	}

	::Enum_3_D97372C4EB93BA22 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D97372C4EB93BA22(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_076827F052BF2739_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Boolean Method_2_DFEC4E3A703FA3C0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_076827F052BF2739_METHOD_2_DFEC4E3A703FA3C0_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_076827F052BF2739_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
