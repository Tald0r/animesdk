#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/CharacterCameraDitheringData.h"

namespace MoleMole { class MonoEffectPluginDither; }
namespace System { class String; }

#define CLASS_3_376624DCCDDB8156_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x7406410)
#define CLASS_3_376624DCCDDB8156_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x7406560)
#define CLASS_3_376624DCCDDB8156_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x74065C0)
#define CLASS_3_376624DCCDDB8156_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x7406330)
#define CLASS_3_376624DCCDDB8156__CCTOR_OFFSET UNITYSDK_OFFSET(0x7406470)
#define CLASS_3_376624DCCDDB8156__CTOR_OFFSET UNITYSDK_OFFSET(0x7406540)

inline static constexpr unsigned int Class_3_376624DCCDDB8156_TypeDefinitionIndex = 74087;

class Class_3_376624DCCDDB8156 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Int32* StaticGet_Field_3_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_376624DCCDDB8156_TypeDefinitionIndex)->GetStaticField(0xB8F0);
	}
	static ::System::Int32* StaticGet_Field_3_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_376624DCCDDB8156_TypeDefinitionIndex)->GetStaticField(0xB8F4);
	}
	static ::System::Int32* StaticGet_Field_3_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_376624DCCDDB8156_TypeDefinitionIndex)->GetStaticField(0xB8F8);
	}
	static ::System::Int32* StaticGet_Field_3_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_376624DCCDDB8156_TypeDefinitionIndex)->GetStaticField(0xB8FC);
	}
	// static const ::System::String* Field_3_5; // 0x0
	// static const ::System::String* Field_3_7; // 0x0
	// static const ::System::String* Field_3_9; // 0x0
	// static const ::System::String* Field_3_10; // 0x0
	// static const ::System::String* Field_3_11; // 0x0
	// static const ::System::String* Field_3_12; // 0x0
	// static const ::System::String* Field_3_14; // 0x0
	// static const ::System::String* Field_3_15; // 0x0
	// static const ::System::String* Field_3_16; // 0x0
	// static const ::System::Int32 Field_3_18 = 0x64; // 0x0
	::MoleMole::CharacterCameraDitheringData Field_3_3; // 0x48
	::MoleMole::MonoEffectPluginDither* Field_3_1; // 0x90
	::System::Boolean Field_3_0; // 0x98
	::System::Single Field_3_4; // 0x9C
	::System::Single Field_3_2; // 0xA0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_376624DCCDDB8156__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_376624DCCDDB8156__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_376624DCCDDB8156_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_376624DCCDDB8156_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_376624DCCDDB8156_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_376624DCCDDB8156* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_376624DCCDDB8156*(*)())((::PBYTE)hIl2Cpp + CLASS_3_376624DCCDDB8156_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
