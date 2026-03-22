#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D2BBBB758B896E04_5.h"
#include "unitysdk/System/Object.h"

class Class_1_5C805055193EF43F;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_38F73E91EC9DD65D_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x7BAC210)
#define CLASS_1_38F73E91EC9DD65D_METHOD_1_6094C824B8548B0C_OFFSET UNITYSDK_OFFSET(0x7BABEF0)
#define CLASS_1_38F73E91EC9DD65D_METHOD_1_61AE26E956842140_OFFSET UNITYSDK_OFFSET(0x7BAC000)
#define CLASS_1_38F73E91EC9DD65D_METHOD_1_CCBD2F52C6EA12BB_OFFSET UNITYSDK_OFFSET(0x7BABCE0)
#define CLASS_1_38F73E91EC9DD65D_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x7BAC330)
#define CLASS_1_38F73E91EC9DD65D__CTOR_OFFSET UNITYSDK_OFFSET(0x7BABBB0)

inline static constexpr unsigned int Class_1_38F73E91EC9DD65D_TypeDefinitionIndex = 72020;

class Class_1_38F73E91EC9DD65D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Enum_3_D2BBBB758B896E04_5>* Field_1_1; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_0; // 0x18
	::Class_1_5C805055193EF43F* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38F73E91EC9DD65D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CCBD2F52C6EA12BB(::System::Int32 a1, ::Enum_3_D2BBBB758B896E04_5 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_D2BBBB758B896E04_5))((::PBYTE)hIl2Cpp + CLASS_1_38F73E91EC9DD65D_METHOD_1_CCBD2F52C6EA12BB_OFFSET))(this, a1, a2);
	}

	::Enum_3_D2BBBB758B896E04_5 Method_1_6094C824B8548B0C(::System::Int32 a1)
	{
		return ((::Enum_3_D2BBBB758B896E04_5(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_38F73E91EC9DD65D_METHOD_1_6094C824B8548B0C_OFFSET))(this, a1);
	}

	::System::Void Method_1_61AE26E956842140(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_38F73E91EC9DD65D_METHOD_1_61AE26E956842140_OFFSET))(this, a1);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38F73E91EC9DD65D_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_5C805055193EF43F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5C805055193EF43F*))((::PBYTE)hIl2Cpp + CLASS_1_38F73E91EC9DD65D_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
