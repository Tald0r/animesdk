#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoWayPath; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_B6E8606211BAB5A3___C_METHOD_1_4853777A401D93FE_OFFSET UNITYSDK_OFFSET(0x76A4910)
#define CLASS_1_B6E8606211BAB5A3___C_METHOD_1_6A4B5A4D43F54C8F_OFFSET UNITYSDK_OFFSET(0x76A49C0)
#define CLASS_1_B6E8606211BAB5A3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x76A48C0)
#define CLASS_1_B6E8606211BAB5A3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x76A4900)

inline static constexpr unsigned int Class_1_B6E8606211BAB5A3___c_TypeDefinitionIndex = 70220;

class Class_1_B6E8606211BAB5A3___c : public ::System::Object
{
public:
	static ::System::Func_2<::MoleMole::MonoWayPath*, ::UnityEngine::Renderer*>** StaticGet___9__107_1()
	{
		return (::System::Func_2<::MoleMole::MonoWayPath*, ::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6E8606211BAB5A3___c_TypeDefinitionIndex)->GetStaticField(0x46440);
	}
	static ::System::Func_2<::MoleMole::MonoWayPath*, ::System::String*>** StaticGet___9__107_0()
	{
		return (::System::Func_2<::MoleMole::MonoWayPath*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6E8606211BAB5A3___c_TypeDefinitionIndex)->GetStaticField(0x46448);
	}
	static ::Class_1_B6E8606211BAB5A3___c** StaticGet___9()
	{
		return (::Class_1_B6E8606211BAB5A3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6E8606211BAB5A3___c_TypeDefinitionIndex)->GetStaticField(0x46450);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6E8606211BAB5A3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6E8606211BAB5A3___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Renderer* Method_1_4853777A401D93FE(::MoleMole::MonoWayPath* a1)
	{
		return ((::UnityEngine::Renderer*(*)(::PVOID, ::MoleMole::MonoWayPath*))((::PBYTE)hIl2Cpp + CLASS_1_B6E8606211BAB5A3___C_METHOD_1_4853777A401D93FE_OFFSET))(this, a1);
	}

	::System::String* Method_1_6A4B5A4D43F54C8F(::MoleMole::MonoWayPath* a1)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::MonoWayPath*))((::PBYTE)hIl2Cpp + CLASS_1_B6E8606211BAB5A3___C_METHOD_1_6A4B5A4D43F54C8F_OFFSET))(this, a1);
	}
};
