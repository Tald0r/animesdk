#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Material; }

#define CLASS_1_2C75E68C0ED89E97_METHOD_1_428BD246F5FAAA99_OFFSET UNITYSDK_OFFSET(0x70F8730)
#define CLASS_1_2C75E68C0ED89E97_METHOD_1_55C333AA27E99431_OFFSET UNITYSDK_OFFSET(0x70F8900)
#define CLASS_1_2C75E68C0ED89E97_METHOD_1_742825C7439F8AB6_OFFSET UNITYSDK_OFFSET(0x70F85B0)
#define CLASS_1_2C75E68C0ED89E97__CCTOR_OFFSET UNITYSDK_OFFSET(0x70F8570)
#define CLASS_1_2C75E68C0ED89E97__CTOR_OFFSET UNITYSDK_OFFSET(0x70F84F0)

inline static constexpr unsigned int Class_1_2C75E68C0ED89E97_TypeDefinitionIndex = 37377;

class Class_1_2C75E68C0ED89E97 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C75E68C0ED89E97_TypeDefinitionIndex)->GetStaticField(0xFB50);
	}
	::UnityEngine::Material* Field_1_1; // 0x10
	::System::Collections::Generic::Stack_1<::UnityEngine::Material*>* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C75E68C0ED89E97__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C75E68C0ED89E97__CCTOR_OFFSET))();
	}

	::System::Void Method_1_742825C7439F8AB6(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_2C75E68C0ED89E97_METHOD_1_742825C7439F8AB6_OFFSET))(this, a1);
	}

	::System::Void Method_1_428BD246F5FAAA99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C75E68C0ED89E97_METHOD_1_428BD246F5FAAA99_OFFSET))(this);
	}

	::UnityEngine::Material* Method_1_55C333AA27E99431()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C75E68C0ED89E97_METHOD_1_55C333AA27E99431_OFFSET))(this);
	}
};
