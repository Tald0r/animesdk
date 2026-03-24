#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C6CBD73325F73BBD.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_861B4062BAAF19A3_METHOD_2_6C1D29FCEE1CE07D_OFFSET UNITYSDK_OFFSET(0x80FB850)
#define CLASS_2_861B4062BAAF19A3__CTOR_OFFSET UNITYSDK_OFFSET(0x80FB7C0)

inline static constexpr unsigned int Class_2_861B4062BAAF19A3_TypeDefinitionIndex = 39483;

class Class_2_861B4062BAAF19A3 : public ::Class_1_C6CBD73325F73BBD
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::SimpleJSON::JSONNode*>* Field_2_1; // 0x18
	::System::String* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_861B4062BAAF19A3__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_6C1D29FCEE1CE07D(::Class_2_861B4062BAAF19A3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_861B4062BAAF19A3*))((::PBYTE)hIl2Cpp + CLASS_2_861B4062BAAF19A3_METHOD_2_6C1D29FCEE1CE07D_OFFSET))(this, a1);
	}
};
