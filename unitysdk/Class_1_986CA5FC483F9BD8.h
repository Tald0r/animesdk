#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_986CA5FC483F9BD8_Struct_2_6175284CFEF73564_5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation { class MyLogger; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_986CA5FC483F9BD8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7A197D0)
#define CLASS_1_986CA5FC483F9BD8_METHOD_1_06EDB0DDB030E3E1_OFFSET UNITYSDK_OFFSET(0x7A19E90)
#define CLASS_1_986CA5FC483F9BD8_METHOD_1_09C612652908AB8F_OFFSET UNITYSDK_OFFSET(0x7A19980)
#define CLASS_1_986CA5FC483F9BD8_METHOD_1_10FCBC983012DA5B_OFFSET UNITYSDK_OFFSET(0x7A19CF0)
#define CLASS_1_986CA5FC483F9BD8_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x7A19D90)
#define CLASS_1_986CA5FC483F9BD8_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x7A198D0)
#define CLASS_1_986CA5FC483F9BD8_METHOD_1_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x7A19C20)
#define CLASS_1_986CA5FC483F9BD8_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x7A19B90)
#define CLASS_1_986CA5FC483F9BD8__CTOR_OFFSET UNITYSDK_OFFSET(0x7A196F0)

inline static constexpr unsigned int Class_1_986CA5FC483F9BD8_TypeDefinitionIndex = 51743;

class Class_1_986CA5FC483F9BD8 : public ::System::Object
{
public:
	::Foundation::MyLogger* Field_1_5; // 0x10
	::System::Collections::Generic::List_1<::Class_1_986CA5FC483F9BD8_Struct_2_6175284CFEF73564_5>* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::UnityEngine::Vector3 Field_1_4; // 0x24
	::System::Int32 Field_1_0; // 0x30
	::System::Single Field_1_3; // 0x34

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_986CA5FC483F9BD8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_986CA5FC483F9BD8_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_09C612652908AB8F(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_986CA5FC483F9BD8_METHOD_1_09C612652908AB8F_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_986CA5FC483F9BD8_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_986CA5FC483F9BD8_METHOD_1_C2245EC58D417830_OFFSET))(this);
	}

	::System::Void Method_1_10FCBC983012DA5B(::UnityEngine::Color a1, ::UnityEngine::Color a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_986CA5FC483F9BD8_METHOD_1_10FCBC983012DA5B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_986CA5FC483F9BD8_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_986CA5FC483F9BD8_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_06EDB0DDB030E3E1(::UnityEngine::Color a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_986CA5FC483F9BD8_METHOD_1_06EDB0DDB030E3E1_OFFSET))(this, a1, a2);
	}
};
