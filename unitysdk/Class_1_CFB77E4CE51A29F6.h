#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_89120A467F7A010D;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Sprite; }

#define CLASS_1_CFB77E4CE51A29F6__CTOR_OFFSET UNITYSDK_OFFSET(0x96AA1B0)

inline static constexpr unsigned int Class_1_CFB77E4CE51A29F6_TypeDefinitionIndex = 73267;

class Class_1_CFB77E4CE51A29F6 : public ::System::Object
{
public:
	::System::Func_2<::System::Boolean, ::System::Boolean>* Field_1_2; // 0x10
	::Class_1_89120A467F7A010D* Field_1_1; // 0x18
	::UnityEngine::Sprite* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFB77E4CE51A29F6__CTOR_OFFSET))(this);
	}
};
