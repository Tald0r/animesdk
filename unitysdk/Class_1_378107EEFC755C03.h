#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_60DDD9C206686F44;
namespace System { class Action; }

#define CLASS_1_378107EEFC755C03_METHOD_1_1437F81052A9C43F_OFFSET UNITYSDK_OFFSET(0xD7A3310)
#define CLASS_1_378107EEFC755C03_METHOD_1_27CC4FBFEC17948C_OFFSET UNITYSDK_OFFSET(0xD7A3230)
#define CLASS_1_378107EEFC755C03_METHOD_1_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0xD7A3440)
#define CLASS_1_378107EEFC755C03_METHOD_1_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0xD7A3510)
#define CLASS_1_378107EEFC755C03__CTOR_OFFSET UNITYSDK_OFFSET(0xD7A3220)

inline static constexpr unsigned int Class_1_378107EEFC755C03_TypeDefinitionIndex = 42935;

class Class_1_378107EEFC755C03 : public ::System::Object
{
public:
	::Class_2_60DDD9C206686F44* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378107EEFC755C03__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_27CC4FBFEC17948C(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_378107EEFC755C03_METHOD_1_27CC4FBFEC17948C_OFFSET))(this, a1);
	}

	::System::Void Method_1_1437F81052A9C43F(::Class_2_60DDD9C206686F44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_60DDD9C206686F44*))((::PBYTE)hIl2Cpp + CLASS_1_378107EEFC755C03_METHOD_1_1437F81052A9C43F_OFFSET))(this, a1);
	}

	::System::Void Method_1_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378107EEFC755C03_METHOD_1_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_1_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378107EEFC755C03_METHOD_1_9A6DA36CCAE7D188_OFFSET))(this);
	}
};
