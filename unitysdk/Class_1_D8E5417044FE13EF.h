#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_417A24669F2F689C;
class Class_2_542A772D07AFD4EA;
namespace MoleMole::Config { class DynamicFloat; }

#define CLASS_1_D8E5417044FE13EF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7469D60)
#define CLASS_1_D8E5417044FE13EF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7468E30)
#define CLASS_1_D8E5417044FE13EF_METHOD_1_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x7468EB0)
#define CLASS_1_D8E5417044FE13EF_METHOD_1_3B5C6D652C514B37_OFFSET UNITYSDK_OFFSET(0x7468760)
#define CLASS_1_D8E5417044FE13EF_METHOD_1_6A03C0134352525C_OFFSET UNITYSDK_OFFSET(0x7469DC0)
#define CLASS_1_D8E5417044FE13EF_METHOD_1_73131A6923E32428_OFFSET UNITYSDK_OFFSET(0x74688B0)
#define CLASS_1_D8E5417044FE13EF_METHOD_1_F00D5207B9BA6D1B_OFFSET UNITYSDK_OFFSET(0x7468610)
#define CLASS_1_D8E5417044FE13EF__CTOR_OFFSET UNITYSDK_OFFSET(0x746A2B0)

inline static constexpr unsigned int Class_1_D8E5417044FE13EF_TypeDefinitionIndex = 71368;

class Class_1_D8E5417044FE13EF : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* Field_1_4; // 0x10
	::MoleMole::Config::DynamicFloat* Field_1_5; // 0x18
	::MoleMole::Config::DynamicFloat* Field_1_2; // 0x20
	::MoleMole::Config::DynamicFloat* Field_1_3; // 0x28
	::MoleMole::Config::DynamicFloat* Field_1_7; // 0x30
	::MoleMole::Config::DynamicFloat* Field_1_6; // 0x38
	::MoleMole::Config::DynamicFloat* Field_1_8; // 0x40
	::MoleMole::Config::BuffGroupName Field_1_1; // 0x48
	::System::Int32 Field_1_0; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E5417044FE13EF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F00D5207B9BA6D1B(::Class_1_417A24669F2F689C* a1, ::Class_2_542A772D07AFD4EA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_417A24669F2F689C*, ::Class_2_542A772D07AFD4EA*))((::PBYTE)hIl2Cpp + CLASS_1_D8E5417044FE13EF_METHOD_1_F00D5207B9BA6D1B_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_D8E5417044FE13EF_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D8E5417044FE13EF_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_73131A6923E32428(::System::Int32 a1, ::Class_1_417A24669F2F689C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_417A24669F2F689C*))((::PBYTE)hIl2Cpp + CLASS_1_D8E5417044FE13EF_METHOD_1_73131A6923E32428_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_D8E5417044FE13EF_METHOD_1_0578713EDB32B89E_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_3B5C6D652C514B37(::Class_1_417A24669F2F689C* a1)
	{
		return ((::System::Void(*)(::Class_1_417A24669F2F689C*))((::PBYTE)hIl2Cpp + CLASS_1_D8E5417044FE13EF_METHOD_1_3B5C6D652C514B37_OFFSET))(a1);
	}

	::System::Boolean Method_1_6A03C0134352525C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D8E5417044FE13EF_METHOD_1_6A03C0134352525C_OFFSET))(this, a1, a2);
	}
};
