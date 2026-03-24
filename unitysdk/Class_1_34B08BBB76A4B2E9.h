#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_9A16BB53176B1EDB;
namespace UnityEngine { class RectTransform; }

#define CLASS_1_34B08BBB76A4B2E9_METHOD_1_1577746BCFD33942_OFFSET UNITYSDK_OFFSET(0x6FF0950)
#define CLASS_1_34B08BBB76A4B2E9_METHOD_1_90F57E46DEE570F0_OFFSET UNITYSDK_OFFSET(0x6FF0810)
#define CLASS_1_34B08BBB76A4B2E9_METHOD_1_E1B3E96ABC8BCE2E_OFFSET UNITYSDK_OFFSET(0x6FF0570)
#define CLASS_1_34B08BBB76A4B2E9__CTOR_OFFSET UNITYSDK_OFFSET(0x6FF0560)

inline static constexpr unsigned int Class_1_34B08BBB76A4B2E9_TypeDefinitionIndex = 45982;

class Class_1_34B08BBB76A4B2E9 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34B08BBB76A4B2E9__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_E1B3E96ABC8BCE2E(::UnityEngine::RectTransform* a1, ::Il2CppArray<::UnityEngine::Vector2>*& a2)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*, ::Il2CppArray<::UnityEngine::Vector2>*&))((::PBYTE)hIl2Cpp + CLASS_1_34B08BBB76A4B2E9_METHOD_1_E1B3E96ABC8BCE2E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_90F57E46DEE570F0(::Class_2_9A16BB53176B1EDB* a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Void(*)(::Class_2_9A16BB53176B1EDB*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_34B08BBB76A4B2E9_METHOD_1_90F57E46DEE570F0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1577746BCFD33942(::Class_2_9A16BB53176B1EDB* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_2_9A16BB53176B1EDB*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_34B08BBB76A4B2E9_METHOD_1_1577746BCFD33942_OFFSET))(a1, a2);
	}
};
