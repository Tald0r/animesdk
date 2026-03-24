#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_21AFD626C15FE0DB_Class_1_3CA48EF5D79B72BD;
namespace UnityEngine { class GameObject; }

#define CLASS_1_21AFD626C15FE0DB_CLASS_1_76B2F52ADA6942C4_METHOD_1_2D93036445EDB45E_OFFSET UNITYSDK_OFFSET(0xB3D80D0)
#define CLASS_1_21AFD626C15FE0DB_CLASS_1_76B2F52ADA6942C4__CTOR_OFFSET UNITYSDK_OFFSET(0xB3D80C0)

inline static constexpr unsigned int Class_1_21AFD626C15FE0DB_Class_1_76B2F52ADA6942C4_TypeDefinitionIndex = 68599;

class Class_1_21AFD626C15FE0DB_Class_1_76B2F52ADA6942C4 : public ::System::Object
{
public:
	::Class_1_21AFD626C15FE0DB_Class_1_3CA48EF5D79B72BD* Field_1_1; // 0x10
	::UnityEngine::GameObject* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21AFD626C15FE0DB_CLASS_1_76B2F52ADA6942C4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2D93036445EDB45E(::UnityEngine::GameObject* a1, ::Foundation::AssetPath a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_21AFD626C15FE0DB_CLASS_1_76B2F52ADA6942C4_METHOD_1_2D93036445EDB45E_OFFSET))(this, a1, a2);
	}
};
