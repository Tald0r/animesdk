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

#define CLASS_1_27CCD45BA8768483_2_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xB503BE0)
#define CLASS_1_27CCD45BA8768483_2_FROMFLX_OFFSET UNITYSDK_OFFSET(0xB5037A0)
#define CLASS_1_27CCD45BA8768483_2_METHOD_1_1A0B790695E07CE5_OFFSET UNITYSDK_OFFSET(0xB503C40)
#define CLASS_1_27CCD45BA8768483_2_METHOD_1_277F8930086803D1_OFFSET UNITYSDK_OFFSET(0xB503730)
#define CLASS_1_27CCD45BA8768483_2_METHOD_1_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0xB5036C0)
#define CLASS_1_27CCD45BA8768483_2_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0xB503820)
#define CLASS_1_27CCD45BA8768483_2__CTOR_OFFSET UNITYSDK_OFFSET(0xB503E70)

inline static constexpr unsigned int Class_1_27CCD45BA8768483_2_TypeDefinitionIndex = 63725;

class Class_1_27CCD45BA8768483_2 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_8E6A60BF56CBA569*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_2_METHOD_1_5C90773220FA8136_OFFSET))(this, a1);
	}

	::System::Void Method_1_277F8930086803D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_2_METHOD_1_277F8930086803D1_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_2_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_2_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1A0B790695E07CE5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_2_METHOD_1_1A0B790695E07CE5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_2_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}
};
