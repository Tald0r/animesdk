#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8088D8743C1058EF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_ED5EE319EA265EB6;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_1C6A0946576AC85D_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x9AECC50)
#define CLASS_2_1C6A0946576AC85D_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x9AEC690)
#define CLASS_2_1C6A0946576AC85D_1_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x9AECFF0)
#define CLASS_2_1C6A0946576AC85D_1_METHOD_2_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0x9AEC710)
#define CLASS_2_1C6A0946576AC85D_1_METHOD_2_A4F18DC7833F5448_OFFSET UNITYSDK_OFFSET(0x9AECCB0)
#define CLASS_2_1C6A0946576AC85D_1_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x9AEC560)
#define CLASS_2_1C6A0946576AC85D_1_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x9AED1A0)
#define CLASS_2_1C6A0946576AC85D_1_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x9AEC460)
#define CLASS_2_1C6A0946576AC85D_1_METHOD_2_D8A375BA431DF6B3_OFFSET UNITYSDK_OFFSET(0x9AEC3A0)
#define CLASS_2_1C6A0946576AC85D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9AECF90)

inline static constexpr unsigned int Class_2_1C6A0946576AC85D_1_TypeDefinitionIndex = 58065;

class Class_2_1C6A0946576AC85D_1 : public ::Class_1_8088D8743C1058EF
{
public:
	::System::String* Field_2_1; // 0x30
	::Class_1_ED5EE319EA265EB6* Field_2_2; // 0x38
	::System::String* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C6A0946576AC85D_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D8A375BA431DF6B3(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_1C6A0946576AC85D_1_METHOD_2_D8A375BA431DF6B3_OFFSET))(this, a1);
	}

	::Class_1_8088D8743C1058EF* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8088D8743C1058EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C6A0946576AC85D_1_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C6A0946576AC85D_1_METHOD_2_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_1C6A0946576AC85D_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1C6A0946576AC85D_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_2_1C6A0946576AC85D_1* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_1C6A0946576AC85D_1*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1C6A0946576AC85D_1_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_8741A88D50268453(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_1C6A0946576AC85D_1_METHOD_2_8741A88D50268453_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A4F18DC7833F5448(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1C6A0946576AC85D_1_METHOD_2_A4F18DC7833F5448_OFFSET))(this, a1, a2);
	}

	static ::Class_2_1C6A0946576AC85D_1* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_1C6A0946576AC85D_1*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_1C6A0946576AC85D_1_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}
};
