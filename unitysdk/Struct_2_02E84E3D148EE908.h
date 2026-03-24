#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_02E84E3D148EE908_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x327D40)
#define STRUCT_2_02E84E3D148EE908_EQUALS_OFFSET UNITYSDK_OFFSET(0x327CC0)
#define STRUCT_2_02E84E3D148EE908_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x327D50)
#define STRUCT_2_02E84E3D148EE908_METHOD_2_0065E5F930FFF4F1_OFFSET UNITYSDK_OFFSET(0x327F30)
#define STRUCT_2_02E84E3D148EE908_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x327DC0)
#define STRUCT_2_02E84E3D148EE908_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x327F40)
#define STRUCT_2_02E84E3D148EE908_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x327ED0)
#define STRUCT_2_02E84E3D148EE908_METHOD_2_7CEB85D998FE3D88_OFFSET UNITYSDK_OFFSET(0x73D8460)
#define STRUCT_2_02E84E3D148EE908_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x327E70)
#define STRUCT_2_02E84E3D148EE908_METHOD_2_B02B3E8B4A712563_OFFSET UNITYSDK_OFFSET(0x73D8580)
#define STRUCT_2_02E84E3D148EE908_TOSTRING_OFFSET UNITYSDK_OFFSET(0x327CB0)
#define STRUCT_2_02E84E3D148EE908__CCTOR_OFFSET UNITYSDK_OFFSET(0x73D8060)
#define STRUCT_2_02E84E3D148EE908__CTOR_OFFSET UNITYSDK_OFFSET(0x327C40)

inline static constexpr unsigned int Struct_2_02E84E3D148EE908_TypeDefinitionIndex = 43592;

struct alignas(4) Struct_2_02E84E3D148EE908
{
	static ::System::UInt32* StaticGet_Field_2_1()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_02E84E3D148EE908_TypeDefinitionIndex)->GetStaticField(0x9850);
	}
	static ::Struct_2_02E84E3D148EE908* StaticGet_Field_2_0()
	{
		return (::Struct_2_02E84E3D148EE908*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_02E84E3D148EE908_TypeDefinitionIndex)->GetStaticField(0x9854);
	}
	::System::UInt32 Field_2_2; // 0x10
	::System::UInt32 Field_2_3; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_02E84E3D148EE908__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_02E84E3D148EE908__CCTOR_OFFSET))();
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_02E84E3D148EE908_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Equals(::Struct_2_02E84E3D148EE908 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_02E84E3D148EE908))((::PBYTE)hIl2Cpp + STRUCT_2_02E84E3D148EE908_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_02E84E3D148EE908_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_02E84E3D148EE908_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_02E84E3D148EE908_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_02E84E3D148EE908_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_02E84E3D148EE908_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	/*
	::MoleMole::Vector2Int Method_2_0065E5F930FFF4F1()
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_02E84E3D148EE908_METHOD_2_0065E5F930FFF4F1_OFFSET))(this);
	}
	*/

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_02E84E3D148EE908_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	static ::System::Boolean Method_2_7CEB85D998FE3D88(::Struct_2_02E84E3D148EE908 a1, ::Struct_2_02E84E3D148EE908 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_02E84E3D148EE908, ::Struct_2_02E84E3D148EE908))((::PBYTE)hIl2Cpp + STRUCT_2_02E84E3D148EE908_METHOD_2_7CEB85D998FE3D88_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_B02B3E8B4A712563(::Struct_2_02E84E3D148EE908 a1, ::Struct_2_02E84E3D148EE908 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_02E84E3D148EE908, ::Struct_2_02E84E3D148EE908))((::PBYTE)hIl2Cpp + STRUCT_2_02E84E3D148EE908_METHOD_2_B02B3E8B4A712563_OFFSET))(a1, a2);
	}
};
