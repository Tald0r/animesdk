#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D0D2B3C2533F6DF2_4.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6ADC5A2D8D48E371_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x9642770)
#define CLASS_2_6ADC5A2D8D48E371_FROMFLX_OFFSET UNITYSDK_OFFSET(0x96424F0)
#define CLASS_2_6ADC5A2D8D48E371_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x9642B00)
#define CLASS_2_6ADC5A2D8D48E371_METHOD_2_157E312840A3BD00_OFFSET UNITYSDK_OFFSET(0x96427D0)
#define CLASS_2_6ADC5A2D8D48E371_METHOD_2_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x9642570)
#define CLASS_2_6ADC5A2D8D48E371_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x96423C0)
#define CLASS_2_6ADC5A2D8D48E371_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x9642CB0)
#define CLASS_2_6ADC5A2D8D48E371_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET UNITYSDK_OFFSET(0x9642270)
#define CLASS_2_6ADC5A2D8D48E371_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x96422C0)
#define CLASS_2_6ADC5A2D8D48E371__CTOR_OFFSET UNITYSDK_OFFSET(0x9642A30)

inline static constexpr unsigned int Class_2_6ADC5A2D8D48E371_TypeDefinitionIndex = 54001;

class Class_2_6ADC5A2D8D48E371 : public ::Class_1_D0D2B3C2533F6DF2_4
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ADC5A2D8D48E371__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D4ABEF7DE8CFDB8D(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_6ADC5A2D8D48E371_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET))(this, a1);
	}

	::Class_1_D0D2B3C2533F6DF2_4* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_D0D2B3C2533F6DF2_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ADC5A2D8D48E371_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ADC5A2D8D48E371_METHOD_2_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_6ADC5A2D8D48E371_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6ADC5A2D8D48E371_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_157E312840A3BD00(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6ADC5A2D8D48E371_METHOD_2_157E312840A3BD00_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_6ADC5A2D8D48E371_METHOD_2_5B0202969299569F_OFFSET))(this, a1);
	}

	static ::Class_2_6ADC5A2D8D48E371* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_6ADC5A2D8D48E371*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6ADC5A2D8D48E371_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	static ::Class_2_6ADC5A2D8D48E371* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_6ADC5A2D8D48E371*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_6ADC5A2D8D48E371_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}
};
