#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class Component; }

#define CLASS_1_26E67000C5FBEB0C___C_METHOD_1_71006041C93D2374_OFFSET UNITYSDK_OFFSET(0xB209390)
#define CLASS_1_26E67000C5FBEB0C___C_METHOD_1_E38F36310BE855C2_OFFSET UNITYSDK_OFFSET(0xB209270)
#define CLASS_1_26E67000C5FBEB0C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB209220)
#define CLASS_1_26E67000C5FBEB0C___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB209260)

inline static constexpr unsigned int Class_1_26E67000C5FBEB0C___c_TypeDefinitionIndex = 77257;

class Class_1_26E67000C5FBEB0C___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::UnityEngine::Component*>** StaticGet___9__6_0()
	{
		return (::System::Predicate_1<::UnityEngine::Component*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26E67000C5FBEB0C___c_TypeDefinitionIndex)->GetStaticField(0x332F0);
	}
	static ::Class_1_26E67000C5FBEB0C___c** StaticGet___9()
	{
		return (::Class_1_26E67000C5FBEB0C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26E67000C5FBEB0C___c_TypeDefinitionIndex)->GetStaticField(0x332F8);
	}
	static ::System::Predicate_1<::UnityEngine::Component*>** StaticGet___9__5_0()
	{
		return (::System::Predicate_1<::UnityEngine::Component*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26E67000C5FBEB0C___c_TypeDefinitionIndex)->GetStaticField(0x33300);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_26E67000C5FBEB0C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26E67000C5FBEB0C___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_E38F36310BE855C2(::UnityEngine::Component* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_26E67000C5FBEB0C___C_METHOD_1_E38F36310BE855C2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_71006041C93D2374(::UnityEngine::Component* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_26E67000C5FBEB0C___C_METHOD_1_71006041C93D2374_OFFSET))(this, a1);
	}
};
