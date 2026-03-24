#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_4D61A7A49E7F7878;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_8FCF3FE3F8E0AF4C_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xC3996D0)
#define CLASS_1_8FCF3FE3F8E0AF4C_FROMFLX_OFFSET UNITYSDK_OFFSET(0xC399660)
#define CLASS_1_8FCF3FE3F8E0AF4C_METHOD_1_222B45776093C097_OFFSET UNITYSDK_OFFSET(0xC3996F0)
#define CLASS_1_8FCF3FE3F8E0AF4C_METHOD_1_33778EC196139AD8_OFFSET UNITYSDK_OFFSET(0xC399390)
#define CLASS_1_8FCF3FE3F8E0AF4C_METHOD_1_8E0BD87CCAFEC0AF_OFFSET UNITYSDK_OFFSET(0xC399840)
#define CLASS_1_8FCF3FE3F8E0AF4C_METHOD_1_9B00DC6B301F3F39_OFFSET UNITYSDK_OFFSET(0xC3996E0)
#define CLASS_1_8FCF3FE3F8E0AF4C_METHOD_1_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0xC399420)
#define CLASS_1_8FCF3FE3F8E0AF4C_METHOD_1_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xC399530)
#define CLASS_1_8FCF3FE3F8E0AF4C_METHOD_1_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0xC3996C0)
#define CLASS_1_8FCF3FE3F8E0AF4C_METHOD_1_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0xC399430)
#define CLASS_1_8FCF3FE3F8E0AF4C__CTOR_OFFSET UNITYSDK_OFFSET(0xC399380)

inline static constexpr unsigned int Class_1_8FCF3FE3F8E0AF4C_TypeDefinitionIndex = 44225;

class Class_1_8FCF3FE3F8E0AF4C : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FCF3FE3F8E0AF4C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_33778EC196139AD8(::Class_2_4D61A7A49E7F7878* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::Class_1_B7E341C5F1A6F199* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_4D61A7A49E7F7878*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_1_8FCF3FE3F8E0AF4C_METHOD_1_33778EC196139AD8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_8FCF3FE3F8E0AF4C_METHOD_1_A042C46DE73C3043_OFFSET))(this, a1);
	}

	::Class_1_8FCF3FE3F8E0AF4C* Method_1_D8A163211C06267F()
	{
		return ((::Class_1_8FCF3FE3F8E0AF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FCF3FE3F8E0AF4C_METHOD_1_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_1_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FCF3FE3F8E0AF4C_METHOD_1_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_8FCF3FE3F8E0AF4C_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8FCF3FE3F8E0AF4C_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_1_8FCF3FE3F8E0AF4C* Method_1_222B45776093C097(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_1_8FCF3FE3F8E0AF4C*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8FCF3FE3F8E0AF4C_METHOD_1_222B45776093C097_OFFSET))(a1, a2);
	}

	static ::Class_1_8FCF3FE3F8E0AF4C* Method_1_8E0BD87CCAFEC0AF(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_1_8FCF3FE3F8E0AF4C*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_8FCF3FE3F8E0AF4C_METHOD_1_8E0BD87CCAFEC0AF_OFFSET))(a1);
	}

	::System::Boolean Method_1_9B00DC6B301F3F39(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8FCF3FE3F8E0AF4C_METHOD_1_9B00DC6B301F3F39_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_8FCF3FE3F8E0AF4C_METHOD_1_D4DA1493472613E6_OFFSET))(this, a1);
	}
};
