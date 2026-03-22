#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4865323EE33E9248;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_7B457174AA48FB28_METHOD_1_1D68E9A6C6AF89F1_OFFSET UNITYSDK_OFFSET(0x691B250)
#define CLASS_1_7B457174AA48FB28_METHOD_1_75640F482BD6AEB6_OFFSET UNITYSDK_OFFSET(0x691AEC0)
#define CLASS_1_7B457174AA48FB28__CTOR_OFFSET UNITYSDK_OFFSET(0x691AEB0)

inline static constexpr unsigned int Class_1_7B457174AA48FB28_TypeDefinitionIndex = 42563;

class Class_1_7B457174AA48FB28 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B457174AA48FB28__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_75640F482BD6AEB6(::Class_1_4865323EE33E9248* a1)
	{
		return ((::System::Boolean(*)(::Class_1_4865323EE33E9248*))((::PBYTE)hIl2Cpp + CLASS_1_7B457174AA48FB28_METHOD_1_75640F482BD6AEB6_OFFSET))(a1);
	}

	static ::UnityEngine::GameObject* Method_1_1D68E9A6C6AF89F1(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_7B457174AA48FB28_METHOD_1_1D68E9A6C6AF89F1_OFFSET))(a1, a2);
	}
};
