#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_1A84C744BF703CC0_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3BA9E0)
#define STRUCT_2_1A84C744BF703CC0_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3BAB10)
#define STRUCT_2_1A84C744BF703CC0_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BAA80)
#define STRUCT_2_1A84C744BF703CC0_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3BAB20)
#define STRUCT_2_1A84C744BF703CC0_METHOD_2_51BB781957D7506D_OFFSET UNITYSDK_OFFSET(0xBC67D20)
#define STRUCT_2_1A84C744BF703CC0_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x3BAC00)
#define STRUCT_2_1A84C744BF703CC0_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x3BABA0)
#define STRUCT_2_1A84C744BF703CC0_METHOD_2_F3A11A82F954C854_OFFSET UNITYSDK_OFFSET(0xBC67EE0)
#define STRUCT_2_1A84C744BF703CC0__CCTOR_OFFSET UNITYSDK_OFFSET(0xBC67CF0)

inline static constexpr unsigned int Struct_2_1A84C744BF703CC0_TypeDefinitionIndex = 42225;

struct alignas(8) Struct_2_1A84C744BF703CC0
{
	static ::Struct_2_1A84C744BF703CC0* StaticGet_Field_2_0()
	{
		return (::Struct_2_1A84C744BF703CC0*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_1A84C744BF703CC0_TypeDefinitionIndex)->GetStaticField(0xD590);
	}
	::System::Int64 Field_2_1; // 0x10
	::System::UInt32 Field_2_2; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_1A84C744BF703CC0__CCTOR_OFFSET))();
	}

	::System::Int32 CompareTo(::Struct_2_1A84C744BF703CC0 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_1A84C744BF703CC0))((::PBYTE)hIl2Cpp + STRUCT_2_1A84C744BF703CC0_COMPARETO_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Struct_2_1A84C744BF703CC0 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_1A84C744BF703CC0))((::PBYTE)hIl2Cpp + STRUCT_2_1A84C744BF703CC0_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_1A84C744BF703CC0_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1A84C744BF703CC0_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_2_51BB781957D7506D(::Struct_2_1A84C744BF703CC0 a1, ::Struct_2_1A84C744BF703CC0 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_1A84C744BF703CC0, ::Struct_2_1A84C744BF703CC0))((::PBYTE)hIl2Cpp + STRUCT_2_1A84C744BF703CC0_METHOD_2_51BB781957D7506D_OFFSET))(a1, a2);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1A84C744BF703CC0_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_1A84C744BF703CC0_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_F3A11A82F954C854(::Struct_2_1A84C744BF703CC0 a1, ::Struct_2_1A84C744BF703CC0 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_1A84C744BF703CC0, ::Struct_2_1A84C744BF703CC0))((::PBYTE)hIl2Cpp + STRUCT_2_1A84C744BF703CC0_METHOD_2_F3A11A82F954C854_OFFSET))(a1, a2);
	}
};
