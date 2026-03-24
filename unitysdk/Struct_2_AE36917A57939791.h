#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class Object; }
namespace UnityEngine { class Material; }

#define STRUCT_2_AE36917A57939791_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x366F60)
#define STRUCT_2_AE36917A57939791_EQUALS_OFFSET UNITYSDK_OFFSET(0x366DD0)
#define STRUCT_2_AE36917A57939791_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x366F70)
#define STRUCT_2_AE36917A57939791_METHOD_2_2338887E7F0B0102_OFFSET UNITYSDK_OFFSET(0x366DC0)
#define STRUCT_2_AE36917A57939791_METHOD_2_2FB1D87815D761CF_OFFSET UNITYSDK_OFFSET(0x8FF92D0)
#define STRUCT_2_AE36917A57939791_METHOD_2_5207B2A3400FFFF1_OFFSET UNITYSDK_OFFSET(0x367140)
#define STRUCT_2_AE36917A57939791_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x3670D0)
#define STRUCT_2_AE36917A57939791_METHOD_2_76D287B304B2A633_OFFSET UNITYSDK_OFFSET(0x8FF9180)
#define STRUCT_2_AE36917A57939791_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x366C80)
#define STRUCT_2_AE36917A57939791_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x367060)
#define STRUCT_2_AE36917A57939791_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x366D00)
#define STRUCT_2_AE36917A57939791__CCTOR_OFFSET UNITYSDK_OFFSET(0x8FF90C0)

inline static constexpr unsigned int Struct_2_AE36917A57939791_TypeDefinitionIndex = 80001;

struct alignas(4) Struct_2_AE36917A57939791
{
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_AE36917A57939791_TypeDefinitionIndex)->GetStaticField(0x109F0);
	}
	static ::System::Boolean* StaticGet_Field_2_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_AE36917A57939791_TypeDefinitionIndex)->GetStaticField(0x109F4);
	}
	static ::UnityEngine::Color* StaticGet_Field_2_4()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_AE36917A57939791_TypeDefinitionIndex)->GetStaticField(0x109F8);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_AE36917A57939791_TypeDefinitionIndex)->GetStaticField(0x10A08);
	}
	::UnityEngine::Color Field_2_2; // 0x10
	::System::Boolean Field_2_3; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_AE36917A57939791__CCTOR_OFFSET))();
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_AE36917A57939791& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_AE36917A57939791&))((::PBYTE)hIl2Cpp + STRUCT_2_AE36917A57939791_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AE36917A57939791_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_2338887E7F0B0102(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + STRUCT_2_AE36917A57939791_METHOD_2_2338887E7F0B0102_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Struct_2_AE36917A57939791 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_AE36917A57939791))((::PBYTE)hIl2Cpp + STRUCT_2_AE36917A57939791_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_AE36917A57939791_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AE36917A57939791_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AE36917A57939791_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	static ::System::Boolean Method_2_76D287B304B2A633(::Struct_2_AE36917A57939791 a1, ::Struct_2_AE36917A57939791 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_AE36917A57939791, ::Struct_2_AE36917A57939791))((::PBYTE)hIl2Cpp + STRUCT_2_AE36917A57939791_METHOD_2_76D287B304B2A633_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_2FB1D87815D761CF(::Struct_2_AE36917A57939791 a1, ::Struct_2_AE36917A57939791 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_AE36917A57939791, ::Struct_2_AE36917A57939791))((::PBYTE)hIl2Cpp + STRUCT_2_AE36917A57939791_METHOD_2_2FB1D87815D761CF_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_AE36917A57939791_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	::System::Void Method_2_5207B2A3400FFFF1(::Struct_2_AE36917A57939791& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_AE36917A57939791&))((::PBYTE)hIl2Cpp + STRUCT_2_AE36917A57939791_METHOD_2_5207B2A3400FFFF1_OFFSET))(this, a1);
	}
};
