#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8088D8743C1058EF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_2EF7AC7A6C04963E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_ED5EE319EA265EB6;
class Class_1_F157DD73C7C08100;
namespace MoleMole::Config { class EffectAutoDynamicValue; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_75F738B9198F4106_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x83D6D60)
#define CLASS_2_75F738B9198F4106_FROMFLX_OFFSET UNITYSDK_OFFSET(0x83D6300)
#define CLASS_2_75F738B9198F4106_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x83D7200)
#define CLASS_2_75F738B9198F4106_METHOD_2_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x83D6380)
#define CLASS_2_75F738B9198F4106_METHOD_2_82F37E818D9FE609_OFFSET UNITYSDK_OFFSET(0x83D6DC0)
#define CLASS_2_75F738B9198F4106_METHOD_2_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x83D5800)
#define CLASS_2_75F738B9198F4106_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x83D61D0)
#define CLASS_2_75F738B9198F4106_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x83D7510)
#define CLASS_2_75F738B9198F4106_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x83D73B0)
#define CLASS_2_75F738B9198F4106_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x83D60D0)
#define CLASS_2_75F738B9198F4106_METHOD_2_D8A375BA431DF6B3_OFFSET UNITYSDK_OFFSET(0x83D6010)
#define CLASS_2_75F738B9198F4106__CTOR_OFFSET UNITYSDK_OFFSET(0x83D71A0)

inline static constexpr unsigned int Class_2_75F738B9198F4106_TypeDefinitionIndex = 67025;

class Class_2_75F738B9198F4106 : public ::Class_1_8088D8743C1058EF
{
public:
	::Class_1_ED5EE319EA265EB6* Field_2_4; // 0x30
	::Struct_2_2EF7AC7A6C04963E<::System::String*> Field_2_1; // 0x38
	::Class_1_F157DD73C7C08100* Field_2_0; // 0x58
	::MoleMole::Config::EffectAutoDynamicValue* Field_2_5; // 0x60
	::Struct_2_2EF7AC7A6C04963E<::UnityEngine::Vector3> Field_2_2; // 0x68
	::Struct_2_2EF7AC7A6C04963E<::UnityEngine::Vector3> Field_2_3; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_METHOD_2_8CA88D55ECEFAD59_OFFSET))(this);
	}

	::System::Void Method_2_D8A375BA431DF6B3(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_METHOD_2_D8A375BA431DF6B3_OFFSET))(this, a1);
	}

	::Class_1_8088D8743C1058EF* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8088D8743C1058EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_METHOD_2_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_METHOD_2_5B0202969299569F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_82F37E818D9FE609(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_METHOD_2_82F37E818D9FE609_OFFSET))(this, a1, a2);
	}

	static ::Class_2_75F738B9198F4106* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_75F738B9198F4106*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	static ::Class_2_75F738B9198F4106* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_75F738B9198F4106*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F738B9198F4106_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
