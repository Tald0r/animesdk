#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_8E6A60BF56CBA569;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_27CCD45BA8768483_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x927C400)
#define CLASS_1_27CCD45BA8768483_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x927BFC0)
#define CLASS_1_27CCD45BA8768483_1_METHOD_1_1A0B790695E07CE5_OFFSET UNITYSDK_OFFSET(0x927C460)
#define CLASS_1_27CCD45BA8768483_1_METHOD_1_277F8930086803D1_OFFSET UNITYSDK_OFFSET(0x927BF50)
#define CLASS_1_27CCD45BA8768483_1_METHOD_1_D48F6ED8C47DDD04_OFFSET UNITYSDK_OFFSET(0x927BEE0)
#define CLASS_1_27CCD45BA8768483_1_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x927C040)
#define CLASS_1_27CCD45BA8768483_1__CTOR_OFFSET UNITYSDK_OFFSET(0x927C690)

inline static constexpr unsigned int Class_1_27CCD45BA8768483_1_TypeDefinitionIndex = 61714;

class Class_1_27CCD45BA8768483_1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_8E6A60BF56CBA569*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D48F6ED8C47DDD04(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_1_METHOD_1_D48F6ED8C47DDD04_OFFSET))(this, a1);
	}

	::System::Void Method_1_277F8930086803D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_1_METHOD_1_277F8930086803D1_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_1_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1A0B790695E07CE5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_1_METHOD_1_1A0B790695E07CE5_OFFSET))(this, a1, a2);
	}
};
