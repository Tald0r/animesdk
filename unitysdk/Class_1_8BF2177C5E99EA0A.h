#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_61B3F00B9B88D294.h"
#include "unitysdk/Struct_2_063F8286D5D40CFA.h"
#include "unitysdk/System/Object.h"

class Class_1_49E4232CD0A10278;

#define CLASS_1_8BF2177C5E99EA0A_METHOD_1_0E023B688E2A5CBD_OFFSET UNITYSDK_OFFSET(0x9B61920)
#define CLASS_1_8BF2177C5E99EA0A_METHOD_1_1D8E95CF076E4624_OFFSET UNITYSDK_OFFSET(0x9B61940)
#define CLASS_1_8BF2177C5E99EA0A_METHOD_1_7EA816242B6DC57A_OFFSET UNITYSDK_OFFSET(0x9B61B70)
#define CLASS_1_8BF2177C5E99EA0A_METHOD_1_85A93BFC46CDB487_OFFSET UNITYSDK_OFFSET(0x9B61AA0)
#define CLASS_1_8BF2177C5E99EA0A__CTOR_OFFSET UNITYSDK_OFFSET(0x9B61930)

inline static constexpr unsigned int Class_1_8BF2177C5E99EA0A_TypeDefinitionIndex = 37380;

class Class_1_8BF2177C5E99EA0A : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x100; // 0x0
	::Class_1_49E4232CD0A10278* Field_1_3; // 0x10
	::System::Char Field_1_2; // 0x18
	::System::Int16 Field_1_1; // 0x1A

	::System::Void _ctor(::System::Char a1, ::Class_1_49E4232CD0A10278* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Char, ::Class_1_49E4232CD0A10278*))((::PBYTE)hIl2Cpp + CLASS_1_8BF2177C5E99EA0A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int16 Method_1_0E023B688E2A5CBD()
	{
		return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BF2177C5E99EA0A_METHOD_1_0E023B688E2A5CBD_OFFSET))(this);
	}

	::Enum_3_61B3F00B9B88D294 Method_1_1D8E95CF076E4624(::Struct_2_063F8286D5D40CFA& a1, ::System::Char a2)
	{
		return ((::Enum_3_61B3F00B9B88D294(*)(::PVOID, ::Struct_2_063F8286D5D40CFA&, ::System::Char))((::PBYTE)hIl2Cpp + CLASS_1_8BF2177C5E99EA0A_METHOD_1_1D8E95CF076E4624_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_85A93BFC46CDB487(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8BF2177C5E99EA0A_METHOD_1_85A93BFC46CDB487_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7EA816242B6DC57A(::System::Int16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_8BF2177C5E99EA0A_METHOD_1_7EA816242B6DC57A_OFFSET))(this, a1);
	}
};
