#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"

class Class_1_1E81770FB4B2536C;
class Class_1_9F7E02DCFFE6355A;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C2F125D07BC8601B_METHOD_1_36814C128D232673_OFFSET UNITYSDK_OFFSET(0x6738470)
#define CLASS_1_C2F125D07BC8601B_METHOD_1_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x67385F0)
#define CLASS_1_C2F125D07BC8601B_METHOD_1_F6A2F52BF8A1B8DA_OFFSET UNITYSDK_OFFSET(0x6738290)
#define CLASS_1_C2F125D07BC8601B__CTOR_OFFSET UNITYSDK_OFFSET(0x6738280)

inline static constexpr unsigned int Class_1_C2F125D07BC8601B_TypeDefinitionIndex = 37476;

class Class_1_C2F125D07BC8601B : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_1E81770FB4B2536C*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2F125D07BC8601B__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F6A2F52BF8A1B8DA(::MoleMole::Vector2Int a1, ::Class_1_9F7E02DCFFE6355A*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Vector2Int, ::Class_1_9F7E02DCFFE6355A*&))((::PBYTE)hIl2Cpp + CLASS_1_C2F125D07BC8601B_METHOD_1_F6A2F52BF8A1B8DA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_36814C128D232673(::System::Int32 a1, ::Class_1_1E81770FB4B2536C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_1E81770FB4B2536C*))((::PBYTE)hIl2Cpp + CLASS_1_C2F125D07BC8601B_METHOD_1_36814C128D232673_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6916CB2AB9451DD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2F125D07BC8601B_METHOD_1_6916CB2AB9451DD7_OFFSET))(this);
	}
};
