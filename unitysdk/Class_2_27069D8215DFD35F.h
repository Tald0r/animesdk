#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Class_2_27069D8215DFD35F_Enum_3_A09FCA8B96EA2F78.h"

namespace UnityEngine { class Collider; }

#define CLASS_2_27069D8215DFD35F_METHOD_2_8415E9C4AFD7F522_OFFSET UNITYSDK_OFFSET(0x765FBB0)
#define CLASS_2_27069D8215DFD35F_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x765FAA0)
#define CLASS_2_27069D8215DFD35F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x765FB50)
#define CLASS_2_27069D8215DFD35F__CCTOR_OFFSET UNITYSDK_OFFSET(0x765FA20)
#define CLASS_2_27069D8215DFD35F__CTOR_OFFSET UNITYSDK_OFFSET(0x765FA90)

inline static constexpr unsigned int Class_2_27069D8215DFD35F_TypeDefinitionIndex = 75521;

class Class_2_27069D8215DFD35F : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0x42; // 0x0
	::UnityEngine::Collider* Field_2_1; // 0x20
	::System::UInt32 Field_2_0; // 0x28
	::Class_2_27069D8215DFD35F_Enum_3_A09FCA8B96EA2F78 Field_2_2; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_27069D8215DFD35F__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27069D8215DFD35F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27069D8215DFD35F_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27069D8215DFD35F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_8415E9C4AFD7F522(::System::UInt32 a1, ::UnityEngine::Collider* a2, ::Class_2_27069D8215DFD35F_Enum_3_A09FCA8B96EA2F78 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Collider*, ::Class_2_27069D8215DFD35F_Enum_3_A09FCA8B96EA2F78))((::PBYTE)hIl2Cpp + CLASS_2_27069D8215DFD35F_METHOD_2_8415E9C4AFD7F522_OFFSET))(this, a1, a2, a3);
	}
};
