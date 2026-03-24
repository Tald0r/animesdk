#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_A6B26016D9623887_METHOD_1_122C929DA818A8A3_OFFSET UNITYSDK_OFFSET(0xA15BDA0)
#define CLASS_1_A6B26016D9623887_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xA15C0D0)
#define CLASS_1_A6B26016D9623887_METHOD_1_C8B31A515D4DD519_OFFSET UNITYSDK_OFFSET(0xA15BE60)
#define CLASS_1_A6B26016D9623887__CTOR_OFFSET UNITYSDK_OFFSET(0xA15BD90)

inline static constexpr unsigned int Class_1_A6B26016D9623887_TypeDefinitionIndex = 47301;

class Class_1_A6B26016D9623887 : public ::System::Object
{
public:
	::UnityEngine::Renderer* Field_1_1; // 0x10
	::Il2CppArray<::UnityEngine::Material*>* Field_1_0; // 0x18

	::System::Void _ctor(::UnityEngine::Renderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_A6B26016D9623887__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C8B31A515D4DD519(::UnityEngine::Renderer* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_A6B26016D9623887_METHOD_1_C8B31A515D4DD519_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6B26016D9623887_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_122C929DA818A8A3(::UnityEngine::Renderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_A6B26016D9623887_METHOD_1_122C929DA818A8A3_OFFSET))(this, a1);
	}
};
