#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_8B56C3305261F4CF;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2FB1636CD336F971_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xB653FE0)
#define CLASS_1_2FB1636CD336F971_FROMFLX_OFFSET UNITYSDK_OFFSET(0xB653D80)
#define CLASS_1_2FB1636CD336F971_METHOD_1_222B45776093C097_OFFSET UNITYSDK_OFFSET(0xB654200)
#define CLASS_1_2FB1636CD336F971_METHOD_1_42E1B0366D8D72CF_OFFSET UNITYSDK_OFFSET(0xB654040)
#define CLASS_1_2FB1636CD336F971_METHOD_1_5253759692D6DAC1_OFFSET UNITYSDK_OFFSET(0xB653E00)
#define CLASS_1_2FB1636CD336F971_METHOD_1_8E0BD87CCAFEC0AF_OFFSET UNITYSDK_OFFSET(0xB654350)
#define CLASS_1_2FB1636CD336F971_METHOD_1_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xB653C50)
#define CLASS_1_2FB1636CD336F971_METHOD_1_D4ABEF7DE8CFDB8D_OFFSET UNITYSDK_OFFSET(0xB653B00)
#define CLASS_1_2FB1636CD336F971_METHOD_1_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0xB653B50)
#define CLASS_1_2FB1636CD336F971__CTOR_OFFSET UNITYSDK_OFFSET(0xB6541F0)

inline static constexpr unsigned int Class_1_2FB1636CD336F971_TypeDefinitionIndex = 47454;

class Class_1_2FB1636CD336F971 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_8B56C3305261F4CF*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FB1636CD336F971__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D4ABEF7DE8CFDB8D(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_2FB1636CD336F971_METHOD_1_D4ABEF7DE8CFDB8D_OFFSET))(this, a1);
	}

	::Class_1_2FB1636CD336F971* Method_1_D8A163211C06267F()
	{
		return ((::Class_1_2FB1636CD336F971*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FB1636CD336F971_METHOD_1_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_1_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FB1636CD336F971_METHOD_1_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_2FB1636CD336F971_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2FB1636CD336F971_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_1_2FB1636CD336F971* Method_1_222B45776093C097(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_1_2FB1636CD336F971*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2FB1636CD336F971_METHOD_1_222B45776093C097_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_5253759692D6DAC1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_2FB1636CD336F971_METHOD_1_5253759692D6DAC1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_42E1B0366D8D72CF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2FB1636CD336F971_METHOD_1_42E1B0366D8D72CF_OFFSET))(this, a1, a2);
	}

	static ::Class_1_2FB1636CD336F971* Method_1_8E0BD87CCAFEC0AF(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_1_2FB1636CD336F971*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_2FB1636CD336F971_METHOD_1_8E0BD87CCAFEC0AF_OFFSET))(a1);
	}
};
