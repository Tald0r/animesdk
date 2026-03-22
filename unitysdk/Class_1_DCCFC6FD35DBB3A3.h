#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_11FD83788053949F.h"
#include "unitysdk/Struct_2_A840136A4E657746.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DCCFC6FD35DBB3A3_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x5FEA4A0)
#define CLASS_1_DCCFC6FD35DBB3A3_METHOD_1_43B003DC5FEEB0A7_OFFSET UNITYSDK_OFFSET(0x5FEA2F0)
#define CLASS_1_DCCFC6FD35DBB3A3_METHOD_1_46DF29ACE60986D7_OFFSET UNITYSDK_OFFSET(0x5FEAA90)
#define CLASS_1_DCCFC6FD35DBB3A3_METHOD_1_75414D4D5F3B717E_OFFSET UNITYSDK_OFFSET(0x5FEA560)
#define CLASS_1_DCCFC6FD35DBB3A3_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x5FEA3B0)
#define CLASS_1_DCCFC6FD35DBB3A3_METHOD_1_8B5DB4ACDAC4F04A_OFFSET UNITYSDK_OFFSET(0x5FEAC20)
#define CLASS_1_DCCFC6FD35DBB3A3_METHOD_1_FBA744CE7479F95C_OFFSET UNITYSDK_OFFSET(0x5FEA7F0)
#define CLASS_1_DCCFC6FD35DBB3A3__CTOR_OFFSET UNITYSDK_OFFSET(0x5FEB040)

inline static constexpr unsigned int Class_1_DCCFC6FD35DBB3A3_TypeDefinitionIndex = 37636;

class Class_1_DCCFC6FD35DBB3A3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_A840136A4E657746>* Field_1_1; // 0x10
	::Struct_2_11FD83788053949F Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCCFC6FD35DBB3A3__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_43B003DC5FEEB0A7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCCFC6FD35DBB3A3_METHOD_1_43B003DC5FEEB0A7_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCCFC6FD35DBB3A3_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCCFC6FD35DBB3A3_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Single Method_1_75414D4D5F3B717E(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DCCFC6FD35DBB3A3_METHOD_1_75414D4D5F3B717E_OFFSET))(this, a1);
	}

	::System::Void Method_1_FBA744CE7479F95C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DCCFC6FD35DBB3A3_METHOD_1_FBA744CE7479F95C_OFFSET))(this, a1);
	}

	::System::Void Method_1_46DF29ACE60986D7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DCCFC6FD35DBB3A3_METHOD_1_46DF29ACE60986D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B5DB4ACDAC4F04A(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DCCFC6FD35DBB3A3_METHOD_1_8B5DB4ACDAC4F04A_OFFSET))(this, a1, a2);
	}
};
