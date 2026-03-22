#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_1_46738CEC41CD6CBD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Texture; }

#define CLASS_2_4ADEE7902DEBF73B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x68F99A0)
#define CLASS_2_4ADEE7902DEBF73B_METHOD_2_30BC830EFE300715_OFFSET UNITYSDK_OFFSET(0x68FA700)
#define CLASS_2_4ADEE7902DEBF73B_METHOD_2_85A01E585728E955_OFFSET UNITYSDK_OFFSET(0x68FA3C0)
#define CLASS_2_4ADEE7902DEBF73B_METHOD_2_96D5E8346267D688_OFFSET UNITYSDK_OFFSET(0x68F9D30)
#define CLASS_2_4ADEE7902DEBF73B_METHOD_2_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0x68F9A10)
#define CLASS_2_4ADEE7902DEBF73B_METHOD_2_B57A2E22A9ED0C56_OFFSET UNITYSDK_OFFSET(0x68FA520)
#define CLASS_2_4ADEE7902DEBF73B_METHOD_2_CAD4A06D8E172AF1_OFFSET UNITYSDK_OFFSET(0x68FA200)
#define CLASS_2_4ADEE7902DEBF73B_METHOD_2_E089A4EAF27CA572_OFFSET UNITYSDK_OFFSET(0x68FA080)
#define CLASS_2_4ADEE7902DEBF73B_METHOD_2_EC03BF13D7F40502_OFFSET UNITYSDK_OFFSET(0x68F9F60)
#define CLASS_2_4ADEE7902DEBF73B_METHOD_2_ECEA1B518E8985B9_OFFSET UNITYSDK_OFFSET(0x68FA350)
#define CLASS_2_4ADEE7902DEBF73B_ONCREATE_OFFSET UNITYSDK_OFFSET(0x68F9C90)
#define CLASS_2_4ADEE7902DEBF73B__CCTOR_OFFSET UNITYSDK_OFFSET(0x68F9CF0)
#define CLASS_2_4ADEE7902DEBF73B__CTOR_OFFSET UNITYSDK_OFFSET(0x68F9910)

inline static constexpr unsigned int Class_2_4ADEE7902DEBF73B_TypeDefinitionIndex = 54821;

class Class_2_4ADEE7902DEBF73B : public ::Foundation::SingletonDisposable_1<::Class_2_4ADEE7902DEBF73B*>
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4ADEE7902DEBF73B_TypeDefinitionIndex)->GetStaticField(0xB140);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4ADEE7902DEBF73B_TypeDefinitionIndex)->GetStaticField(0xB144);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_46738CEC41CD6CBD*>* Field_2_2; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEE7902DEBF73B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4ADEE7902DEBF73B__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEE7902DEBF73B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEE7902DEBF73B_ONCREATE_OFFSET))(this);
	}

	::System::Boolean Method_2_96D5E8346267D688(::UnityEngine::Texture* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_2_4ADEE7902DEBF73B_METHOD_2_96D5E8346267D688_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_2_E089A4EAF27CA572(::UnityEngine::Texture* a1)
	{
		return ((::System::Int32(*)(::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_2_4ADEE7902DEBF73B_METHOD_2_E089A4EAF27CA572_OFFSET))(a1);
	}

	static ::System::Int32 Method_2_CAD4A06D8E172AF1(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4ADEE7902DEBF73B_METHOD_2_CAD4A06D8E172AF1_OFFSET))(a1);
	}

	static ::System::String* Method_2_ECEA1B518E8985B9(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4ADEE7902DEBF73B_METHOD_2_ECEA1B518E8985B9_OFFSET))(a1);
	}

	::UnityEngine::Texture* Method_2_85A01E585728E955(::System::Int32 a1)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4ADEE7902DEBF73B_METHOD_2_85A01E585728E955_OFFSET))(this, a1);
	}

	::System::Void Method_2_B235E757922104A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEE7902DEBF73B_METHOD_2_B235E757922104A8_OFFSET))(this);
	}

	::System::Void Method_2_B57A2E22A9ED0C56(::UnityEngine::Texture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_2_4ADEE7902DEBF73B_METHOD_2_B57A2E22A9ED0C56_OFFSET))(this, a1);
	}

	::UnityEngine::Texture* Method_2_30BC830EFE300715(::System::String* a1)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4ADEE7902DEBF73B_METHOD_2_30BC830EFE300715_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_2_EC03BF13D7F40502(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4ADEE7902DEBF73B_METHOD_2_EC03BF13D7F40502_OFFSET))(a1);
	}
};
