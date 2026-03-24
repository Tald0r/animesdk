#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_A29885C0C3D333B7_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xAC8CD00)
#define CLASS_4_A29885C0C3D333B7_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xAC8C850)
#define CLASS_4_A29885C0C3D333B7_METHOD_4_F637E7BBB4A3229E_OFFSET UNITYSDK_OFFSET(0xAC8C920)
#define CLASS_4_A29885C0C3D333B7__CTOR_OFFSET UNITYSDK_OFFSET(0xAC8CC60)

inline static constexpr unsigned int Class_4_A29885C0C3D333B7_TypeDefinitionIndex = 79981;

class Class_4_A29885C0C3D333B7 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A29885C0C3D333B7__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A29885C0C3D333B7_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_F637E7BBB4A3229E(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_A29885C0C3D333B7_METHOD_4_F637E7BBB4A3229E_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A29885C0C3D333B7_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
