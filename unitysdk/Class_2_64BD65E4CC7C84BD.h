#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8088D8743C1058EF.h"
#include "unitysdk/Enum_3_0B4A82D7D33DF0CF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_ED5EE319EA265EB6;
namespace MoleMole::Config { class ConfigDynamicValue; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_64BD65E4CC7C84BD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x8BF4550)
#define CLASS_2_64BD65E4CC7C84BD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x8BF3E90)
#define CLASS_2_64BD65E4CC7C84BD_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x8BF4990)
#define CLASS_2_64BD65E4CC7C84BD_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x8BF3F10)
#define CLASS_2_64BD65E4CC7C84BD_METHOD_2_1B709936FC68B7D3_OFFSET UNITYSDK_OFFSET(0x8BF37F0)
#define CLASS_2_64BD65E4CC7C84BD_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x8BF3D60)
#define CLASS_2_64BD65E4CC7C84BD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8BF4930)
#define CLASS_2_64BD65E4CC7C84BD_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x8BF4B40)
#define CLASS_2_64BD65E4CC7C84BD_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x8BF3C60)
#define CLASS_2_64BD65E4CC7C84BD_METHOD_2_D8A375BA431DF6B3_OFFSET UNITYSDK_OFFSET(0x8BF3BA0)
#define CLASS_2_64BD65E4CC7C84BD_METHOD_2_DDBE9A358A92FDCB_OFFSET UNITYSDK_OFFSET(0x8BF45B0)
#define CLASS_2_64BD65E4CC7C84BD__CTOR_OFFSET UNITYSDK_OFFSET(0x8BF48D0)

inline static constexpr unsigned int Class_2_64BD65E4CC7C84BD_TypeDefinitionIndex = 56376;

class Class_2_64BD65E4CC7C84BD : public ::Class_1_8088D8743C1058EF
{
public:
	::System::String* Field_2_0; // 0x30
	::MoleMole::Config::ConfigDynamicValue* Field_2_3; // 0x38
	::Class_1_ED5EE319EA265EB6* Field_2_2; // 0x40
	::Enum_3_0B4A82D7D33DF0CF Field_2_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64BD65E4CC7C84BD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1B709936FC68B7D3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64BD65E4CC7C84BD_METHOD_2_1B709936FC68B7D3_OFFSET))(this);
	}

	::System::Void Method_2_D8A375BA431DF6B3(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_64BD65E4CC7C84BD_METHOD_2_D8A375BA431DF6B3_OFFSET))(this, a1);
	}

	::Class_1_8088D8743C1058EF* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8088D8743C1058EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64BD65E4CC7C84BD_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64BD65E4CC7C84BD_METHOD_2_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_64BD65E4CC7C84BD_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_64BD65E4CC7C84BD_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_64BD65E4CC7C84BD_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64BD65E4CC7C84BD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_2_64BD65E4CC7C84BD* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_64BD65E4CC7C84BD*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_64BD65E4CC7C84BD_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	static ::Class_2_64BD65E4CC7C84BD* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_64BD65E4CC7C84BD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_64BD65E4CC7C84BD_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_DDBE9A358A92FDCB(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_64BD65E4CC7C84BD_METHOD_2_DDBE9A358A92FDCB_OFFSET))(this, a1, a2);
	}
};
