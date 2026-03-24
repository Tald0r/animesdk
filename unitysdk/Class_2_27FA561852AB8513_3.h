#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F8D7C3AB2C204160.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_417A24669F2F689C;
class Class_2_542A772D07AFD4EA;
namespace MoleMole::Config { class ConfigEntityAttackProperty; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_27FA561852AB8513_3_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xA3E08F0)
#define CLASS_2_27FA561852AB8513_3_FROMFLX_OFFSET UNITYSDK_OFFSET(0xA3E01C0)
#define CLASS_2_27FA561852AB8513_3_METHOD_2_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0xA3E0240)
#define CLASS_2_27FA561852AB8513_3_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0xA3E0C90)
#define CLASS_2_27FA561852AB8513_3_METHOD_2_169E1B4A7E9FEBB7_OFFSET UNITYSDK_OFFSET(0xA3E0FA0)
#define CLASS_2_27FA561852AB8513_3_METHOD_2_66A56A98FBC17877_OFFSET UNITYSDK_OFFSET(0xA3DFF00)
#define CLASS_2_27FA561852AB8513_3_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xA3E0090)
#define CLASS_2_27FA561852AB8513_3_METHOD_2_C565D63FD72B311A_OFFSET UNITYSDK_OFFSET(0xA3DFA40)
#define CLASS_2_27FA561852AB8513_3_METHOD_2_C7F9ED430E054F62_OFFSET UNITYSDK_OFFSET(0xA3E0950)
#define CLASS_2_27FA561852AB8513_3_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0xA3E0E40)
#define CLASS_2_27FA561852AB8513_3_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0xA3DFF90)
#define CLASS_2_27FA561852AB8513_3__CTOR_OFFSET UNITYSDK_OFFSET(0xA3E0C80)

inline static constexpr unsigned int Class_2_27FA561852AB8513_3_TypeDefinitionIndex = 65829;

class Class_2_27FA561852AB8513_3 : public ::Class_1_F8D7C3AB2C204160
{
public:
	::MoleMole::Config::ConfigEntityAttackProperty* Field_2_3; // 0x10
	::MoleMole::Config::DynamicFloat* Field_2_2; // 0x18
	::MoleMole::Config::DynamicFloat* Field_2_0; // 0x20
	::MoleMole::Config::DynamicFloat* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C565D63FD72B311A(::Class_1_417A24669F2F689C* a1, ::Class_2_542A772D07AFD4EA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_417A24669F2F689C*, ::Class_2_542A772D07AFD4EA*))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_3_METHOD_2_C565D63FD72B311A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_66A56A98FBC17877(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_3_METHOD_2_66A56A98FBC17877_OFFSET))(this, a1);
	}

	::Class_1_F8D7C3AB2C204160* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_F8D7C3AB2C204160*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_3_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_3_METHOD_2_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_3_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_3_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_C7F9ED430E054F62(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_3_METHOD_2_C7F9ED430E054F62_OFFSET))(this, a1, a2);
	}

	static ::Class_2_27FA561852AB8513_3* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_27FA561852AB8513_3*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_3_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	static ::Class_2_27FA561852AB8513_3* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_27FA561852AB8513_3*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_3_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_3_METHOD_2_00531776927FE5B6_OFFSET))(this, a1);
	}

	::System::Void Method_2_169E1B4A7E9FEBB7(::Class_1_417A24669F2F689C* a1, ::Class_2_542A772D07AFD4EA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_417A24669F2F689C*, ::Class_2_542A772D07AFD4EA*))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_3_METHOD_2_169E1B4A7E9FEBB7_OFFSET))(this, a1, a2);
	}
};
