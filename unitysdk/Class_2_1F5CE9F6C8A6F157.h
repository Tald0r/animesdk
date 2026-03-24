#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_201.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_412.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_1F5CE9F6C8A6F157_METHOD_2_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x171FA020)
#define CLASS_2_1F5CE9F6C8A6F157_METHOD_2_9F88E35FE931B81A_OFFSET UNITYSDK_OFFSET(0x171FA090)
#define CLASS_2_1F5CE9F6C8A6F157__CTOR_OFFSET UNITYSDK_OFFSET(0x171F9F80)

inline static constexpr unsigned int Class_2_1F5CE9F6C8A6F157_TypeDefinitionIndex = 12561;

class Class_2_1F5CE9F6C8A6F157 : public ::Class_1_5DA2E7556103D5A3_201
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_2_0; // 0xC8

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_412 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_412, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_1F5CE9F6C8A6F157__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F5CE9F6C8A6F157_METHOD_2_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_2_9F88E35FE931B81A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1F5CE9F6C8A6F157_METHOD_2_9F88E35FE931B81A_OFFSET))(this, a1);
	}
};
