#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"

#define STRUCT_2_8B67601907B8CB80_METHOD_2_46DF29ACE60986D7_OFFSET UNITYSDK_OFFSET(0x2D67D0)
#define STRUCT_2_8B67601907B8CB80_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x2D66D0)
#define STRUCT_2_8B67601907B8CB80_METHOD_2_C531F2E196E089F6_OFFSET UNITYSDK_OFFSET(0x2D6890)
#define STRUCT_2_8B67601907B8CB80_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x2D6790)
#define STRUCT_2_8B67601907B8CB80__CCTOR_OFFSET UNITYSDK_OFFSET(0x65819C0)
#define STRUCT_2_8B67601907B8CB80__CTOR_OFFSET UNITYSDK_OFFSET(0x2D66A0)

inline static constexpr unsigned int Struct_2_8B67601907B8CB80_TypeDefinitionIndex = 55278;

struct alignas(8) Struct_2_8B67601907B8CB80
{
	static ::Struct_2_8B67601907B8CB80* StaticGet_Field_2_3()
	{
		return (::Struct_2_8B67601907B8CB80*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_8B67601907B8CB80_TypeDefinitionIndex)->GetStaticField(0xE470);
	}
	::System::Int32 Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::UnityEngine::Animations::AnimatorControllerPlayable Field_2_2; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Single a2, ::UnityEngine::Animations::AnimatorControllerPlayable a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + STRUCT_2_8B67601907B8CB80__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_8B67601907B8CB80__CCTOR_OFFSET))();
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8B67601907B8CB80_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8B67601907B8CB80_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_2_46DF29ACE60986D7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_8B67601907B8CB80_METHOD_2_46DF29ACE60986D7_OFFSET))(this, a1);
	}

	::System::Single Method_2_C531F2E196E089F6(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_8B67601907B8CB80_METHOD_2_C531F2E196E089F6_OFFSET))(this, a1);
	}
};
