#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DA8BF519212BAE65_Enum_3_440F508F55620935.h"
#include "unitysdk/System/Object.h"

class Class_2_94AEE9C7114702E7;
class Class_2_DA8BF519212BAE65;

#define CLASS_2_DA8BF519212BAE65_CLASS_1_F7E52B4C6345E63C_COMPARETO_OFFSET UNITYSDK_OFFSET(0xA6B99E0)
#define CLASS_2_DA8BF519212BAE65_CLASS_1_F7E52B4C6345E63C_METHOD_1_EE26FD335FEDFC55_OFFSET UNITYSDK_OFFSET(0xA6B9860)
#define CLASS_2_DA8BF519212BAE65_CLASS_1_F7E52B4C6345E63C__CTOR_OFFSET UNITYSDK_OFFSET(0xA6B9710)

inline static constexpr unsigned int Class_2_DA8BF519212BAE65_Class_1_F7E52B4C6345E63C_TypeDefinitionIndex = 45417;

class Class_2_DA8BF519212BAE65_Class_1_F7E52B4C6345E63C : public ::System::Object
{
public:
	::Class_2_DA8BF519212BAE65* Field_1_0; // 0x10
	::System::Int32 Field_1_2; // 0x18
	::Class_2_DA8BF519212BAE65_Enum_3_440F508F55620935 Field_1_1; // 0x1C
	::System::Int32 Field_1_3; // 0x20
	::System::Int32 Field_1_5; // 0x24
	::System::Int32 Field_1_4; // 0x28
	::System::Boolean Field_1_7; // 0x2C
	::System::Int32 Field_1_6; // 0x30

	::System::Void _ctor(::Class_2_94AEE9C7114702E7* a1, ::Class_2_DA8BF519212BAE65_Enum_3_440F508F55620935 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_94AEE9C7114702E7*, ::Class_2_DA8BF519212BAE65_Enum_3_440F508F55620935, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DA8BF519212BAE65_CLASS_1_F7E52B4C6345E63C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 CompareTo(::Class_2_DA8BF519212BAE65_Class_1_F7E52B4C6345E63C* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_DA8BF519212BAE65_Class_1_F7E52B4C6345E63C*))((::PBYTE)hIl2Cpp + CLASS_2_DA8BF519212BAE65_CLASS_1_F7E52B4C6345E63C_COMPARETO_OFFSET))(this, a1);
	}

	::System::Void Method_1_EE26FD335FEDFC55(::Class_2_94AEE9C7114702E7* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_94AEE9C7114702E7*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DA8BF519212BAE65_CLASS_1_F7E52B4C6345E63C_METHOD_1_EE26FD335FEDFC55_OFFSET))(this, a1, a2);
	}
};
