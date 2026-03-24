#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2FB1636CD336F971.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_43C12E8BF4D3B0DF_2_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18520880)
#define CLASS_2_43C12E8BF4D3B0DF_2_FROMFLX_OFFSET UNITYSDK_OFFSET(0x185205F0)
#define CLASS_2_43C12E8BF4D3B0DF_2_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x185208E0)
#define CLASS_2_43C12E8BF4D3B0DF_2_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x18520AD0)
#define CLASS_2_43C12E8BF4D3B0DF_2_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x18520670)
#define CLASS_2_43C12E8BF4D3B0DF_2_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x185204C0)
#define CLASS_2_43C12E8BF4D3B0DF_2_METHOD_2_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x18520330)
#define CLASS_2_43C12E8BF4D3B0DF_2_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x18520C80)
#define CLASS_2_43C12E8BF4D3B0DF_2_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x185203C0)
#define CLASS_2_43C12E8BF4D3B0DF_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18520AC0)

inline static constexpr unsigned int Class_2_43C12E8BF4D3B0DF_2_TypeDefinitionIndex = 50427;

class Class_2_43C12E8BF4D3B0DF_2 : public ::Class_1_2FB1636CD336F971
{
public:
	::System::String* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_2_METHOD_2_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_1_2FB1636CD336F971* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_2FB1636CD336F971*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_2_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_2_METHOD_2_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_2_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_2_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_2_43C12E8BF4D3B0DF_2* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_43C12E8BF4D3B0DF_2*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_2_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	static ::Class_2_43C12E8BF4D3B0DF_2* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_43C12E8BF4D3B0DF_2*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_2_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_2_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_2_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
	}
};
