#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6ABD98018F0D4599;
class Class_3_3A6CD94249A12A3B;
class Class_3_5139B0F7496B8379_3;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_4109B64C3CE1B638;

#define CLASS_1_C50659C1F7858B0C_METHOD_1_06B247162973D6FD_OFFSET UNITYSDK_OFFSET(0x8A441F0)
#define CLASS_1_C50659C1F7858B0C_METHOD_1_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x8A43F60)
#define CLASS_1_C50659C1F7858B0C_METHOD_1_CD7E7AF7EB4E1ED5_OFFSET UNITYSDK_OFFSET(0x8A43EC0)
#define CLASS_1_C50659C1F7858B0C__CTOR_OFFSET UNITYSDK_OFFSET(0x8A43E40)

inline static constexpr unsigned int Class_1_C50659C1F7858B0C_TypeDefinitionIndex = 47826;

class Class_1_C50659C1F7858B0C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_6ABD98018F0D4599*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C50659C1F7858B0C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CD7E7AF7EB4E1ED5(::Class_3_3A6CD94249A12A3B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3A6CD94249A12A3B*))((::PBYTE)hIl2Cpp + CLASS_1_C50659C1F7858B0C_METHOD_1_CD7E7AF7EB4E1ED5_OFFSET))(this, a1);
	}

	::System::Void Method_1_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C50659C1F7858B0C_METHOD_1_C8E2469222842786_OFFSET))(this);
	}

	::System::Void Method_1_06B247162973D6FD(::Class_1_4109B64C3CE1B638<::Class_3_5139B0F7496B8379_3*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4109B64C3CE1B638<::Class_3_5139B0F7496B8379_3*>*))((::PBYTE)hIl2Cpp + CLASS_1_C50659C1F7858B0C_METHOD_1_06B247162973D6FD_OFFSET))(this, a1);
	}
};
