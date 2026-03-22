#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_06946D1A8A6532A9.h"
#include "unitysdk/Struct_2_563C52B0A258C324.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_392033AF8F64AFA2_METHOD_2_0566929124E8B06C_OFFSET UNITYSDK_OFFSET(0x1AE36740)
#define CLASS_2_392033AF8F64AFA2_METHOD_2_41E71D31F5015962_OFFSET UNITYSDK_OFFSET(0x1AE371E0)
#define CLASS_2_392033AF8F64AFA2_METHOD_2_5B7F4BAD2E1A0BDD_OFFSET UNITYSDK_OFFSET(0x1AE36CB0)
#define CLASS_2_392033AF8F64AFA2_METHOD_2_73052712910A9EE7_OFFSET UNITYSDK_OFFSET(0x1AE36910)
#define CLASS_2_392033AF8F64AFA2_METHOD_2_85E43FE58216B6E3_OFFSET UNITYSDK_OFFSET(0x1AE37350)
#define CLASS_2_392033AF8F64AFA2_METHOD_2_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0x1AE36CA0)
#define CLASS_2_392033AF8F64AFA2__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE36B60)

inline static constexpr unsigned int Class_2_392033AF8F64AFA2_TypeDefinitionIndex = 81540;

class Class_2_392033AF8F64AFA2 : public ::Class_1_06946D1A8A6532A9
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_06946D1A8A6532A9*>* Field_2_0; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_563C52B0A258C324>* Field_2_1; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_392033AF8F64AFA2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0566929124E8B06C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_392033AF8F64AFA2_METHOD_2_0566929124E8B06C_OFFSET))(this, a1);
	}

	::System::Void Method_2_73052712910A9EE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_392033AF8F64AFA2_METHOD_2_73052712910A9EE7_OFFSET))(this);
	}

	::System::Void Method_2_B235E757922104A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_392033AF8F64AFA2_METHOD_2_B235E757922104A8_OFFSET))(this);
	}

	static ::Class_2_392033AF8F64AFA2* Method_2_5B7F4BAD2E1A0BDD(::System::Collections::Generic::List_1<::Struct_2_563C52B0A258C324>* a1)
	{
		return ((::Class_2_392033AF8F64AFA2*(*)(::System::Collections::Generic::List_1<::Struct_2_563C52B0A258C324>*))((::PBYTE)hIl2Cpp + CLASS_2_392033AF8F64AFA2_METHOD_2_5B7F4BAD2E1A0BDD_OFFSET))(a1);
	}

	::System::Void Method_2_41E71D31F5015962(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_392033AF8F64AFA2_METHOD_2_41E71D31F5015962_OFFSET))(this, a1);
	}

	::System::Void Method_2_85E43FE58216B6E3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_392033AF8F64AFA2_METHOD_2_85E43FE58216B6E3_OFFSET))(this, a1);
	}
};
