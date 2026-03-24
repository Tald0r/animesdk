#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4865323EE33E9248;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_7B457174AA48FB28_METHOD_1_1D68E9A6C6AF89F1_OFFSET UNITYSDK_OFFSET(0x13C9AD20)
#define CLASS_1_7B457174AA48FB28_METHOD_1_75640F482BD6AEB6_OFFSET UNITYSDK_OFFSET(0x13C9AE50)
#define CLASS_1_7B457174AA48FB28__CTOR_OFFSET UNITYSDK_OFFSET(0x13C9AD10)

inline static constexpr unsigned int Class_1_7B457174AA48FB28_TypeDefinitionIndex = 38453;

class Class_1_7B457174AA48FB28 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B457174AA48FB28__CTOR_OFFSET))(this);
	}

	static ::UnityEngine::GameObject* Method_1_1D68E9A6C6AF89F1(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_7B457174AA48FB28_METHOD_1_1D68E9A6C6AF89F1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_75640F482BD6AEB6(::Class_1_4865323EE33E9248* a1)
	{
		return ((::System::Boolean(*)(::Class_1_4865323EE33E9248*))((::PBYTE)hIl2Cpp + CLASS_1_7B457174AA48FB28_METHOD_1_75640F482BD6AEB6_OFFSET))(a1);
	}
};
