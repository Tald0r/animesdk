#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4235B4993CF28A7F.h"
#include "unitysdk/Enum_3_0B4A82D7D33DF0CF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_8088D8743C1058EF;
class Class_1_ED5EE319EA265EB6;
class Class_1_F157DD73C7C08100;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_95498D023C6B2B6B_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x6238090)
#define CLASS_3_95498D023C6B2B6B_FROMFLX_OFFSET UNITYSDK_OFFSET(0x62379E0)
#define CLASS_3_95498D023C6B2B6B_METHOD_3_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x6237A60)
#define CLASS_3_95498D023C6B2B6B_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x62385F0)
#define CLASS_3_95498D023C6B2B6B_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x6238490)
#define CLASS_3_95498D023C6B2B6B_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x62378B0)
#define CLASS_3_95498D023C6B2B6B_METHOD_3_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x62377B0)
#define CLASS_3_95498D023C6B2B6B_METHOD_3_D8A375BA431DF6B3_OFFSET UNITYSDK_OFFSET(0x62376F0)
#define CLASS_3_95498D023C6B2B6B_METHOD_3_DDBE9A358A92FDCB_OFFSET UNITYSDK_OFFSET(0x62380F0)
#define CLASS_3_95498D023C6B2B6B__CTOR_OFFSET UNITYSDK_OFFSET(0x6238430)

inline static constexpr unsigned int Class_3_95498D023C6B2B6B_TypeDefinitionIndex = 79123;

class Class_3_95498D023C6B2B6B : public ::Class_2_4235B4993CF28A7F
{
public:
	::Class_1_F157DD73C7C08100* Field_3_2; // 0x30
	::System::String* Field_3_1; // 0x38
	::Class_1_ED5EE319EA265EB6* Field_3_0; // 0x40
	::Enum_3_0B4A82D7D33DF0CF Field_3_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95498D023C6B2B6B__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D8A375BA431DF6B3(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_95498D023C6B2B6B_METHOD_3_D8A375BA431DF6B3_OFFSET))(this, a1);
	}

	::Class_1_8088D8743C1058EF* Method_3_D8A163211C06267F()
	{
		return ((::Class_1_8088D8743C1058EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95498D023C6B2B6B_METHOD_3_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95498D023C6B2B6B_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_95498D023C6B2B6B_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_95498D023C6B2B6B_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_3_95498D023C6B2B6B* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_95498D023C6B2B6B*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_95498D023C6B2B6B_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_95498D023C6B2B6B_METHOD_3_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_DDBE9A358A92FDCB(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_95498D023C6B2B6B_METHOD_3_DDBE9A358A92FDCB_OFFSET))(this, a1, a2);
	}

	static ::Class_3_95498D023C6B2B6B* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_95498D023C6B2B6B*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_95498D023C6B2B6B_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}
};
