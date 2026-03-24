#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8088D8743C1058EF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_2EF7AC7A6C04963E.h"

class Class_1_236FD73ABC492E3F;
class Class_1_ED5EE319EA265EB6;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_F3A5B637BFECE116_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7B8D460)
#define CLASS_2_F3A5B637BFECE116_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7B8C8D0)
#define CLASS_2_F3A5B637BFECE116_METHOD_2_001296DDB7E01A54_OFFSET UNITYSDK_OFFSET(0x7B8D4C0)
#define CLASS_2_F3A5B637BFECE116_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x7B8DB70)
#define CLASS_2_F3A5B637BFECE116_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x7B8C950)
#define CLASS_2_F3A5B637BFECE116_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x7B8C7A0)
#define CLASS_2_F3A5B637BFECE116_METHOD_2_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x7B8C600)
#define CLASS_2_F3A5B637BFECE116_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7B8D9B0)
#define CLASS_2_F3A5B637BFECE116_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x7B8DA10)
#define CLASS_2_F3A5B637BFECE116_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x7B8C6A0)
#define CLASS_2_F3A5B637BFECE116_METHOD_2_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x7B8BF00)
#define CLASS_2_F3A5B637BFECE116__CTOR_OFFSET UNITYSDK_OFFSET(0x7B8D8E0)

inline static constexpr unsigned int Class_2_F3A5B637BFECE116_TypeDefinitionIndex = 58308;

class Class_2_F3A5B637BFECE116 : public ::Class_1_8088D8743C1058EF
{
public:
	::Class_1_ED5EE319EA265EB6* Field_2_1; // 0x30
	::Struct_2_2EF7AC7A6C04963E<::System::Single> Field_2_3; // 0x38
	::Class_1_ED5EE319EA265EB6* Field_2_0; // 0x58
	::Struct_2_2EF7AC7A6C04963E<::System::String*> Field_2_5; // 0x60
	::Struct_2_2EF7AC7A6C04963E<::System::Single> Field_2_2; // 0x80
	::Struct_2_2EF7AC7A6C04963E<::System::String*> Field_2_4; // 0xA0
	::Struct_2_2EF7AC7A6C04963E<::System::String*> Field_2_6; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3A5B637BFECE116__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3A5B637BFECE116_METHOD_2_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_2_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_F3A5B637BFECE116_METHOD_2_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_1_8088D8743C1058EF* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8088D8743C1058EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3A5B637BFECE116_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3A5B637BFECE116_METHOD_2_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_F3A5B637BFECE116_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F3A5B637BFECE116_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3A5B637BFECE116_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_001296DDB7E01A54(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F3A5B637BFECE116_METHOD_2_001296DDB7E01A54_OFFSET))(this, a1, a2);
	}

	static ::Class_2_F3A5B637BFECE116* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_F3A5B637BFECE116*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_F3A5B637BFECE116_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_F3A5B637BFECE116_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	static ::Class_2_F3A5B637BFECE116* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_F3A5B637BFECE116*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F3A5B637BFECE116_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}
};
