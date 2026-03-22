#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_C6F795B6098BF80C.h"

class Class_1_11A58A840528E5B2;
class Class_1_E7CD69E2A848D444;
class Class_2_7BF9B536DE1149CA;
class Class_3_9F2FCC0519F3E06F_89;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_4A2C1F589E9ACFEB_METHOD_4_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0xB4241D0)
#define CLASS_4_4A2C1F589E9ACFEB_METHOD_4_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xB424480)
#define CLASS_4_4A2C1F589E9ACFEB__CTOR_OFFSET UNITYSDK_OFFSET(0xB423E70)

inline static constexpr unsigned int Class_4_4A2C1F589E9ACFEB_TypeDefinitionIndex = 45446;

class Class_4_4A2C1F589E9ACFEB : public ::Class_3_C6F795B6098BF80C<::Class_3_9F2FCC0519F3E06F_89*>
{
public:
	::System::Collections::Generic::List_1<::Class_1_E7CD69E2A848D444*>* Field_4_1; // 0x30
	::Class_2_7BF9B536DE1149CA* Field_4_0; // 0x38

	::System::Void _ctor(::Class_1_11A58A840528E5B2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_11A58A840528E5B2*))((::PBYTE)hIl2Cpp + CLASS_4_4A2C1F589E9ACFEB__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_4_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4A2C1F589E9ACFEB_METHOD_4_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_4_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4A2C1F589E9ACFEB_METHOD_4_E7EF6BC52B28648C_OFFSET))(this);
	}
};
