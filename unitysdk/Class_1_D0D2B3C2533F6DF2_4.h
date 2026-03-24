#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D0D2B3C2533F6DF2_4_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x8E9BB00)
#define CLASS_1_D0D2B3C2533F6DF2_4_FROMFLX_OFFSET UNITYSDK_OFFSET(0x8E9BA90)
#define CLASS_1_D0D2B3C2533F6DF2_4_METHOD_1_222B45776093C097_OFFSET UNITYSDK_OFFSET(0x8E9BC00)
#define CLASS_1_D0D2B3C2533F6DF2_4_METHOD_1_8E0BD87CCAFEC0AF_OFFSET UNITYSDK_OFFSET(0x8E9BB30)
#define CLASS_1_D0D2B3C2533F6DF2_4_METHOD_1_9B00DC6B301F3F39_OFFSET UNITYSDK_OFFSET(0x8E9BB10)
#define CLASS_1_D0D2B3C2533F6DF2_4_METHOD_1_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x8E9B850)
#define CLASS_1_D0D2B3C2533F6DF2_4_METHOD_1_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x8E9B960)
#define CLASS_1_D0D2B3C2533F6DF2_4_METHOD_1_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x8E9BAF0)
#define CLASS_1_D0D2B3C2533F6DF2_4_METHOD_1_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x8E9B860)
#define CLASS_1_D0D2B3C2533F6DF2_4__CTOR_OFFSET UNITYSDK_OFFSET(0x8E9BB20)

inline static constexpr unsigned int Class_1_D0D2B3C2533F6DF2_4_TypeDefinitionIndex = 58565;

class Class_1_D0D2B3C2533F6DF2_4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0D2B3C2533F6DF2_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_D0D2B3C2533F6DF2_4_METHOD_1_A042C46DE73C3043_OFFSET))(this, a1);
	}

	::Class_1_D0D2B3C2533F6DF2_4* Method_1_D8A163211C06267F()
	{
		return ((::Class_1_D0D2B3C2533F6DF2_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0D2B3C2533F6DF2_4_METHOD_1_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_1_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0D2B3C2533F6DF2_4_METHOD_1_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_D0D2B3C2533F6DF2_4_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D0D2B3C2533F6DF2_4_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_1_D0D2B3C2533F6DF2_4* Method_1_8E0BD87CCAFEC0AF(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_1_D0D2B3C2533F6DF2_4*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_D0D2B3C2533F6DF2_4_METHOD_1_8E0BD87CCAFEC0AF_OFFSET))(a1);
	}

	static ::Class_1_D0D2B3C2533F6DF2_4* Method_1_222B45776093C097(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_1_D0D2B3C2533F6DF2_4*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D0D2B3C2533F6DF2_4_METHOD_1_222B45776093C097_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_9B00DC6B301F3F39(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D0D2B3C2533F6DF2_4_METHOD_1_9B00DC6B301F3F39_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_D0D2B3C2533F6DF2_4_METHOD_1_D4DA1493472613E6_OFFSET))(this, a1);
	}
};
