#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

#define CLASS_2_89BCAAF888F8E9D9_METHOD_2_3864009A7EA2C93C_OFFSET UNITYSDK_OFFSET(0x66E8460)
#define CLASS_2_89BCAAF888F8E9D9_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x66E83B0)
#define CLASS_2_89BCAAF888F8E9D9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x66E8560)
#define CLASS_2_89BCAAF888F8E9D9__CCTOR_OFFSET UNITYSDK_OFFSET(0x66E8330)
#define CLASS_2_89BCAAF888F8E9D9__CTOR_OFFSET UNITYSDK_OFFSET(0x66E83A0)

inline static constexpr unsigned int Class_2_89BCAAF888F8E9D9_TypeDefinitionIndex = 37884;

class Class_2_89BCAAF888F8E9D9 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0x10; // 0x0
	::UnityEngine::AnimatorStateInfo Field_2_0; // 0x20
	::System::Int32 Field_2_2; // 0x48
	::UnityEngine::AnimatorStateInfo Field_2_1; // 0x4C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_89BCAAF888F8E9D9__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89BCAAF888F8E9D9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89BCAAF888F8E9D9_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_3864009A7EA2C93C(::System::UInt32 a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::AnimatorStateInfo a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_89BCAAF888F8E9D9_METHOD_2_3864009A7EA2C93C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89BCAAF888F8E9D9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
