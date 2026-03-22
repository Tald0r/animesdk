#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_CD73188FA8F7417C.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_273278230A48923F;
class Class_1_B205B83503DD531F;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A807D7989306A424_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x6DAAAC0)
#define CLASS_1_A807D7989306A424_METHOD_1_145D59A442134DE8_OFFSET UNITYSDK_OFFSET(0x6DA96D0)
#define CLASS_1_A807D7989306A424_METHOD_1_2EC4CD50AB886B63_OFFSET UNITYSDK_OFFSET(0x6DA9360)
#define CLASS_1_A807D7989306A424_METHOD_1_37BB79EDD255216C_OFFSET UNITYSDK_OFFSET(0x6DAA830)
#define CLASS_1_A807D7989306A424_METHOD_1_4E608ED8CF3CBCB8_OFFSET UNITYSDK_OFFSET(0x6DA9980)
#define CLASS_1_A807D7989306A424_METHOD_1_5743BA12A61A6021_OFFSET UNITYSDK_OFFSET(0x6DA98D0)
#define CLASS_1_A807D7989306A424_METHOD_1_5BBDDCFA6275B703_OFFSET UNITYSDK_OFFSET(0x6DAA240)
#define CLASS_1_A807D7989306A424_METHOD_1_98E55DBBC8990FF8_OFFSET UNITYSDK_OFFSET(0x6DA9D70)
#define CLASS_1_A807D7989306A424_METHOD_1_A512A0B8BD205E0C_OFFSET UNITYSDK_OFFSET(0x6DA9800)
#define CLASS_1_A807D7989306A424_METHOD_1_A8B43AB11C336AA6_OFFSET UNITYSDK_OFFSET(0x6DA9220)
#define CLASS_1_A807D7989306A424_METHOD_1_CD210EEA0CFC3079_OFFSET UNITYSDK_OFFSET(0x6DA92F0)
#define CLASS_1_A807D7989306A424__CCTOR_OFFSET UNITYSDK_OFFSET(0x6DA9100)
#define CLASS_1_A807D7989306A424__CTOR_OFFSET UNITYSDK_OFFSET(0x6DA8F70)

inline static constexpr unsigned int Class_1_A807D7989306A424_TypeDefinitionIndex = 47556;

class Class_1_A807D7989306A424 : public ::System::Object
{
public:
	static ::System::Type** StaticGet_Field_1_8()
	{
		return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A807D7989306A424_TypeDefinitionIndex)->GetStaticField(0x3CCB0);
	}
	static ::System::Collections::Generic::List_1<::System::UInt64>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::List_1<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A807D7989306A424_TypeDefinitionIndex)->GetStaticField(0x3CCB8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A807D7989306A424_TypeDefinitionIndex)->GetStaticField(0x3CCC0);
	}
	static ::System::UInt64* StaticGet_Field_1_5()
	{
		return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A807D7989306A424_TypeDefinitionIndex)->GetStaticField(0xF120);
	}
	::System::Collections::Generic::List_1<::Struct_2_CD73188FA8F7417C>* Field_1_1; // 0x10
	::System::String* Field_1_3; // 0x18
	::Class_1_B205B83503DD531F* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Struct_2_CD73188FA8F7417C>* Field_1_0; // 0x28
	::System::Int32 Field_1_4; // 0x30

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A807D7989306A424__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A807D7989306A424__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_A8B43AB11C336AA6(::System::Span_1<::System::String*> a1, ::System::Int32& a2, ::Struct_2_CD73188FA8F7417C& a3)
	{
		return ((::System::Boolean(*)(::System::Span_1<::System::String*>, ::System::Int32&, ::Struct_2_CD73188FA8F7417C&))((::PBYTE)hIl2Cpp + CLASS_1_A807D7989306A424_METHOD_1_A8B43AB11C336AA6_OFFSET))(a1, a2, a3);
	}

	::System::Int32 Method_1_CD210EEA0CFC3079()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A807D7989306A424_METHOD_1_CD210EEA0CFC3079_OFFSET))(this);
	}

	static ::System::String* Method_1_2EC4CD50AB886B63(::UnityEngine::Color& a1)
	{
		return ((::System::String*(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + CLASS_1_A807D7989306A424_METHOD_1_2EC4CD50AB886B63_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_145D59A442134DE8(::UnityEngine::Color& a1)
	{
		return ((::System::UInt32(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + CLASS_1_A807D7989306A424_METHOD_1_145D59A442134DE8_OFFSET))(a1);
	}

	::System::Void Method_1_A512A0B8BD205E0C(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_A807D7989306A424_METHOD_1_A512A0B8BD205E0C_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_5743BA12A61A6021(::System::Single a1, ::System::Span_1<::System::String*> a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Span_1<::System::String*>))((::PBYTE)hIl2Cpp + CLASS_1_A807D7989306A424_METHOD_1_5743BA12A61A6021_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4E608ED8CF3CBCB8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A807D7989306A424_METHOD_1_4E608ED8CF3CBCB8_OFFSET))(this, a1);
	}

	static ::Struct_2_CD73188FA8F7417C Method_1_5BBDDCFA6275B703(::System::String* a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Color a4, ::System::String* a5)
	{
		return ((::Struct_2_CD73188FA8F7417C(*)(::System::String*, ::System::Single, ::System::Single, ::UnityEngine::Color, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A807D7989306A424_METHOD_1_5BBDDCFA6275B703_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_1_98E55DBBC8990FF8(::System::Span_1<::System::String*> a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Span_1<::System::String*>))((::PBYTE)hIl2Cpp + CLASS_1_A807D7989306A424_METHOD_1_98E55DBBC8990FF8_OFFSET))(this, a1);
	}

	::System::Void Method_1_37BB79EDD255216C(::System::UInt64 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Color a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single, ::System::Single, ::UnityEngine::Color, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A807D7989306A424_METHOD_1_37BB79EDD255216C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A807D7989306A424_METHOD_1_1290EA767C459179_OFFSET))(this);
	}
};
