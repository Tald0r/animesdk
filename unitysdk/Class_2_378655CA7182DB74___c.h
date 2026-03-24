#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_378655CA7182DB74___C_METHOD_1_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0xAA12650)
#define CLASS_2_378655CA7182DB74___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAA12600)
#define CLASS_2_378655CA7182DB74___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAA12640)

inline static constexpr unsigned int Class_2_378655CA7182DB74___c_TypeDefinitionIndex = 41705;

class Class_2_378655CA7182DB74___c : public ::System::Object
{
public:
	static ::Class_2_378655CA7182DB74___c** StaticGet___9()
	{
		return (::Class_2_378655CA7182DB74___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_378655CA7182DB74___c_TypeDefinitionIndex)->GetStaticField(0x2F1A0);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__11_8()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_378655CA7182DB74___c_TypeDefinitionIndex)->GetStaticField(0x2F1A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_378655CA7182DB74___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_378655CA7182DB74___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_378655CA7182DB74___C_METHOD_1_A1781348F0A89177_OFFSET))(this);
	}
};
