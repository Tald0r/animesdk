#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_5346E8783F2896FF___C_METHOD_1_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0x90C0130)
#define CLASS_2_5346E8783F2896FF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x90C00E0)
#define CLASS_2_5346E8783F2896FF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x90C0120)

inline static constexpr unsigned int Class_2_5346E8783F2896FF___c_TypeDefinitionIndex = 78709;

class Class_2_5346E8783F2896FF___c : public ::System::Object
{
public:
	static ::Class_2_5346E8783F2896FF___c** StaticGet___9()
	{
		return (::Class_2_5346E8783F2896FF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5346E8783F2896FF___c_TypeDefinitionIndex)->GetStaticField(0x2F7E0);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__11_1()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5346E8783F2896FF___c_TypeDefinitionIndex)->GetStaticField(0x2F7E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5346E8783F2896FF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5346E8783F2896FF___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3BCF0226A6CDC13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5346E8783F2896FF___C_METHOD_1_3BCF0226A6CDC13B_OFFSET))(this);
	}
};
