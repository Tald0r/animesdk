#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_09F8159A68C9F1AE;
class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_27CCD45BA8768483_4_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xBE00120)
#define CLASS_1_27CCD45BA8768483_4_FROMFLX_OFFSET UNITYSDK_OFFSET(0xBDFFD10)
#define CLASS_1_27CCD45BA8768483_4_METHOD_1_1A0B790695E07CE5_OFFSET UNITYSDK_OFFSET(0xBE00180)
#define CLASS_1_27CCD45BA8768483_4_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0xBDFFD90)
#define CLASS_1_27CCD45BA8768483_4__CTOR_OFFSET UNITYSDK_OFFSET(0xBE00390)

inline static constexpr unsigned int Class_1_27CCD45BA8768483_4_TypeDefinitionIndex = 65215;

class Class_1_27CCD45BA8768483_4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_09F8159A68C9F1AE*>* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_4__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_4_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_4_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_4_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1A0B790695E07CE5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_4_METHOD_1_1A0B790695E07CE5_OFFSET))(this, a1, a2);
	}
};
